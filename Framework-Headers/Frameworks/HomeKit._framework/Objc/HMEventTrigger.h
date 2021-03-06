//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMTrigger.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMMutableArray, NSArray, NSPredicate;

@interface HMEventTrigger : HMTrigger <NSSecureCoding>
{
    NSArray *_recurrences;
    BOOL _executeOnce;
    NSPredicate *_internalPredicate;
    unsigned long long _activationState;
    HMMutableArray *_currentEvents;
}

@property (nonatomic) unsigned long long activationState; // @synthesize activationState=_activationState;
@property (readonly, copy, nonatomic) NSArray *allEvents;
@property (strong, nonatomic) HMMutableArray *currentEvents; // @synthesize currentEvents=_currentEvents;
@property (readonly, copy, nonatomic) NSArray *endEvents;
@property (readonly, copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) BOOL executeOnce; // @synthesize executeOnce=_executeOnce;
@property (copy, nonatomic) NSPredicate *internalPredicate; // @synthesize internalPredicate=_internalPredicate;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, copy, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property (readonly, nonatomic) unsigned long long triggerActivationState;

+ (BOOL)__validateRecurrences:(id)arg1;
+ (id)_predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)_predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)_predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 value:(id)arg2 valueFormatString:(id)arg3;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (BOOL)isActionAffectedByEndEvents:(id)arg1;
+ (id)negateOffset:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringAfterDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBeforeDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBetweenDateWithComponents:(id)arg1 secondDateWithComponents:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBetweenSignificantEvent:(id)arg1 secondSignificantEvent:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringOnDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 matchingValue:(id)arg2;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 relatedBy:(unsigned long long)arg2 toValue:(id)arg3;
+ (id)predicateForEvaluatingTriggerWithPresence:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_addEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleAddEventFromResponse:(id)arg1 newEventPayload:(id)arg2;
- (void)_handleEventsRemovedFromResponse:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_serializeForAdd;
- (BOOL)_updateCharacterisiticReferenceInNewEvent:(id)arg1;
- (void)_updateCharacteristicReference;
- (void)_updateEvents:(id)arg1 endEvent:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateEventsFromResponse:(id)arg1 responsePayload:(id)arg2;
- (void)_updateExecuteOnce:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updatePredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)addedEvent:(id)arg1;
- (BOOL)compatibleWithApp;
- (BOOL)containsSharedTriggerActivationBits;
- (void)encodeWithCoder:(id)arg1;
- (void)handleActivationStateNotification:(id)arg1;
- (id)initInternalWithName:(id)arg1 events:(id)arg2 endEvents:(id)arg3 recurrences:(id)arg4 predicate:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 events:(id)arg2 endEvents:(id)arg3 recurrences:(id)arg4 predicate:(id)arg5;
- (id)initWithName:(id)arg1 events:(id)arg2 predicate:(id)arg3;
- (void)removeEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setExecuteOnce:(BOOL)arg1;
- (void)setRecurrences:(id)arg1;
- (void)updateEndEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateExecuteOnce:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

