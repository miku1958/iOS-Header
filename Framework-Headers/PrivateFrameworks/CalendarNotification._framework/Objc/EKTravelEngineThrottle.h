//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface EKTravelEngineThrottle : NSObject
{
    BOOL _running;
    NSString *_eventExternalURL;
    CDUnknownBlockType _requestHypothesisRefreshBlock;
    CDUnknownBlockType _cancelHypothesisRequestRefreshBlock;
    CDUnknownBlockType _emissionBlock;
    NSString *_throttleIdentifier;
    NSObject<OS_dispatch_queue> *_throttleQueue;
    NSDate *_nextEmissionDate;
}

@property (copy, nonatomic) CDUnknownBlockType cancelHypothesisRequestRefreshBlock; // @synthesize cancelHypothesisRequestRefreshBlock=_cancelHypothesisRequestRefreshBlock;
@property (copy, nonatomic) CDUnknownBlockType emissionBlock; // @synthesize emissionBlock=_emissionBlock;
@property (strong) NSString *eventExternalURL; // @synthesize eventExternalURL=_eventExternalURL;
@property (strong, nonatomic) NSDate *nextEmissionDate; // @synthesize nextEmissionDate=_nextEmissionDate;
@property (copy, nonatomic) CDUnknownBlockType requestHypothesisRefreshBlock; // @synthesize requestHypothesisRefreshBlock=_requestHypothesisRefreshBlock;
@property (nonatomic) BOOL running; // @synthesize running=_running;
@property (strong, nonatomic) NSString *throttleIdentifier; // @synthesize throttleIdentifier=_throttleIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *throttleQueue; // @synthesize throttleQueue=_throttleQueue;

+ (double)_requestHypothesisRefreshInterval;
+ (double)emissionThresholdTimeInterval;
- (void).cxx_destruct;
- (void)_createEmissionTimerWithDate:(id)arg1;
- (void)_emissionTimerFired;
- (void)_fireEmissionBlock;
- (void)_registerForNotificationObservation;
- (void)_significantTimeChangeNotificationReceived;
- (void)_uninstallEmissionTimer;
- (void)_unregisterForNotificationObservation;
- (void)_updateEmissionDate:(id)arg1;
- (id)alarmName;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)receivedAlarmNamed:(id)arg1;
- (void)tearDown;
- (void)updatePredictedDepartureDate:(id)arg1;

@end

