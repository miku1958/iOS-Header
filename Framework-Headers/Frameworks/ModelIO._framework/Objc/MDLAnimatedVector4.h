//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLAnimatedValue.h>

@class MISSING_TYPE;

@interface MDLAnimatedVector4 : MDLAnimatedValue
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct VtValue)defaultVtValue;
- (MISSING_TYPE *)double4AtTime:(double)arg1;
- (MISSING_TYPE *)float4AtTime:(double)arg1;
- (unsigned long long)getDouble4Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloat4Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)precision;
- (void)resetWithDouble4Array:(const MISSING_TYPE **)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloat4Array:(const MISSING_TYPE **)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (void)setDouble4:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)setFloat4:(double)arg1 atTime: /* Error: Ran out of types for this method. */;

@end

