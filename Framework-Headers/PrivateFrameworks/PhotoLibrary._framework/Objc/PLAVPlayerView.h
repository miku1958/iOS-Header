//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer;

@interface PLAVPlayerView : UIView
{
    long long _scaleMode;
}

@property (readonly, strong, nonatomic) AVPlayerLayer *layer; // @dynamic layer;
@property (strong, nonatomic) AVPlayer *player;
@property (nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property (readonly, nonatomic) struct CGRect videoRect;

+ (Class)layerClass;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setScaleMode:(long long)arg1 duration:(double)arg2;

@end

