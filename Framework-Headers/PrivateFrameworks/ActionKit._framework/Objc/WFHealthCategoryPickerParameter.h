//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class HKCategoryType, NSArray;

@interface WFHealthCategoryPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    HKCategoryType *_categoryType;
}

@property (strong, nonatomic) HKCategoryType *categoryType; // @synthesize categoryType=_categoryType;

- (void).cxx_destruct;
- (BOOL)isHidden;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)updatePossibleStates;

@end

