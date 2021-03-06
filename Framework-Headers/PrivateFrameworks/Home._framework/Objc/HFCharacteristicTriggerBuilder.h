//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFTriggerBuilder.h>

@class NSMutableSet, NSSet;

@interface HFCharacteristicTriggerBuilder : HFTriggerBuilder
{
    BOOL _markTriggerAsHomeAppCreated;
    NSMutableSet *_triggerEvents;
}

@property (readonly, nonatomic) NSSet *characteristics;
@property (nonatomic) BOOL markTriggerAsHomeAppCreated; // @synthesize markTriggerAsHomeAppCreated=_markTriggerAsHomeAppCreated;
@property (strong, nonatomic) NSMutableSet *triggerEvents; // @synthesize triggerEvents=_triggerEvents;

- (void).cxx_destruct;
- (id)_existingEventsForCharacteristic:(id)arg1;
- (id)_lazilyMarkTriggerAsHomeAppCreated;
- (id)_performValidation;
- (id)_updateEvents;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)commitItem;
- (id)deleteTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (void)removeAllCharacteristics;
- (void)removeCharacteristic:(id)arg1;
- (void)removeServiceLikeItem:(id)arg1;
- (void)setCharacteristic:(id)arg1 triggerValue:(id)arg2;
- (void)setCharacteristic:(id)arg1 triggerValueRange:(id)arg2;
- (BOOL)supportsConditions;
- (BOOL)supportsEndEvents;
- (id)thresholdValueForCharacteristic:(id)arg1 thresholdValueRange:(id)arg2;
- (BOOL)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;

@end

