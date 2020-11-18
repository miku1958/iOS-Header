//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSWPTextMagnifierTimeWeightedPoint : NSObject
{
    long long m_index;
    struct {
        struct CGPoint point;
        double time;
    } m_points[16];
}

@property (readonly, nonatomic) struct CGPoint weightedPoint;

- (void)addPoint:(struct CGPoint)arg1;
- (void)clearHistory;
- (struct CGSize)displacementInInterval:(double)arg1;
- (struct CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2;
- (double)distanceCoveredInInterval:(double)arg1;
- (double)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;
- (BOOL)historyCovers:(double)arg1;

@end
