# Simple Text Saver

Small command-line program that saves user input to a text file.

## Description

The program prompts for a filename (without the `.txt` extension), then accepts lines of text from the user. Enter `>>>` on a new line to finish and save the input to `<filename>.txt`.

## Build

- On Windows (PowerShell) with `g++` installed:

```powershell
g++ Source.cpp -o text_saver.exe
.
	ext_saver.exe
```

- On macOS/Linux:

```bash
g++ Source.cpp -o text_saver
./text_saver
```

## Usage

1. Run the compiled program.
2. When prompted, type the filename (do not include `.txt`).
3. Enter any lines of text; press Enter to start a new line.
4. Type `>>>` on its own line to finish and save.

Example session:

```text
Filename: notes
Enter text (type >>> on a new line to finish):
Hello world
This is a note.
>>>
Saved to notes.txt
```

## Notes

- This README assumes the project contains `Source.cpp` which implements the behavior described above.
- If you want, I can also add a small example `Source.cpp` or a Makefile.
