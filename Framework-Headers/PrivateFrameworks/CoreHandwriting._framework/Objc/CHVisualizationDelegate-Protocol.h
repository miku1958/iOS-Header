//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/NSObject-Protocol.h>

@class CHVisualization;

@protocol CHVisualizationDelegate <NSObject>
- (void)visualization:(CHVisualization *)arg1 needsDisplayInRect:(struct CGRect)arg2;
- (void)visualizationNeedsDisplay:(CHVisualization *)arg1;
@end

