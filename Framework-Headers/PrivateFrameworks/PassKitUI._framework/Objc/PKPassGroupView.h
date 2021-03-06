//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKGroupDelegate-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PassKitUI/UIScrollViewDelegate-Protocol.h>
#import <PassKitUI/WLCardViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, PKGroup, PKPassView, PKReusablePassViewQueue, UILongPressGestureRecognizer, UIMotionEffectGroup, UIPageControl, UIPanGestureRecognizer, UIScrollView, UIViewController;
@protocol PKPassGroupViewDelegate;

@interface PKPassGroupView : UIView <WLCardViewDelegate, PKGroupDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    unsigned short _animationCounter;
    unsigned short _pageControlAnimationCounter;
    unsigned short _frontFaceContentModePinningCounter;
    long long _presentationState;
    struct {
        unsigned int showingPageControl:1;
        unsigned int scrollingEnabled:1;
        unsigned int indeterminateState:1;
        unsigned int fanningEnabled:1;
        unsigned int overridePriorContentOffset:1;
        unsigned int delegateOverridesFrontmostContentWhileStacked:1;
        unsigned int delegateOverridesFrontmostContentWhilePiled:1;
        unsigned int delegateOverridesAllowPanning:1;
        struct CGPoint priorContentOffset;
        struct CGPoint instantaneousContentOffsetDelta;
        unsigned long long numberOfPasses;
        unsigned long long selectedIndex;
        struct CGRect bounds;
    } _layoutState;
    NSMutableDictionary *_passViewsByUniqueID;
    NSMutableArray *_delayedAnimations;
    UIScrollView *_horizontalScrollView;
    UIPageControl *_pageControl;
    double _dimmerValue;
    BOOL _canPan;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIMotionEffectGroup *_motionEffectGroup;
    BOOL _isAuthenticating;
    id<PKPassGroupViewDelegate> _delegate;
    UIViewController *_detailsVC;
    NSString *_passBeingPresented;
    BOOL _groupWasMarkedDeleted;
    BOOL _passBeingPresentedWasDeleted;
    BOOL _invalidated;
    BOOL _effectivePaused;
    BOOL _modallyPresented;
    BOOL _loaned;
    BOOL _paused;
    PKPassView *_frontmostPassView;
    PKGroup *_group;
    PKReusablePassViewQueue *_passViewQueue;
    UILongPressGestureRecognizer *_pressGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPassGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long displayIndex;
@property (strong, nonatomic) PKPassView *frontmostPassView; // @synthesize frontmostPassView=_frontmostPassView;
@property (readonly, nonatomic) PKGroup *group; // @synthesize group=_group;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isLoaned) BOOL loaned; // @synthesize loaned=_loaned;
@property (nonatomic, getter=isModallyPresented) BOOL modallyPresented; // @synthesize modallyPresented=_modallyPresented;
@property (readonly, nonatomic) struct UIOffset offsetForFrontmostPassWhileStacked;
@property (readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property (weak, nonatomic) PKReusablePassViewQueue *passViewQueue; // @synthesize passViewQueue=_passViewQueue;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property (readonly, nonatomic) UILongPressGestureRecognizer *pressGestureRecognizer; // @synthesize pressGestureRecognizer=_pressGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDelayedAnimation:(id)arg1 toLayer:(id)arg2 withRemovalAction:(CDUnknownBlockType)arg3;
- (void)_addPanAndLongPressGestureRecognizers;
- (void)_applyContentMode:(long long)arg1 toPassView:(id)arg2 animated:(BOOL)arg3;
- (void)_beginTrackingAnimation;
- (struct CGSize)_contentSize;
- (long long)_defaultContentModeForIndex:(unsigned long long)arg1;
- (void)_endTrackingAnimation;
- (void)_enumerateIndicesInFannedOrderWithHandler:(CDUnknownBlockType)arg1;
- (void)_enumerateIndicesInStackOrderWithHandler:(CDUnknownBlockType)arg1;
- (void)_enumeratePassViewsInStackOrderWithHandler:(CDUnknownBlockType)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_handlePress:(id)arg1;
- (BOOL)_isOurGestureRecognizer:(id)arg1;
- (id)_loadCardViewForIndex:(unsigned long long)arg1 contentMode:(long long)arg2;
- (void)_pageControlChanged:(id)arg1;
- (struct CGRect)_pagingFrameForCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_preparePageControlForReuse;
- (struct _NSRange)_rangeOfFannedIndices;
- (struct _NSRange)_rangeOfPagingIndices;
- (struct _NSRange)_rangeOfVisibleIndices;
- (void)_removeDelayedAnimationTrackerWithKey:(id)arg1;
- (void)_removeDelayedAnimations;
- (void)_removePanAndLongPressGestureRecognizers;
- (struct CGPoint)_stackingPositionForPassViewLayer:(id)arg1 atStackIndex:(unsigned long long)arg2 withSeparation:(BOOL)arg3;
- (void)_updateCachedGroupState;
- (void)_updateCachedLayoutState;
- (void)_updateDelegateResponderCache;
- (void)_updateFrontmostPassViewIfNecessary;
- (void)_updateLoadedViews:(BOOL)arg1;
- (void)_updatePageControlVisibilityWithDelay:(double)arg1;
- (void)_updatePageControlWithDisplayIndex;
- (void)_updatePausedState;
- (void)applyContentModesAnimated:(BOOL)arg1;
- (void)beginPinningFrontFaceContentMode;
- (double)continuousShadowIndex;
- (void)dealloc;
- (void)dismissBackOfPassIfNecessaryForUniqueID:(id)arg1;
- (void)endPinningFrontFaceContentMode;
- (void)faceFrameDidChangeForPassView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithGroup:(id)arg1 delegate:(id)arg2 presentationState:(long long)arg3;
- (void)invalidate;
- (void)layoutPagesAnimated:(BOOL)arg1;
- (void)layoutStackAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsAnimated:(BOOL)arg1;
- (void)markGroupDeleted;
- (BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)passView:(id)arg1 didPresentPassDetailsViewController:(id)arg2;
- (void)passView:(id)arg1 willPresentPassDetailsViewController:(id)arg2;
- (void)passViewDidResize:(id)arg1 animated:(BOOL)arg2;
- (void)passViewExpandButtonTapped:(id)arg1;
- (id)passViewForIndex:(unsigned long long)arg1;
- (void)passViewTapped:(id)arg1;
- (void)presentDiff:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPassWithUniqueID:(id)arg1;
- (void)presentPassWithUniqueID:(id)arg1 withContext:(id)arg2 animated:(BOOL)arg3;
- (void)removeFromSuperview;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDimmer:(double)arg1 animated:(BOOL)arg2;
- (void)setFrontmostPassView:(id)arg1 withContext:(id)arg2 animated:(BOOL)arg3;
- (void)setFrontmostPassViewFromPassIndex:(long long)arg1;
- (void)setFrontmostPassViewFromPassIndex:(long long)arg1 withContext:(id)arg2 animated:(BOOL)arg3;
- (void)setPassViewExpanded:(BOOL)arg1 forPass:(id)arg2 animated:(BOOL)arg3;
- (void)setPresentationState:(long long)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)updatePageControlFrame;
- (void)updateToStackWithProgress:(double)arg1 originalPosition:(struct CGPoint)arg2 timingFunction:(CDUnknownBlockType)arg3;

@end

