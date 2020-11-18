//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/UIScrollViewDelegate-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, SBSearchScrollView, UIPanGestureRecognizer, UIView;

@interface SBSearchGesture : NSObject <UIScrollViewDelegate, BSDescriptionProviding>
{
    NSHashTable *_observers;
    SBSearchScrollView *_scrollView;
    BOOL _suppressObserverCallbacks;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastOffset;
    NSMutableSet *_disabledReasons;
    BOOL _isDismissing;
    BOOL _ignoreScrollingEnded;
    BOOL _animatingResetOrReveal;
    UIView *_targetView;
}

@property (readonly, nonatomic, getter=isAnimatingResetOrReveal) BOOL animatingResetOrReveal; // @synthesize animatingResetOrReveal=_animatingResetOrReveal;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isShowingSearch) BOOL showingSearch;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;

+ (double)searchHeaderHeight;
- (void).cxx_destruct;
- (BOOL)_isShowingSearch;
- (void)_notifyThaWeStartedShowingOrHiding;
- (void)_updateForFinalContentOffset;
- (void)_updateForScrollingEnded;
- (void)_updateScrollingEnabled;
- (void)addObserver:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (struct CGPoint)locationInView:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)resetAnimated:(BOOL)arg1;
- (void)revealAnimated:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setDisabled:(BOOL)arg1 forReason:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateForRotation;

@end
