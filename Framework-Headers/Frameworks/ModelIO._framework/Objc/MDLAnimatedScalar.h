//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedScalar : MDLAnimatedValue
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct VtValue)defaultVtValue;
- (double)doubleAtTime:(double)arg1;
- (float)floatAtTime:(double)arg1;
- (unsigned long long)getDoubleArray:(double *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloatArray:(float *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)precision;
- (void)resetWithDoubleArray:(const double *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloatArray:(const float *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)setDouble:(double)arg1 atTime:(double)arg2;
- (void)setFloat:(float)arg1 atTime:(double)arg2;

@end

