//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (NLWorkoutInitiation)
+ (BOOL)_fiui_isValidWorkoutScheme:(id)arg1;
+ (id)_fiui_supportedQueryItemNames;
+ (id)_fiui_supportedSchemes;
+ (id)_launchURLWithHostname:(id)arg1 workoutIdentifier:(id)arg2;
+ (id)fiui_URLDistanceUnit;
+ (id)fiui_URLEnergyUnit;
+ (id)fiui_URLTimeUnit;
+ (id)fiui_endWorkoutURLWithIdentifier:(id)arg1;
+ (id)fiui_pauseWorkoutURLWithIdentifier:(id)arg1;
+ (id)fiui_startBackdatedWorkoutURLWithDate:(id)arg1 workoutIdentifier:(id)arg2 workoutType:(unsigned long long)arg3 isIndoor:(BOOL)arg4 swimmingLocationType:(long long)arg5 showPicker:(BOOL)arg6;
+ (id)fiui_workoutInitiationURLWithWorkout:(id)arg1 presentConfiguration:(BOOL)arg2 skipCountdown:(BOOL)arg3;
+ (id)fiui_workoutPickerURL;
+ (id)fiui_workoutPickerURLComponents;
- (id)fiui_activityType;
- (unsigned long long)fiui_goalType;
- (double)fiui_goalValue;
- (BOOL)fiui_isEndWorkoutURL;
- (BOOL)fiui_isPauseWorkoutURL;
- (BOOL)fiui_isStartBackdatedWorkoutURL;
- (BOOL)fiui_isValidMachineWorkoutLaunchURL;
- (BOOL)fiui_isValidStartWorkoutURL;
- (BOOL)fiui_presentGoalConfiguration;
@end

