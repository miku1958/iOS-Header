//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLMediaItemViewController.h>

#import <QuickLook/UIGestureRecognizerDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, QLOverlayPlayButton, QLWaveformScrubberView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface QLAudioItemViewController : QLMediaItemViewController <UIGestureRecognizerDelegate>
{
    QLOverlayPlayButton *_playButton;
    UIView *_scrubberContainer;
    UIScrollView *_scrubberContainerScrollView;
    QLWaveformScrubberView *_scrubber;
    BOOL _previewIsVisisble;
    BOOL _scrubbing;
    NSLayoutConstraint *_topScrubber;
    double _scrubberVerticalOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) UIView *scrubberContainer; // @synthesize scrubberContainer=_scrubberContainer;
@property double scrubberVerticalOffset; // @synthesize scrubberVerticalOffset=_scrubberVerticalOffset;
@property BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property (readonly) Class superclass;
@property (strong) NSLayoutConstraint *topScrubber; // @synthesize topScrubber=_topScrubber;

+ (id)AV_indicatorBackgroundColor;
+ (id)AV_indicatorForegroundColor;
- (void).cxx_destruct;
- (void)_tapRecognized:(id)arg1;
- (id)accessoryView;
- (void)addScrubberWithDeferral;
- (BOOL)canEnterFullScreen;
- (void)dealloc;
- (void)didChangePlayingStatus;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (void)setPlayControlsHidden:(BOOL)arg1;
- (BOOL)shouldPauseOnDisappear;
- (id)timeLabelScrollView;
- (void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2;
- (void)transitionDidStart:(BOOL)arg1;

@end

