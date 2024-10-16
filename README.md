# Directional Lights Control Interface (DLCI) - Software Requirements

## Inputs

- **SRS_001: Right Switch**  
  DLCI shall receive the right switch state in Boolean format.

- **SRS_002: Left Switch**  
  DLCI shall receive the left switch state in Boolean format.

## Outputs

- **SRS_003: Right Lamp**  
  DLCI shall output the right lamp state in Boolean format.

- **SRS_004: Left Lamp**  
  DLCI shall output the left lamp state in Boolean format.

## Functional Requirements

- **SRS_005**  
  DLCI shall set the `Right Lamp` (SRS_003) to **High** when the `Right Switch` (SRS_001) is active.

- **SRS_006**  
  DLCI shall set the `Left Lamp` (SRS_004) to **High** when the `Left Switch` (SRS_002) is active.

- **SRS_007**  
  DLCI shall set the `Right Lamp` (SRS_003) to **Low** when:
  - The `Right Switch` (SRS_001) is inactive, **OR**
  - The `Right Switch` (SRS_001) is active **AND** the `Left Switch` (SRS_002) is active.

- **SRS_008**  
  DLCI shall set the `Left Lamp` (SRS_004) to **Low** when:
  - The `Left Switch` (SRS_002) is inactive, **OR**
  - The `Right Switch` (SRS_001) is active **AND** the `Left Switch` (SRS_002) is active.

---

**SWC: Directional Lights (DLCI)**  
Author: Sandeep Reddy Modugu 
Version: 1  
Date: [16/10/2024]
