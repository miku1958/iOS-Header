//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFCondition, NSArray;

@interface _HFCompoundConditionMatch : NSObject
{
    HFCondition *_matchedCondition;
    NSArray *_matchedPredicates;
}

@property (strong, nonatomic) HFCondition *matchedCondition; // @synthesize matchedCondition=_matchedCondition;
@property (strong, nonatomic) NSArray *matchedPredicates; // @synthesize matchedPredicates=_matchedPredicates;

+ (id)matchWithCondition:(id)arg1 matchedPredicates:(id)arg2;
- (void).cxx_destruct;

@end

