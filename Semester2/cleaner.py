import os

def delete_files_in_directory(directory):
    for item in os.listdir(directory):
        item_path = os.path.join(directory, item)
        
        if os.path.isfile(item_path):
            # Delete .exe files or tempCodeRunner files
            if item.endswith(".exe") or item.startswith("tempCodeRunner"):
                os.remove(item_path)
                print(f"Deleted: {item_path}")
        elif os.path.isdir(item_path):
            # Recursively call the function for subdirectories
            delete_files_in_directory(item_path)

# Get the current working directory
cwd = os.getcwd()

# Iterate over each item in the current working director
for item in os.listdir(cwd):
    item_path = os.path.join(cwd, item)
    
    # Check if the item is a directory
    if os.path.isdir(item_path):
        print(f"Entering directory: {item_path}")
        # Delete files inside the directory
        delete_files_in_directory(item_path)

print("Cleanup completed.")
