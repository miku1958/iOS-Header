//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (PrivateFederatedLearning)
+ (void)flatten:(id)arg1 result:(id)arg2;
+ (void)pfl_readShape:(id)arg1 result:(id)arg2;
+ (id)pfl_reshape:(id)arg1 start:(unsigned long long)arg2 cuts:(id)arg3;
- (id)pfl_flatten;
- (double)pfl_innerProduct:(id)arg1;
- (double)pfl_l2;
- (id)pfl_minus:(id)arg1;
- (id)pfl_mutableArrayMultipliedWithScale:(double)arg1;
- (id)pfl_plus:(id)arg1;
- (id)pfl_readShape;
- (id)pfl_reshapeWithShape:(id)arg1;
- (id)pfl_unitVectorAndL2;
@end
