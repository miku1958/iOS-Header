//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSDAutoscroll, TSDInteractiveCanvasController;

@protocol TSDAutoscrollDelegate

@property (strong, nonatomic) TSDAutoscroll *autoscroll;
@property (nonatomic) struct CGPoint autoscrollPoint;
@property (readonly, nonatomic) TSDInteractiveCanvasController *icc;

- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(TSDAutoscroll *)arg1;

@optional
- (int)allowedAutoscrollDirections;
- (BOOL)autoscrollWithDirection:(int)arg1 proposedContentOffset:(struct CGPoint)arg2 completionBlock:(void (^)(void))arg3;
- (unsigned long long)maximumAutoscrollDeltaForCount:(unsigned long long)arg1;
- (double)unscaledStartAutoscrollThreshold;
@end
