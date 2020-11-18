//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/UIScrollViewDelegate-Protocol.h>

@class TSKScrollView;

@protocol TSKScrollViewDelegate <UIScrollViewDelegate>

@optional
- (BOOL)allowsHorizontalScrollingForScrollView:(TSKScrollView *)arg1;
- (BOOL)allowsVerticalRubberbandingForScrollView:(TSKScrollView *)arg1;
- (struct CGPoint)scrollView:(TSKScrollView *)arg1 restrictContentOffset:(struct CGPoint)arg2;
- (void)scrollView:(TSKScrollView *)arg1 willAnimateToContentOffset:(struct CGPoint)arg2;
- (void)scrollViewDidEndDecelerating:(TSKScrollView *)arg1;
- (void)scrollViewDidEndDragging:(TSKScrollView *)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(TSKScrollView *)arg1;
- (void)scrollViewDidEndSwipe:(TSKScrollView *)arg1;
- (void)scrollViewDidLayoutSubviews:(TSKScrollView *)arg1;
- (void)scrollViewDidScroll:(TSKScrollView *)arg1;
- (void)scrollViewWillBeginDragging:(TSKScrollView *)arg1;
- (void)scrollViewWillScroll:(TSKScrollView *)arg1;
@end

