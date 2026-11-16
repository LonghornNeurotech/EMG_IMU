# IMU Gesture Recognition Software

This directory contains the Raspberry Pi IMU data-collection, analysis,
machine-learning, visualization, and web-application software for the
Longhorn Neurotech EMG/IMU milestone project.

## Setup

Run commands from this directory:

```powershell
uv sync
```

Project dependencies are defined in `pyproject.toml` and locked in `uv.lock`.

## Dataset

The current finalized prototype dataset contains 100 Hz MPU-6050 recordings
from participants P002-P006. Each trial contains accelerometer and gyroscope
measurements.

P001/S01 was recorded at 50 Hz and is retained separately under
`data/pilot/50hz/`. It is not part of the finalized 100 Hz dataset.

## Directory structure

- `collector/`: Laptop-side collection and synchronization tools
- `data/`: Raw, pilot, and processed dataset files
- `docs/`: Figures, quality-control results, and project documentation
- `ml/`: Dataset analysis, preprocessing, and model-development code
- `pi/`: Raspberry Pi acquisition, display, and embedded-inference code
- `tests/`: Software tests
- `webapp/`: Data-collection and visualization web-application work

## Historical source

This project was migrated from
[`LonghornNeurotech/EMG-Gesture-Recognition`](https://github.com/LonghornNeurotech/EMG-Gesture-Recognition)
at source commit
`2bf6795af1af41b96dc2e12fc6f74cda0f1e9f99`.
