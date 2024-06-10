@echo off
setlocal

:: Check if Python virtual environment exist
IF NOT EXIST venv\Scripts\activate (
    echo Creating virtual environment...
    python -m venv venv
)

:: Activate virtual environment
call venv\Scripts\activate

:: Run main.py
python main.py

:: Deactivate virtual environment
deactivate

endlocal
