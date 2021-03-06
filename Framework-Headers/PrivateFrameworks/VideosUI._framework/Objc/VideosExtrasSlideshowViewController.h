//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/CAAnimationDelegate-Protocol.h>
#import <VideosUI/VideosExtrasZoomingImageTransitionParticipant-Protocol.h>

@class NSString, NSTimer, UIImage, VideosExtrasConstrainedArtworkContainerView;
@protocol VideosExtrasSlideshowViewControllerDataSource;

__attribute__((visibility("hidden")))
@interface VideosExtrasSlideshowViewController : UIViewController <CAAnimationDelegate, VideosExtrasZoomingImageTransitionParticipant>
{
    BOOL _animatingTransition;
    BOOL _viewVisible;
    id<VideosExtrasSlideshowViewControllerDataSource> _dataSource;
    unsigned long long _transitionStyle;
    double _transitionInterval;
    unsigned long long _visibleImageIndex;
    VideosExtrasConstrainedArtworkContainerView *_disappearingImageContainerView;
    VideosExtrasConstrainedArtworkContainerView *_imageContainerView;
    UIImage *_nextImage;
    NSTimer *_transitionTimer;
}

@property (nonatomic, getter=isAnimatingTransition) BOOL animatingTransition; // @synthesize animatingTransition=_animatingTransition;
@property (weak, nonatomic) id<VideosExtrasSlideshowViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) VideosExtrasConstrainedArtworkContainerView *disappearingImageContainerView; // @synthesize disappearingImageContainerView=_disappearingImageContainerView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VideosExtrasConstrainedArtworkContainerView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property (strong, nonatomic) UIImage *nextImage; // @synthesize nextImage=_nextImage;
@property (readonly) Class superclass;
@property (nonatomic) double transitionInterval; // @synthesize transitionInterval=_transitionInterval;
@property (nonatomic) unsigned long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property (strong, nonatomic) NSTimer *transitionTimer; // @synthesize transitionTimer=_transitionTimer;
@property (nonatomic, getter=isViewVisible) BOOL viewVisible; // @synthesize viewVisible=_viewVisible;
@property (nonatomic) unsigned long long visibleImageIndex; // @synthesize visibleImageIndex=_visibleImageIndex;

- (void).cxx_destruct;
- (void)_invalidateTransitionTimer;
- (void)_loadImageContainerViewIfAppropriateWithImage:(id)arg1;
- (unsigned long long)_numberOfImages;
- (void)_performDissolveTransition;
- (void)_performInstantaneousTransition;
- (void)_performPushTransition;
- (void)_performWipeTransition;
- (void)_prepareNextImageAndScheduleTransitionTimerIfAppropriate;
- (void)_reload;
- (void)_scheduleTransitionTimer;
- (void)_transitionDidComplete;
- (void)_transitionTimerDidFire:(id)arg1;
- (void)_transitionToNextImageIfAppropriate;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end

