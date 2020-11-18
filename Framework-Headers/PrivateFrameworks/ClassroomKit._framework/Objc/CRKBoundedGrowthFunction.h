//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKGrowthFunction-Protocol.h>

@protocol CRKGrowthFunction;

@interface CRKBoundedGrowthFunction : NSObject <CRKGrowthFunction>
{
    id<CRKGrowthFunction> _growthFunction;
    double _lowerBound;
    double _upperBound;
}

@property (readonly, nonatomic) id<CRKGrowthFunction> growthFunction; // @synthesize growthFunction=_growthFunction;
@property (readonly, nonatomic) double lowerBound; // @synthesize lowerBound=_lowerBound;
@property (readonly, nonatomic) double upperBound; // @synthesize upperBound=_upperBound;

- (void).cxx_destruct;
- (double)evaluateWithValue:(double)arg1;
- (id)initWithGrowthFunction:(id)arg1 lowerBound:(double)arg2 upperBound:(double)arg3;

@end

