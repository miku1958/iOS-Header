//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSMutableCopying-Protocol.h>
#import <TSReading/NSObject-Protocol.h>

@class NSArray, TSDGradientStop, TSUColor;

@protocol TSDGradientStopContainer <NSObject, NSMutableCopying>

@property (strong, nonatomic) TSUColor *firstColor;
@property (strong, nonatomic) NSArray *gradientStops;
@property (strong, nonatomic) TSUColor *lastColor;

- (void)evenlyDistributeStops;
- (void)insertGradientStop:(TSDGradientStop *)arg1;
- (TSDGradientStop *)insertStopAtFraction:(double)arg1;
- (TSDGradientStop *)insertStopAtFraction:(double)arg1 withColor:(TSUColor *)arg2;
- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)removeStop:(TSDGradientStop *)arg1;
- (TSDGradientStop *)removeStopAtIndex:(unsigned long long)arg1;
- (void)reverseStopOrder;
- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(TSUColor *)arg2;
- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
@end
