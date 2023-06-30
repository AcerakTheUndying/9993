
// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/SubCubeShooter.h"
#include "Constants.h"



SubCubeShooter::SubCubeShooter(){
    _cubeShootMotor.SetInverted(false);
    _cubeShootMotor.SetNeutralMode(NeutralMode::Brake);
}


void SubCubeShooter::IntakeCube() {
    _cubeShootMotor.Set(0.5);
}

void SubCubeShooter::ShootCube(){
    _cubeShootMotor.Set(-1);
}

void SubCubeShooter::StopShooter(){
    _cubeShootMotor.Set(0);
}


// This method will be called once per scheduler run
void SubCubeShooter::Periodic() {}
