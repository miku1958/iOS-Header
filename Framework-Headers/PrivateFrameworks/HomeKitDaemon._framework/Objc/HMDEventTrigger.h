//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTrigger.h>

#import <HomeKitDaemon/HMDLocationDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSArray, NSMutableArray, NSPredicate, NSString;

@interface HMDEventTrigger : HMDTrigger <HMFTimerDelegate, HMDLocationDelegate>
{
    HMFTimer *_secureTriggerConfirmationTimer;
    NSMutableArray *_characteristicEvents;
    NSMutableArray *_locationEvents;
    NSPredicate *_evaluationCondition;
    NSArray *_recurrences;
}

@property (strong, nonatomic) NSMutableArray *characteristicEvents; // @synthesize characteristicEvents=_characteristicEvents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSPredicate *evaluationCondition; // @synthesize evaluationCondition=_evaluationCondition;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *locationEvents; // @synthesize locationEvents=_locationEvents;
@property (readonly, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property (strong, nonatomic) HMFTimer *secureTriggerConfirmationTimer; // @synthesize secureTriggerConfirmationTimer=_secureTriggerConfirmationTimer;
@property (readonly) Class superclass;

+ (BOOL)__validateRecurrences:(id)arg1;
+ (id)rewriteNowAdjustedForHomeTimeZone:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_activate:(BOOL)arg1 characteristicEvents:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_activateLocationEvents:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_compareEventValue:(id)arg1 withCharacteristic:(id)arg2;
- (void)_deactivateOnNoEvents;
- (void)_evaluateFiringTrigger;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_handleAddEventToEventTrigger:(id)arg1;
- (void)_handleLocationAuthorization:(int)arg1;
- (void)_handleLocationAuthorizationMessage:(id)arg1;
- (void)_handleRemoveEventsFromEventTrigger:(id)arg1;
- (void)_handleRetrieveLocationEventForEventTrigger:(id)arg1;
- (void)_handleUpdateEventForEventTrigger:(id)arg1;
- (void)_handleUpdateEventTriggerCondition:(id)arg1;
- (void)_handleUpdateEventTriggerRecurrences:(id)arg1;
- (void)_reevaluateIfRelaunchRequired:(BOOL)arg1;
- (void)_registerForMessages;
- (BOOL)_removeEvents:(id)arg1;
- (id)_rewritePredicate:(id)arg1 currentCharacteristicInPredicate:(id *)arg2 characteristicsToRead:(id)arg3;
- (void)_saveChanges:(id)arg1;
- (void)_sortEvents:(id)arg1;
- (id)_updatePredicate:(id)arg1 currentCharacteristicInPredicate:(id *)arg2 conditionModified:(BOOL *)arg3 removedAccessory:(id)arg4;
- (void)activate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)activateOnLocalDevice;
- (id)addDeltaToNow:(id)arg1;
- (BOOL)checkForNoEvents;
- (id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (BOOL)containsSecureActionSet;
- (id)dateComponentsFromDate:(id)arg1;
- (id)dateTodayMatchingComponents:(id)arg1;
- (void)dealloc;
- (void)didEnterRegion:(id)arg1;
- (void)didExitRegion:(id)arg1;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)executeTriggerAfterEvaluatingCondition:(id)arg1;
- (void)fixupForReplacementAccessory:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 events:(id)arg2 recurrences:(id)arg3 evaluationCondition:(id)arg4;
- (void)invalidate;
- (BOOL)isEventTriggerOnLocalDeviceForAccessory:(id)arg1;
- (BOOL)isEventTriggerOnRemoteGatewayForAccessory:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (void)removeCharacteristic:(id)arg1;
- (void)removeService:(id)arg1;
- (void)sendTriggerFiredNotification:(id)arg1;
- (BOOL)shouldEncodeLastFireDate:(id)arg1;
- (id)sunrise;
- (id)sunset;
- (void)timerDidFire:(id)arg1;
- (unsigned long long)triggerType;

@end

