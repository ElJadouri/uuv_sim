
"use strict";

let SwitchToAutomatic = require('./SwitchToAutomatic.js')
let GetPIDParams = require('./GetPIDParams.js')
let ClearWaypoints = require('./ClearWaypoints.js')
let IsRunningTrajectory = require('./IsRunningTrajectory.js')
let StartTrajectory = require('./StartTrajectory.js')
let SetSMControllerParams = require('./SetSMControllerParams.js')
let InitCircularTrajectory = require('./InitCircularTrajectory.js')
let GetMBSMControllerParams = require('./GetMBSMControllerParams.js')
let GetSMControllerParams = require('./GetSMControllerParams.js')
let InitRectTrajectory = require('./InitRectTrajectory.js')
let SetPIDParams = require('./SetPIDParams.js')
let InitHelicalTrajectory = require('./InitHelicalTrajectory.js')
let GoTo = require('./GoTo.js')
let GoToIncremental = require('./GoToIncremental.js')
let InitWaypointSet = require('./InitWaypointSet.js')
let SetMBSMControllerParams = require('./SetMBSMControllerParams.js')
let AddWaypoint = require('./AddWaypoint.js')
let GetWaypoints = require('./GetWaypoints.js')
let SwitchToManual = require('./SwitchToManual.js')
let ResetController = require('./ResetController.js')
let InitWaypointsFromFile = require('./InitWaypointsFromFile.js')
let Hold = require('./Hold.js')

module.exports = {
  SwitchToAutomatic: SwitchToAutomatic,
  GetPIDParams: GetPIDParams,
  ClearWaypoints: ClearWaypoints,
  IsRunningTrajectory: IsRunningTrajectory,
  StartTrajectory: StartTrajectory,
  SetSMControllerParams: SetSMControllerParams,
  InitCircularTrajectory: InitCircularTrajectory,
  GetMBSMControllerParams: GetMBSMControllerParams,
  GetSMControllerParams: GetSMControllerParams,
  InitRectTrajectory: InitRectTrajectory,
  SetPIDParams: SetPIDParams,
  InitHelicalTrajectory: InitHelicalTrajectory,
  GoTo: GoTo,
  GoToIncremental: GoToIncremental,
  InitWaypointSet: InitWaypointSet,
  SetMBSMControllerParams: SetMBSMControllerParams,
  AddWaypoint: AddWaypoint,
  GetWaypoints: GetWaypoints,
  SwitchToManual: SwitchToManual,
  ResetController: ResetController,
  InitWaypointsFromFile: InitWaypointsFromFile,
  Hold: Hold,
};
