//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIScrollView;

@protocol _UIScrollViewScrollableAncestor <NSObject>
- (BOOL)_descendentScrollView:(UIScrollView *)arg1 shouldPreserveStartOffset:(struct CGPoint)arg2;
- (void)_descendentScrollViewDidCancelDragging:(UIScrollView *)arg1;
- (void)_descendentScrollViewDidEndDragging:(UIScrollView *)arg1;
- (BOOL)_descendentScrollViewShouldScrollHorizontally:(UIScrollView *)arg1;
- (BOOL)_descendentScrollViewShouldScrollVertically:(UIScrollView *)arg1;
- (struct CGPoint)_scrollView:(UIScrollView *)arg1 adjustedUnconstrainedOffsetForUnconstrainedOffset:(struct CGPoint)arg2 startOffset:(struct CGPoint)arg3 horizontalVelocity:(inout double *)arg4 verticalVelocity:(inout double *)arg5 animator:(out id *)arg6;
@end

