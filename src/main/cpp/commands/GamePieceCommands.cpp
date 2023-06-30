// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/GamePieceCommands.h"
#include "subsystems/SubCubeShooter.h"

namespace cmd {
  using namespace frc2::cmd;  

  frc2::CommandPtr ShootCube() {
    return StartEnd([]{SubCubeShooter::GetInstance().ShootCube();},
                    []{SubCubeShooter::GetInstance().StopShooter();});
  }

  frc2::CommandPtr PickupCube() {
    return StartEnd([]{SubCubeShooter::GetInstance().IntakeCube();},
                    []{SubCubeShooter::GetInstance().StopShooter();});
  }

  frc2::CommandPtr StopShooting(){
    return RunOnce([]{SubCubeShooter::GetInstance().StopShooter();});
  }
}