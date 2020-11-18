//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceClientInterface-Protocol.h>
#import <Navigation/MNNavigationServiceRemoteProxyDelegate-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, MNAudioOutputSetting, MNCommuteDestination, MNLocation, MNNavigationDetails, MNNavigationServiceRemoteProxy, MNObserverHashTable, MNSettings, NSArray, NSString;
@protocol MNNavigationServiceProxy;

@interface MNNavigationService : NSObject <MNNavigationServiceClientInterface, MNNavigationServiceRemoteProxyDelegate>
{
    MNObserverHashTable *_navigationObservers;
    id<MNNavigationServiceProxy> _proxy;
    MNNavigationServiceRemoteProxy *_remoteProxy;
    MNNavigationDetails *_details;
    MNSettings *_cachedSettings;
    MNAudioOutputSetting *_currentAudioOutputSetting;
    unsigned long long _routeSelection;
    NSArray *_audioSettings;
    MNAudioOutputSetting *_currentSettingForVoicePrompt;
}

@property (readonly, nonatomic) NSArray *alternateRoutes;
@property (readonly, nonatomic) NSArray *audioSettings; // @synthesize audioSettings=_audioSettings;
@property (readonly, nonatomic) MNAudioOutputSetting *currentAudioOutputSetting; // @synthesize currentAudioOutputSetting=_currentAudioOutputSetting;
@property (readonly, nonatomic) GEODirectionsRequest *currentRequest;
@property (readonly, nonatomic) GEODirectionsResponse *currentResponse;
@property (readonly, nonatomic) MNAudioOutputSetting *currentSettingForVoicePrompt; // @synthesize currentSettingForVoicePrompt=_currentSettingForVoicePrompt;
@property (readonly, nonatomic) NSString *currentVoiceLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int desiredNavigationType;
@property (readonly, nonatomic) int desiredTransportType;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) NSString *destinationName;
@property (readonly, nonatomic) double distanceUntilManeuver;
@property (readonly, nonatomic) double distanceUntilSign;
@property (nonatomic) BOOL guidancePromptsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) BOOL isDetour;
@property (readonly, nonatomic) BOOL isInVehicle;
@property (readonly, nonatomic) BOOL isPredictingDestination;
@property (readonly, nonatomic) BOOL isTrackingCurrentLocation;
@property (readonly, nonatomic) MNLocation *lastLocation;
@property (readonly, nonatomic) int navigationState;
@property (readonly, nonatomic) int navigationTransportType;
@property (readonly, nonatomic) int navigationType;
@property (readonly, nonatomic) GEOComposedWaypoint *origin;
@property (readonly, nonatomic) GEOComposedWaypoint *originalDestination;
@property (readonly, nonatomic) NSString *originalDestinationName;
@property (readonly, nonatomic) GEOComposedWaypoint *originalOrigin;
@property (readonly, nonatomic) NSArray *possibleCommuteDestinations;
@property (readonly, nonatomic) MNCommuteDestination *predictedCommuteDestination;
@property (readonly, nonatomic) unsigned long long reconnectionRouteIndex;
@property (readonly, nonatomic) double remainingTime;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) unsigned long long routeIndex;
@property (readonly, nonatomic) unsigned long long routeSelection; // @synthesize routeSelection=_routeSelection;
@property (readonly, nonatomic) BOOL speechMuted;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timeUntilManeuver;
@property (readonly, nonatomic) double timeUntilSign;
@property (readonly, nonatomic) NSArray *traceBookmarks;
@property (readonly, nonatomic) double traceDuration;
@property (readonly, nonatomic) NSString *traceFileName;
@property (nonatomic) BOOL traceIsPlaying;
@property (readonly, nonatomic) NSString *tracePath;
@property (nonatomic) double tracePosition;

+ (unsigned long long)_hashForProtocol:(id)arg1;
+ (unsigned long long)clientInterfaceHash;
+ (unsigned long long)daemonInterfaceHash;
+ (id)sharedService;
- (void).cxx_destruct;
- (void)_reset;
- (void)addObserver:(id)arg1;
- (unsigned long long)alternateRouteIndexForRoute:(id)arg1;
- (void)changeSettings:(id)arg1;
- (void)closeForClient:(id)arg1;
- (id)displayETAForRoute:(id)arg1;
- (unsigned long long)displayRemainingMinutesForRoute:(id)arg1;
- (id)etaRouteForRoute:(id)arg1;
- (id)init;
- (BOOL)isOpenForClient:(id)arg1;
- (void)navigationServiceProxy:(id)arg1 didActivateAudioSession:(BOOL)arg2;
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationServiceProxy:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
- (void)navigationServiceProxy:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didRerouteWithDetails:(id)arg2 withLocationDetails:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationServiceProxy:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateActiveRouteDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputCurrentSetting:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputCurrentSettingForVoicePrompt:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputRouteSelection:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputSettings:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateIsInVehicle:(BOOL)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdatePossibleCommuteDestinations:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4 forRoute:(id)arg5;
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8;
- (void)navigationServiceProxy:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationServiceProxy:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationServiceProxy:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 usePersistentDisplay:(BOOL)arg2;
- (void)navigationServiceProxy:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxyBeginGuidanceUpdate:(id)arg1;
- (void)navigationServiceProxyDidArrive:(id)arg1;
- (void)navigationServiceProxyDidCancelReroute:(id)arg1;
- (void)navigationServiceProxyEndGuidanceUpdate:(id)arg1;
- (void)navigationServiceProxyHideSecondaryStep:(id)arg1;
- (void)navigationServiceProxyPredictingDidArrive:(id)arg1;
- (void)navigationServiceProxyWillPauseNavigation:(id)arg1;
- (void)navigationServiceProxyWillReroute:(id)arg1;
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg1;
- (void)openForClient:(id)arg1;
- (id)predictedDestination;
- (id)predictedDestinationName;
- (id)predictedETARoute;
- (id)predictedRoute;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)remoteProxyDidFinishReconnecting:(id)arg1;
- (void)removeObserver:(id)arg1;
- (BOOL)repeatCurrentGuidance;
- (BOOL)repeatCurrentTrafficAlert;
- (void)resumeOriginalDestination;
- (id)routeIncidentsForRoute:(id)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setFullGuidanceMode:(BOOL)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTracePlaybackSpeed:(double)arg1;
- (id)settings;
- (void)startNavigationForRouteDetails:(id)arg1;
- (void)startNavigationWithRoute:(id)arg1 withFullGuidance:(BOOL)arg2;
- (void)startPredictingDestinations;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)stopPredictingDestinations;
- (void)switchToRoute:(id)arg1;
- (void)updateDestination:(id)arg1;
- (BOOL)vibrateForPrompt:(unsigned long long)arg1;

@end

