//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class NSString, UIView, UIViewPropertyAnimator, UIVisualEffectView;
@protocol SVVideoLoadingProgressObserverFactory, SVVideoLoadingProgressObserving, SVVideoPlaybackProgressObserverFactory, SVVideoPlaybackProgressObserving;

@interface SVVideoProgressViewController : UIViewController <SVVideoTransitionObserver>
{
    id<SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
    id<SVVideoLoadingProgressObserverFactory> _loadingProgressObserverFactory;
    id<SVVideoPlaybackProgressObserving> _playbackProgressObserver;
    id<SVVideoLoadingProgressObserving> _loadingProgressObserver;
    UIView *_loadingProgressView;
    UIVisualEffectView *_playbackProgressView;
    UIViewPropertyAnimator *_playbackProgressAnimator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<SVVideoLoadingProgressObserving> loadingProgressObserver; // @synthesize loadingProgressObserver=_loadingProgressObserver;
@property (readonly, nonatomic) id<SVVideoLoadingProgressObserverFactory> loadingProgressObserverFactory; // @synthesize loadingProgressObserverFactory=_loadingProgressObserverFactory;
@property (readonly, nonatomic) UIView *loadingProgressView; // @synthesize loadingProgressView=_loadingProgressView;
@property (strong, nonatomic) UIViewPropertyAnimator *playbackProgressAnimator; // @synthesize playbackProgressAnimator=_playbackProgressAnimator;
@property (strong, nonatomic) id<SVVideoPlaybackProgressObserving> playbackProgressObserver; // @synthesize playbackProgressObserver=_playbackProgressObserver;
@property (readonly, nonatomic) id<SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory; // @synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory;
@property (strong, nonatomic) UIVisualEffectView *playbackProgressView; // @synthesize playbackProgressView=_playbackProgressView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLoadingProgressObserverFactory:(id)arg1 playbackProgressObserverFactory:(id)arg2;
- (void)resetToPlaybackProgress:(double)arg1 animated:(BOOL)arg2;
- (void)startUpdatingLoadingProgressWithObserver:(id)arg1;
- (void)startUpdatingPlaybackProgressWithObserver:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

