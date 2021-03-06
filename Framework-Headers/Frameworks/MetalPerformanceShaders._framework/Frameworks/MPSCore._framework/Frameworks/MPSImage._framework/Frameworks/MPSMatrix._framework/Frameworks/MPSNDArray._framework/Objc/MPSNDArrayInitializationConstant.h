//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNDArray/MPSNDArrayInitialization.h>

@interface MPSNDArrayInitializationConstant : MPSNDArrayInitialization
{
}

@property (readonly, nonatomic) float constantValue;

- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 constantValue:(float)arg2;
- (id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;

@end

