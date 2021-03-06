//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class HKQuantityType, NSArray;

@interface WFHealthQuantityAdditionalPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    HKQuantityType *_quantityType;
}

@property (strong, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)importQuestionBehavior;
- (BOOL)isHidden;
- (id)localizedLabel;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)updatePossibleStates;

@end

