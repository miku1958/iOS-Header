//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFCondition, NSString;

@interface HFConditionUISummary : NSObject
{
    NSString *_conditionTitle;
    NSString *_conditionDescription;
    HFCondition *_condition;
}

@property (readonly, nonatomic) HFCondition *condition; // @synthesize condition=_condition;
@property (readonly, nonatomic) NSString *conditionDescription; // @synthesize conditionDescription=_conditionDescription;
@property (readonly, nonatomic) NSString *conditionTitle; // @synthesize conditionTitle=_conditionTitle;

- (void).cxx_destruct;
- (id)initWithCondition:(id)arg1 title:(id)arg2 description:(id)arg3;

@end
