//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNGuidanceManager-Protocol.h>
#import <Navigation/MNTimeManagerObserver-Protocol.h>

@class GEOComposedGuidanceEvent, MNAnnouncementPlanEvent, MNGuidanceSignInfo, MNLocation, MNNavigationSession, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol MNAnnoucementStrategy, MNGuidanceManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNGuidanceEventManager : NSObject <MNGuidanceManager, MNTimeManagerObserver>
{
    id<MNGuidanceManagerDelegate> _delegate;
    MNNavigationSession *_navigationSession;
    NSMutableArray *_events;
    GEOComposedGuidanceEvent *_nextEvent;
    id<MNAnnoucementStrategy> _announcementStrategy;
    NSMutableDictionary *_announcementsSpoken;
    NSMutableDictionary *_hapticsTriggered;
    GEOComposedGuidanceEvent *_currentLaneGuidanceEvent;
    MNGuidanceSignInfo *_signInfo;
    GEOComposedGuidanceEvent *_startSpokenGuidanceEvent;
    GEOComposedGuidanceEvent *_getOnRouteSpokenGuidanceEvent;
    GEOComposedGuidanceEvent *_endSpokenGuidanceEvent;
    GEOComposedGuidanceEvent *_returnToRouteSpokenGuidanceEvent;
    NSMutableArray *_startSignGuidanceEvents;
    GEOComposedGuidanceEvent *_endSignGuidanceEvent;
    GEOComposedGuidanceEvent *_returnToRouteSignGuidanceEvent;
    BOOL _hasBeenOnRouteOnce;
    BOOL _canSpeakReturnToRouteAnnouncement;
    double _timeLastAnnouncementStarted;
    double _timeLastAnnouncementEnded;
    MNAnnouncementPlanEvent *_lastAnnouncementEvent;
    unsigned long long _lastStepIndex;
    BOOL _hasStickyEvents;
    MNLocation *_location;
    double _speed;
    NSMutableArray *_validEvents;
    NSMutableDictionary *_feedback;
    NSArray *_previousSignEvents;
    GEOComposedGuidanceEvent *_previousLaneGuidanceEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MNGuidanceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *events; // @synthesize events=_events;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MNLocation *location; // @synthesize location=_location;
@property (nonatomic) double speed; // @synthesize speed=_speed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_adjustedVehicleSpeed;
- (double)_calculateDurationToSpeakEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;
- (void)_considerAnnouncements;
- (void)_considerHaptics;
- (void)_considerLaneGuidance;
- (void)_considerSignGuidance;
- (void)_considerStickiness;
- (void)_filterValidEvents;
- (BOOL)_hasSpokenEvent:(id)arg1;
- (void)_initSpecialGuidanceEvents;
- (BOOL)_isEventValid:(id)arg1 start:(double)arg2 end:(double)arg3;
- (BOOL)_isValidEvent:(id)arg1;
- (void)_markEventSpoken:(id)arg1;
- (void)_notifyAnalyticsForNewEvents:(id)arg1 previousEvents:(id)arg2;
- (void)_notifySpeechEvent:(id)arg1 variant:(unsigned long long)arg2;
- (id)_selectAnnouncementForEvent:(id)arg1 withTimeRemaining:(double)arg2 withMinIndex:(unsigned long long)arg3 selectedIndex:(out unsigned long long *)arg4;
- (id)_serverStringDictionaryForEvent:(id)arg1 spoken:(BOOL)arg2;
- (BOOL)_shouldUseLocation:(id)arg1;
- (id)_spokenEventsRemainingInStep;
- (void)_stepDidChange;
- (double)_timeRemainingForEvent:(id)arg1;
- (double)_timeUntilEventTrigger:(id)arg1;
- (void)dealloc;
- (double)durationOfEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;
- (id)initWithNavigationSession:(id)arg1;
- (BOOL)repeatLastGuidanceAnnouncement:(id)arg1;
- (void)reset;
- (void)stop;
- (void)timeManagerDidChangeProvider:(id)arg1;
- (double)timeSinceLastAnnouncement;
- (double)timeUntilNextAnnouncement;
- (void)updateDestination:(id)arg1;
- (void)updateForReroute:(id)arg1;
- (void)updateForReturnToRoute;
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;

@end

