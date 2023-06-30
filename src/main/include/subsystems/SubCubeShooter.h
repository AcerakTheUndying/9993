// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "Constants.h"
#include <ctre/Phoenix.h>

class SubCubeShooter : public frc2::SubsystemBase {
 public:

  static SubCubeShooter& GetInstance() {
    static SubCubeShooter inst;
    return inst;
  }
  
  SubCubeShooter();
  void ShootCube();
  void IntakeCube();
  void StopShooter();
  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  ctre::phoenix::motorcontrol::can::WPI_VictorSPX _cubeShootMotor{canid::CubeShooter};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  std::string_view IntakeMultiplier;
  std::string_view ShooterMultiplier;
};
