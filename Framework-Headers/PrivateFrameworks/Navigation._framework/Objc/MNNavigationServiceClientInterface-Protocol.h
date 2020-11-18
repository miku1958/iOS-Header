//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOAlightNotificationFeedback, GEOETARoute, GEONavigationGuidanceState, GEOStep, MNActiveRouteDetails, MNAudioOutputSetting, MNLocationDetails, MNTracePlaybackDetails, MNTrafficIncidentAlertDetails, NSArray, NSData, NSError, NSString;

@protocol MNNavigationServiceClientInterface <NSObject>
- (void)didActivateAudioSession:(BOOL)arg1;
- (void)didArrive;
- (void)didCancelReroute;
- (void)didChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)didChangeGuidanceLevel:(int)arg1;
- (void)didChangeGuidanceState:(GEONavigationGuidanceState *)arg1;
- (void)didChangeNavigationState:(int)arg1;
- (void)didEnableGuidancePrompts:(BOOL)arg1;
- (void)didFailWithError:(NSError *)arg1;
- (void)didInvalidateTrafficIncidentAlert:(MNTrafficIncidentAlertDetails *)arg1;
- (void)didReceiveTrafficIncidentAlert:(MNTrafficIncidentAlertDetails *)arg1;
- (void)didRerouteWithDetails:(MNActiveRouteDetails *)arg1 withLocationDetails:(MNLocationDetails *)arg2;
- (void)didSignalAlightForStepAtIndex:(unsigned long long)arg1;
- (void)didStartSpeakingPrompt:(NSString *)arg1;
- (void)didStartUsingVoiceLanguage:(NSString *)arg1;
- (void)didSwitchToNewTransportType:(int)arg1 newRoute:(MNActiveRouteDetails *)arg2;
- (void)didUpdateActiveRouteDetails:(MNActiveRouteDetails *)arg1;
- (void)didUpdateAudioOutputCurrentSetting:(MNAudioOutputSetting *)arg1;
- (void)didUpdateAudioOutputCurrentSettingForVoicePrompt:(MNAudioOutputSetting *)arg1;
- (void)didUpdateAudioOutputRouteSelection:(unsigned long long)arg1;
- (void)didUpdateAudioOutputSettings:(NSData *)arg1;
- (void)didUpdateDistanceUntilManeuver:(double)arg1 timeUntilManeuver:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)didUpdateDistanceUntilSign:(double)arg1 timeUntilSign:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)didUpdateFeedback:(GEOAlightNotificationFeedback *)arg1 forAlightingStepAtIndex:(unsigned long long)arg2;
- (void)didUpdateHeading:(double)arg1 accuracy:(double)arg2;
- (void)didUpdateMatchedLocation:(MNLocationDetails *)arg1;
- (void)didUpdateProceedToRouteDistance:(double)arg1 displayString:(NSString *)arg2 closestStepIndex:(unsigned long long)arg3;
- (void)didUpdateRemainingTime:(double)arg1 remainingDistance:(double)arg2;
- (void)didUpdateStepIndex:(unsigned long long)arg1 legIndex:(unsigned long long)arg2;
- (void)didUpdateTracePlaybackDetails:(MNTracePlaybackDetails *)arg1;
- (void)didUpdateTrafficForETARoute:(GEOETARoute *)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 withRouteDetails:(MNActiveRouteDetails *)arg4;
- (void)didUpdateTrafficIncidentAlert:(MNTrafficIncidentAlertDetails *)arg1;
- (void)displayManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)displayPrimaryStep:(GEOStep *)arg1 instructions:(NSArray *)arg2 shieldType:(int)arg3 shieldText:(NSString *)arg4 drivingSide:(int)arg5 maneuverStepIndex:(unsigned long long)arg6 isSynthetic:(BOOL)arg7;
- (void)displaySecondaryStep:(GEOStep *)arg1 instructions:(NSArray *)arg2 shieldType:(int)arg3 shieldText:(NSString *)arg4 drivingSide:(int)arg5;
- (void)failedRerouteWithErrorCode:(long long)arg1;
- (void)hideSecondaryStep;
- (void)willChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)willPauseNavigation;
- (void)willReroute;
- (void)willResumeFromPauseNavigation;
@end

