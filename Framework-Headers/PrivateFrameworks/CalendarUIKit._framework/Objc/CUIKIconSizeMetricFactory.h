//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUIKIconSizeMetricFactory : NSObject
{
}

+ (id)_interpolatedSizeMetricsWithUpperBound:(id)arg1 lowerBound:(id)arg2 sideLength:(double)arg3;
+ (BOOL)_interpolationRequired:(double)arg1;
+ (id)_sizeMetricsForSideLength:(double)arg1 returnLowerBound:(BOOL)arg2;
+ (double)extrapolatedYValueWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2 xValue:(double)arg3;
+ (id)heroSizeMetricsLargeToSmall;
+ (double)scaledValueWithUpperBound:(double)arg1 lowerBound:(double)arg2 scaleFactor:(double)arg3;
+ (id)sizeMetricsForIconSize:(struct CGSize)arg1;

@end
