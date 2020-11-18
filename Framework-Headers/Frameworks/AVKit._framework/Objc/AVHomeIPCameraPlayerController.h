//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVPlayerController.h>

@protocol AVHomeIPCameraActionButtonHandling;

__attribute__((visibility("hidden")))
@interface AVHomeIPCameraPlayerController : AVPlayerController
{
    BOOL _muted;
    id<AVHomeIPCameraActionButtonHandling> _delegate;
    struct CGSize _presentationSize;
}

@property (weak, nonatomic) id<AVHomeIPCameraActionButtonHandling> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property (nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;

- (void).cxx_destruct;
- (BOOL)hasContent;
- (BOOL)hasEnabledVideo;
- (BOOL)hasLiveStreamingContent;
- (BOOL)hasSeekableLiveStreamingContent;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPlaying;
- (void)setVolume:(double)arg1;
- (long long)status;
- (long long)timeControlStatus;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;

@end
