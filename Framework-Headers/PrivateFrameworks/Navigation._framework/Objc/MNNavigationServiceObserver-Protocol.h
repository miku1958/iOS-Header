//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOAlightNotificationFeedback, GEOComposedRoute, GEOETARoute, GEONavigationGuidanceState, GEOStep, MNLocation, MNNavigationService, MNTrafficIncidentAlert, NSArray, NSError, NSString;

@protocol MNNavigationServiceObserver <NSObject>

@optional
- (void)navigationService:(MNNavigationService *)arg1 didActivateAudioSession:(BOOL)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationService:(MNNavigationService *)arg1 didChangeGuidanceLevel:(int)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didChangeGuidanceState:(GEONavigationGuidanceState *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didEnableGuidancePrompts:(BOOL)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didFailWithError:(NSError *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didInvalidateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didPlayTracePosition:(double)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didReceiveTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2 responseCallback:(void (^)(BOOL))arg3;
- (void)navigationService:(MNNavigationService *)arg1 didRecordTraceBookmarkWithID:(unsigned long long)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didReroute:(GEOComposedRoute *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didSeekToTracePosition:(double)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(GEOComposedRoute *)arg3;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateAudioOutputSettings:(NSArray *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateFeedback:(GEOAlightNotificationFeedback *)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateIncidentsForRoute:(GEOComposedRoute *)arg2 etaRoute:(GEOETARoute *)arg3 incidentsOffset:(unsigned int)arg4;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateMatchedLocation:(MNLocation *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationService:(MNNavigationService *)arg1 displayPrimaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8;
- (void)navigationService:(MNNavigationService *)arg1 displaySecondaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6;
- (void)navigationService:(MNNavigationService *)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationService:(MNNavigationService *)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceDidArrive:(MNNavigationService *)arg1;
- (void)navigationServiceDidCancelReroute:(MNNavigationService *)arg1;
- (void)navigationServiceDidFinishLoadingTrace:(MNNavigationService *)arg1;
- (void)navigationServiceDidHideSecondaryStep:(MNNavigationService *)arg1;
- (void)navigationServiceDidPauseTrace:(MNNavigationService *)arg1;
- (void)navigationServiceDidResumeTrace:(MNNavigationService *)arg1;
- (void)navigationServiceWillPause:(MNNavigationService *)arg1;
- (void)navigationServiceWillReroute:(MNNavigationService *)arg1;
- (void)navigationServiceWillResumeFromPause:(MNNavigationService *)arg1;
@end

