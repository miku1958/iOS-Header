//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationStateInterface-Protocol.h>

@class GEOApplicationAuditToken, MNNavigationState, MNObserverHashTable, NSString;
@protocol MNNavigationSessionManagerDelegate;

@interface MNNavigationStateManager : NSObject <MNNavigationStateInterface>
{
    BOOL _isStarted;
    MNNavigationState *_currentState;
    MNObserverHashTable *_navigationStateObservers;
    GEOApplicationAuditToken *_auditToken;
    id<MNNavigationSessionManagerDelegate> _navigationDelegate;
}

@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property (readonly, nonatomic) MNNavigationState *currentState; // @synthesize currentState=_currentState;
@property (readonly, nonatomic) unsigned long long currentStateType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isStarted; // @synthesize isStarted=_isStarted;
@property (weak, nonatomic) id<MNNavigationSessionManagerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property (readonly) Class superclass;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_changeToDesiredLocationProviderTypeForState:(id)arg1;
- (id)_initialState;
- (void)_replayStateForNewObserver:(id)arg1;
- (unsigned long long)_stateTypeForState:(id)arg1;
- (void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)changeSettings:(id)arg1;
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;
- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (void)commuteSessionDidArrive:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (id)navSessionDestination;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)resumeOriginalDestination;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setCurrentState:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setFullGuidanceMode:(BOOL)arg1;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)start;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)stopPredictingDestinations;
- (void)switchToRoute:(id)arg1;
- (void)transitionToState:(id)arg1;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;

@end
