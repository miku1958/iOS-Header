//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Social/NSObject-Protocol.h>

@class UIScrollView, UIView;

@protocol UIScrollViewDelegate <NSObject>

@optional
- (void)scrollViewDidChangeAdjustedContentInset:(UIScrollView *)arg1;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView *)arg1;
- (void)scrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)scrollViewDidScrollToTop:(UIScrollView *)arg1;
- (void)scrollViewDidZoom:(UIScrollView *)arg1;
- (BOOL)scrollViewShouldScrollToTop:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDecelerating:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)scrollViewWillBeginZooming:(UIScrollView *)arg1 withView:(UIView *)arg2;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (UIView *)viewForZoomingInScrollView:(UIScrollView *)arg1;
@end
