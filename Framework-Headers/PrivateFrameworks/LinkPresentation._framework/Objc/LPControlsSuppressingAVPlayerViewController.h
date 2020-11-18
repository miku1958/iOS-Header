//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVPlayerViewController.h>

@class LPFullScreenVideoViewController;

__attribute__((visibility("hidden")))
@interface LPControlsSuppressingAVPlayerViewController : AVPlayerViewController
{
    CDUnknownBlockType _readyForDisplayCallback;
    LPFullScreenVideoViewController *_fullScreenController;
}

@property (weak, nonatomic) LPFullScreenVideoViewController *fullScreenController; // @synthesize fullScreenController=_fullScreenController;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didBeginSlideToDismissTransition;
- (void)doneButtonTapped:(id)arg1;
- (void)hidePlaybackControls;
- (id)initWithPlayerLayerView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

