//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HMHome, NSArray;

@interface HUTriggerConditionSummaryItem : HFItem
{
    NSArray *_conditions;
    HMHome *_home;
}

@property (readonly, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithConditions:(id)arg1 home:(id)arg2;

@end

