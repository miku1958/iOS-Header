//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationManagerObserver-Protocol.h>
#import <Navigation/MNMapsAppStateMonitorObserver-Protocol.h>
#import <Navigation/MNNavigationStateInterface-Protocol.h>
#import <Navigation/MNSuggestionsManagerObserver-Protocol.h>
#import <Navigation/MNVehicleDetectorObserver-Protocol.h>

@class GEOApplicationAuditToken, MNCommuteSession, MNMapsAppStateMonitor, MNNavigationState, MNObserverHashTable, MNResourceManager, MNSuggestionsManager, NSString;
@protocol MNNavigationSessionManagerDelegate;

@interface MNNavigationStateManager : NSObject <MNMapsAppStateMonitorObserver, MNLocationManagerObserver, MNVehicleDetectorObserver, MNSuggestionsManagerObserver, MNNavigationStateInterface>
{
    BOOL _isStarted;
    MNNavigationState *_currentState;
    MNMapsAppStateMonitor *_mapsAppStateMonitor;
    MNSuggestionsManager *_suggestionsManager;
    MNCommuteSession *_commuteSession;
    MNResourceManager *_resourceManager;
    MNObserverHashTable *_navigationStateObservers;
    GEOApplicationAuditToken *_auditToken;
    id<MNNavigationSessionManagerDelegate> _navigationDelegate;
}

@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property (readonly, nonatomic) MNCommuteSession *commuteSession;
@property (readonly, nonatomic) MNNavigationState *currentState; // @synthesize currentState=_currentState;
@property (readonly, nonatomic) long long currentStateType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isStarted; // @synthesize isStarted=_isStarted;
@property (weak, nonatomic) id<MNNavigationSessionManagerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property (readonly, nonatomic) MNSuggestionsManager *suggestionsManager; // @synthesize suggestionsManager=_suggestionsManager;
@property (readonly) Class superclass;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_acquireDesiredResourcePolicyAfterDelay:(double)arg1;
- (void)_changeToDesiredLocationProviderType;
- (id)_initialState;
- (void)_replayStateForNewObserver:(id)arg1;
- (long long)_stateTypeForState:(id)arg1;
- (void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)changeSettings:(id)arg1;
- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (void)commuteSessionDidArrive:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)isMapsActive;
- (BOOL)isVehicleDetected;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)mapsAppStateMonitor:(id)arg1 didChangeToState:(unsigned int)arg2;
- (id)navSessionDestination;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setCurrentState:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setFullGuidanceMode:(BOOL)arg1;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)start;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)stopPredictingDestinations;
- (void)suggestionsManager:(id)arg1 didAddSuggestion:(id)arg2;
- (void)switchToRouteWithDetails:(id)arg1;
- (void)transitionToState:(id)arg1;
- (void)updateDestination:(id)arg1;
- (void)vehicleDetector:(id)arg1 didChangeStateTo:(unsigned long long)arg2;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;

@end

