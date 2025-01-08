import os

def dump_code_to_text(start_lecture, end_lecture):
    with open("code_dump.txt", "w") as text_file:
        # Iterate through lecture folders
        for lecture_folder in sorted(os.listdir()):
            lecture_number = lecture_folder.replace("LECTURE", "")
            if lecture_number.isdigit():
                if int(start_lecture) <= int(lecture_number) <= int(end_lecture):
                    lecture_folder_path = os.path.join(os.getcwd(), lecture_folder)
                    if os.path.isdir(lecture_folder_path) and lecture_folder.lower() != "misc":
                        # Iterate through files in the lecture folder
                        for root, dirs, files in os.walk(lecture_folder_path):
                            for file in files:
                                if file.endswith((".cpp", ".c", ".h", ".txt")):
                                    file_path = os.path.join(root, file)
                                    with open(file_path, "r", encoding="utf-8") as f:
                                        code = f.read()
                                        # Specify wider centering
                                        text_file.write(f"\n{'LECTURE ' + lecture_number:^80}\n")
                                        text_file.write(f"{file:^80}\n\n")
                                        text_file.write(code.strip())  # Remove trailing whitespace
                                        text_file.write("\n\n")  # Add a single newline after each code block

# Prompt the user for the range of lectures
start_lecture = input("Enter the starting lecture number: ")
end_lecture = input("Enter the ending lecture number: ")

dump_code_to_text(start_lecture, end_lecture)
