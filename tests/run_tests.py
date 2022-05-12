import os
import subprocess
BINARIES_LOCATION = "../bin/"
INPUT_FILES_LOCATION = "input"
OUTPUT_FILES_LOCATION = "output"

def get_output_file_name(input_file_name):
    return input_file_name[:-3]+".out"

def get_input_files_path(input_file_type):
    return f'{INPUT_FILES_LOCATION}/{input_file_type}'

def get_input_file_location(input_file_type, file_name):
    return f'{INPUT_FILES_LOCATION}/{input_file_type}/{file_name}'

def get_output_file_location(input_file_type, file_name):
    return f'{OUTPUT_FILES_LOCATION}/{input_file_type}/{get_output_file_name(file_name)}'

devnull_file = open(os.devnull, 'wb')
for input_file_type in ['sorted', 'random', 'reversed']:
    for file_name in os.listdir(get_input_files_path(input_file_type)):
        input_file_name = get_input_file_location(input_file_type, file_name)
        output_file_name = get_output_file_location(input_file_type, file_name)
        print("Running input file", input_file_name, "...")
        comps = []
        cpus = []
        for binary_name in sorted(os.listdir(BINARIES_LOCATION)):
            binary_location = f'{BINARIES_LOCATION}/{binary_name}'
            p1 = subprocess.Popen(["cat", input_file_name], stdout=subprocess.PIPE)
            p2 = subprocess.Popen([binary_location], stderr=devnull_file, stdin=p1.stdout, stdout=subprocess.PIPE)
            if binary_name.endswith("comp"):
                sort_name = binary_name[:-5]
                comps.append((sort_name, p2.stdout.read().decode("utf-8")))
            elif binary_name.endswith("cpu"):
                sort_name = binary_name[:-4]
                cpus.append((sort_name, p2.stdout.read().decode("utf-8")))
        
        with open(output_file_name, 'w') as file:
            file.write("average # of comparisons:\n")
            for binary, result in comps:
                file.write(f'\t{binary}: {result}')
            file.write("cpu times:\n")
            for binary, result in cpus:
                file.write(f'\t{binary}: {result}')
        
devnull_file.close()