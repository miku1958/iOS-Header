//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <BaseBoardUI/UIScrollViewDelegate-Protocol.h>

@class NSString;
@protocol BSUIScrollViewDelegate;

@interface BSUIScrollView : UIScrollView <UIScrollViewDelegate>
{
    BOOL _isScrolling;
    BOOL _preventDidEndScrolling;
    BOOL _didScroll;
    CDUnknownBlockType _scrollCompletion;
    struct CGPoint _previousContentOffset;
    struct CGPoint _initialContentOffset;
    BOOL _scrolling;
}

@property (readonly, nonatomic) CDStruct_3b09cf25 currentScrollContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BSUIScrollViewDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling; // @synthesize scrolling=_scrolling;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_activeMethod;
- (id)_animationForAnimationSettings:(id)arg1;
- (void)_bs_didEndScrolling;
- (void)_bs_didScrollWithContext:(CDStruct_3b09cf25)arg1;
- (void)_bs_willBeginScrolling;
- (void)_didDidEndDeceleratingNotification:(id)arg1;
- (void)_didEndDraggingNotification:(id)arg1;
- (void)_didEndScrollAnimationNotification:(id)arg1;
- (void)_notifyDidScroll;
- (BOOL)_setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2 withAnimation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setContentOffset:(struct CGPoint)arg1 animation:(id)arg2;
- (void)_setContentOffset:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_setCurrentContentOffsetImmediatelyIfScrollInterruptionAnimated:(BOOL)arg1;
- (void)_setScrollCompletion:(CDUnknownBlockType)arg1;
- (void)_setScrolling:(BOOL)arg1;
- (void)_updateScrolling;
- (void)_willBeginDraggingNotification:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (BOOL)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)setContentOffset:(struct CGPoint)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

