//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

#import <QuickLook/AVPlayerViewControllerDelegate-Protocol.h>

@class AVPlayer, AVPlayerViewController, NSString, QLOverlayPlayButton;

__attribute__((visibility("hidden")))
@interface QLAVPlayerItemViewController : QLItemViewController <AVPlayerViewControllerDelegate>
{
    QLOverlayPlayButton *_playButton;
    AVPlayerViewController *_playerViewController;
    BOOL _fullScreen;
    BOOL _mediaWasPausedOnResignActive;
    AVPlayer *_player;
    struct CGSize _imageSize;
    BOOL _isAudioOnly;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)canEnterFullScreen;
- (BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)enterFullScreen:(BOOL)arg1;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(id)arg1;
- (struct CGSize)imageSize;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pause;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)play;
- (BOOL)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)previewDidDisappear:(BOOL)arg1;

@end
