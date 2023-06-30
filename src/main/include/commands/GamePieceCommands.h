// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include <frc2/command/commands.h>

namespace cmd {
  frc2::CommandPtr ShootCube();
  frc2::CommandPtr PickupCube();
  frc2::CommandPtr StopShooting();
}