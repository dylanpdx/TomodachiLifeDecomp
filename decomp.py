import subprocess
import sys
from pathlib import Path
from dotenv import load_dotenv


commands = {"build", "diff", "progress", "check"}
myfolder = Path(__file__).parent


def main():
    if len(sys.argv) < 2 or sys.argv[1] not in commands:
        print("invalid, must be "+str(commands))
        return

    load_dotenv()
    
    command = sys.argv[1]
    subprocess.run([sys.executable, Path.joinpath(myfolder,"Tools",command+".py"), *sys.argv[2:]],cwd=myfolder)


if __name__ == "__main__":
    main()