//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class ISAVPlayerUIView, ISWrappedAVPlayer;

@interface ISVideoPlayerUIView : UIView
{
    ISAVPlayerUIView *_playerView;
    ISWrappedAVPlayer *_videoPlayer;
}

@property (strong, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;

- (void).cxx_destruct;
- (void)_updateVideoGravity;
- (id)init;
- (void)setContentMode:(long long)arg1;

@end

