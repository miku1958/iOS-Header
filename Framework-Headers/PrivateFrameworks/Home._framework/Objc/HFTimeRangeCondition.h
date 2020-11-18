//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFTimeCondition.h>

@protocol HFPrimitiveTimeCondition;

@interface HFTimeRangeCondition : HFTimeCondition
{
    HFTimeCondition<HFPrimitiveTimeCondition> *_startCondition;
    HFTimeCondition<HFPrimitiveTimeCondition> *_endCondition;
}

@property (readonly, nonatomic) HFTimeCondition<HFPrimitiveTimeCondition> *endCondition; // @synthesize endCondition=_endCondition;
@property (readonly, nonatomic) HFTimeCondition<HFPrimitiveTimeCondition> *startCondition; // @synthesize startCondition=_startCondition;

+ (id)_primitiveTimePredicateClasses;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPredicate:(id)arg1;
- (id)initWithStartCondition:(id)arg1 endCondition:(id)arg2;

@end

