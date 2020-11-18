//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, CalGeocoder, EKTravelEngineHypothesis, EKTravelEngineOriginalEvent, EKTravelEngineThrottle, GEORouteHypothesizer, NSData, NSString;
@protocol OS_dispatch_queue;

@interface EKTravelEngineAgendaEntry : NSObject
{
    BOOL _dismissed;
    BOOL _geocodedEventEncountered;
    BOOL _hypothesizerSentAtLeastOneHypothesis;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _entrySignificantlyChangedBlock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    EKTravelEngineOriginalEvent *_originalEventInternal;
    EKTravelEngineThrottle *_throttle;
    CalGeocoder *_geocoder;
    GEORouteHypothesizer *_hypothesizer;
    EKTravelEngineHypothesis *_latestHypothesis;
    CLLocation *_geoLocation;
    NSData *_mapKitHandle;
    long long _travelTimeThresholdExceededState;
    double _maximumTravelDurationEncountered;
    NSString *_agendaEntryIdentifier;
}

@property (strong, nonatomic) NSString *agendaEntryIdentifier; // @synthesize agendaEntryIdentifier=_agendaEntryIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (nonatomic) BOOL dismissed; // @synthesize dismissed=_dismissed;
@property (copy, nonatomic) CDUnknownBlockType entrySignificantlyChangedBlock; // @synthesize entrySignificantlyChangedBlock=_entrySignificantlyChangedBlock;
@property (strong, nonatomic) CLLocation *geoLocation; // @synthesize geoLocation=_geoLocation;
@property (nonatomic) BOOL geocodedEventEncountered; // @synthesize geocodedEventEncountered=_geocodedEventEncountered;
@property (strong, nonatomic) CalGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property (strong, nonatomic) GEORouteHypothesizer *hypothesizer; // @synthesize hypothesizer=_hypothesizer;
@property (nonatomic) BOOL hypothesizerSentAtLeastOneHypothesis; // @synthesize hypothesizerSentAtLeastOneHypothesis=_hypothesizerSentAtLeastOneHypothesis;
@property (strong, nonatomic) EKTravelEngineHypothesis *latestHypothesis; // @synthesize latestHypothesis=_latestHypothesis;
@property (strong, nonatomic) NSData *mapKitHandle; // @synthesize mapKitHandle=_mapKitHandle;
@property (nonatomic) double maximumTravelDurationEncountered; // @synthesize maximumTravelDurationEncountered=_maximumTravelDurationEncountered;
@property (readonly, nonatomic) EKTravelEngineOriginalEvent *originalEvent;
@property (strong, nonatomic) EKTravelEngineOriginalEvent *originalEventInternal; // @synthesize originalEventInternal=_originalEventInternal;
@property (strong, nonatomic) EKTravelEngineThrottle *throttle; // @synthesize throttle=_throttle;
@property (nonatomic) long long travelTimeThresholdExceededState; // @synthesize travelTimeThresholdExceededState=_travelTimeThresholdExceededState;
@property (copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (void)_accountForGeocodingFailureWithError:(id)arg1;
+ (void)_accountForHypothesizerNeverHavingSentHypothesis;
+ (void)_accountForHypothesizerSendingHypothesis;
+ (void)_accountForLocationEnhancementSuccess;
+ (void)_accountForNoLocationEnhancementNeeded;
+ (double)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;
+ (double)maximumAllowableTravelTime;
+ (double)minimumAllowableTravelTime;
- (void).cxx_destruct;
- (void)_accountForGeocodedEventEncounter;
- (void)_accountForMaximumTravelDuration;
- (void)_accountForTravelDurationThresholdExceededState;
- (void)_clearEverything;
- (void)_createEmissionHypothesisRefreshTimerWithDate:(id)arg1;
- (void)_createHypothesisRequestRefreshTimerWithDate:(id)arg1;
- (void)_createHypothesizerForDestination:(id)arg1;
- (id)_createSyntheticHypothesis;
- (void)_emissionHypothesisRefreshTimerFired;
- (void)_enhanceLocation;
- (id)_generateDestination;
- (void)_hypothesisRefreshTimerFired;
- (void)_performAnalyticsPostProcessing;
- (void)_requestHypothesisRefreshTimerFired:(id)arg1;
- (void)_sendFeedbackToHypothesizerForPostingNotification:(unsigned long long)arg1;
- (void)_setUpRouteMonitoring;
- (void)_trackTTLCandidateEvent:(id)arg1;
- (void)_uninstallEmissionHypothesisRefreshTimer;
- (void)_uninstallRequestHypothesisRefreshTimer;
- (void)_updateTravelTimeExceededThresholdStateUsingExceededValue:(BOOL)arg1;
- (void)_updateWithHypothesis:(id)arg1;
- (void)cancelEmissionHypothesisRefresh;
- (void)cancelHypothesisRefreshRequest;
- (void)createBTAJobWithName:(id)arg1 atDate:(id)arg2;
- (void)dealloc;
- (id)emissionHypothesisRefreshBTAJobName;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (id)init;
- (void)removeBTAJobWithName:(id)arg1;
- (void)requestHypothesisRefreshAtDate:(id)arg1;
- (id)requestHypothesisRefreshBTAJobName;
- (void)reset;
- (void)sendFeedbackForPostingLeaveByNotification;
- (void)sendFeedbackForPostingLeaveNowNotification;
- (void)updateWithOriginalEvent:(id)arg1;

@end
