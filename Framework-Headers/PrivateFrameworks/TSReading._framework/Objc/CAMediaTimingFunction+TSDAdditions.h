//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAMediaTimingFunction.h>

@class TSDBezierPath;

@interface CAMediaTimingFunction (TSDAdditions)

@property (readonly, nonatomic) TSDBezierPath *bezierPath;

- (double)TSD_valueAtPercent:(double)arg1;
- (double)solveForTime:(double)arg1;
@end

