//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <AVKit/AVPlaybackContentContainer-Protocol.h>
#import <AVKit/UIScrollViewDelegate-Protocol.h>

@class AVPlaybackContentContainerView, NSString, NSValue;
@protocol AVPlaybackContentTransitioningViewDelegate;

__attribute__((visibility("hidden")))
@interface AVPlaybackContentTransitioningView : UIScrollView <UIScrollViewDelegate, AVPlaybackContentContainer>
{
    BOOL _playingOnSecondScreen;
    BOOL _transitionInteractive;
    AVPlaybackContentContainerView *_activeContentView;
    long long _transitionState;
    long long _transitionDirection;
    double _transitionProgress;
    id<AVPlaybackContentTransitioningViewDelegate> _contentTransitioningDelegate;
    AVPlaybackContentContainerView *_incomingContentView;
    NSValue *_targetContentOffset;
    NSString *_stateDescription;
    long long _boundsOrContentSizeAdjustmentCount;
    struct CGRect _frameForActiveContentView;
    struct CGRect _frameForTransitioningContentView;
}

@property (readonly, nonatomic) AVPlaybackContentContainerView *activeContentView; // @synthesize activeContentView=_activeContentView;
@property (nonatomic) long long boundsOrContentSizeAdjustmentCount; // @synthesize boundsOrContentSizeAdjustmentCount=_boundsOrContentSizeAdjustmentCount;
@property (nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (weak, nonatomic) id<AVPlaybackContentTransitioningViewDelegate> contentTransitioningDelegate; // @synthesize contentTransitioningDelegate=_contentTransitioningDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect frameForActiveContentView; // @synthesize frameForActiveContentView=_frameForActiveContentView;
@property (nonatomic) struct CGRect frameForTransitioningContentView; // @synthesize frameForTransitioningContentView=_frameForTransitioningContentView;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) AVPlaybackContentContainerView *incomingContentView; // @synthesize incomingContentView=_incomingContentView;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
@property (copy, nonatomic) NSString *stateDescription; // @synthesize stateDescription=_stateDescription;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSValue *targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property (readonly, nonatomic) long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;
@property (nonatomic, getter=isTransitionInteractive) BOOL transitionInteractive; // @synthesize transitionInteractive=_transitionInteractive;
@property (readonly, nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property (readonly, nonatomic) long long transitionState; // @synthesize transitionState=_transitionState;
@property (nonatomic) struct CGRect videoContentFrame;

- (void).cxx_destruct;
- (BOOL)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (id)_descriptionForState:(long long)arg1;
- (void)_ensureContentViews;
- (struct CGRect)_frameExcludingActiveContent;
- (struct CGRect)_frameExcludingTransitioningContent;
- (BOOL)_isAdjustingBoundsOrContentSize;
- (id)_makeStateDescription;
- (void)_performBoundsOrContentSizeAdjustment:(CDUnknownBlockType)arg1;
- (void)_setTransitionState:(id)arg1 transitionDirection:(id)arg2 transitionProgress:(id)arg3;
- (void)_updateSizeAndContentFrame;
- (void)_updateTransitionStateIfPossible;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 activeContentView:(id)arg2;
- (void)performTransition:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(BOOL)arg2;

@end

