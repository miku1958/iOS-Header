//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer, UIProgressView;

@interface HUCameraRecordingPlayerView : UIView
{
    AVPlayer *_player;
    UIProgressView *_progressView;
}

@property (readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (readonly, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1 displayingProgressView:(BOOL)arg2;

@end
