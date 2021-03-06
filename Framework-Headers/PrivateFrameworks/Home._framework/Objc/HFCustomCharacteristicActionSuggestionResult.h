//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMCharacteristic, NSSet;

@interface HFCustomCharacteristicActionSuggestionResult : NSObject
{
    BOOL _isMutuallyExclusiveAction;
    HMCharacteristic *_characteristic;
    id _targetValue;
    NSSet *_matchingExistingActions;
}

@property (readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (nonatomic) BOOL isMutuallyExclusiveAction; // @synthesize isMutuallyExclusiveAction=_isMutuallyExclusiveAction;
@property (readonly, copy, nonatomic) NSSet *matchingExistingActions; // @synthesize matchingExistingActions=_matchingExistingActions;
@property (readonly, nonatomic) id targetValue; // @synthesize targetValue=_targetValue;

- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 matchingActions:(id)arg3;

@end

