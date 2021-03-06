//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIView;
@protocol UIScrollViewDelegate><TSKScrollViewDelegate;

@interface TSKScrollView : UIScrollView
{
    unsigned long long mAnimatingContentOffsetCount;
    BOOL _mayPassScrollEventsToNextResponder;
    BOOL _shouldDisableScrollingWhenCursorIsHidden;
    struct CGRect _scrollableAreaBounds;
}

@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) id<UIScrollViewDelegate><TSKScrollViewDelegate> delegate; // @dynamic delegate;
@property (nonatomic) BOOL mayPassScrollEventsToNextResponder; // @synthesize mayPassScrollEventsToNextResponder=_mayPassScrollEventsToNextResponder;
@property (readonly, nonatomic) struct CGRect scrollableAreaBounds; // @synthesize scrollableAreaBounds=_scrollableAreaBounds;
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (nonatomic) BOOL shouldDisableScrollingWhenCursorIsHidden; // @synthesize shouldDisableScrollingWhenCursorIsHidden=_shouldDisableScrollingWhenCursorIsHidden;
@property (readonly, nonatomic) struct CGRect tsk_bounds;

- (void)hideScrollIndicators;
- (void)layoutSubviews;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct CGSize)tsk_contentSize;
- (struct CGRect)visibleFrame;

@end

