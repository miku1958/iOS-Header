//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDGradient.h>

#import <TSReading/TSDGradientStopContainer-Protocol.h>

@class NSArray, NSString, TSUColor;

@interface TSDMutableGradient : TSDGradient <TSDGradientStopContainer>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) TSUColor *firstColor;
@property (strong, nonatomic) NSArray *gradientStops; // @dynamic gradientStops;
@property (nonatomic) unsigned long long gradientType; // @dynamic gradientType;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isAdvancedGradient; // @dynamic isAdvancedGradient;
@property (strong, nonatomic) TSUColor *lastColor;
@property (nonatomic) double opacity; // @dynamic opacity;
@property (readonly) Class superclass;

- (void)evenlyDistributeStops;
- (void)insertGradientStop:(id)arg1;
- (id)insertStopAtFraction:(double)arg1;
- (id)insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)removeStop:(id)arg1;
- (id)removeStopAtIndex:(unsigned long long)arg1;
- (void)reverseStopOrder;
- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)setFraction:(double)arg1 ofStopAtIndex:(unsigned long long)arg2;
- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;

@end

