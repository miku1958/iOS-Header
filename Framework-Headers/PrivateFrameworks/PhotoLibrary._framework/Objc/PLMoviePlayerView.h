//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, PLAVPlayerView;

@interface PLMoviePlayerView : UIView
{
    PLAVPlayerView *_avPlayerView;
    BOOL _destinationPlaceholderHidden;
    long long _destinationPlaceholderStyle;
}

@property (nonatomic, getter=isDestinationPlaceholderHidden) BOOL destinationPlaceholderHidden;
@property (readonly, nonatomic) long long destinationPlaceholderStyle; // @synthesize destinationPlaceholderStyle=_destinationPlaceholderStyle;
@property (strong, nonatomic) AVPlayer *player;
@property (readonly, strong, nonatomic) UIView *videoView;

- (void)_installBackgroundView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reattachVideoView;
- (void)setScaleMode:(long long)arg1;
- (void)setScaleMode:(long long)arg1 duration:(double)arg2;

@end
