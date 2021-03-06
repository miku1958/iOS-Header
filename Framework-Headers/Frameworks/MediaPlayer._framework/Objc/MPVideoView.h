//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerLayer, MPAVController, NSDictionary, NSString, _MPAVPlayerView;

@interface MPVideoView : UIView
{
    MPAVController *_player;
    double _startTime;
    double _stopTime;
    NSDictionary *_AVURLAssetOptions;
    _MPAVPlayerView *_playerView;
    UIView *_contentView;
    NSString *_movieSubtitle;
    NSString *_movieTitle;
    long long _scaleMode;
}

@property (strong, nonatomic) NSDictionary *AVURLAssetOptions; // @synthesize AVURLAssetOptions=_AVURLAssetOptions;
@property (readonly, nonatomic) BOOL canChangeScaleMode;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, nonatomic) long long effectiveScaleMode;
@property (readonly, nonatomic) struct CGRect movieContentFrame;
@property (readonly, nonatomic) struct CGRect movieFrame;
@property (strong, nonatomic) NSString *movieSubtitle; // @synthesize movieSubtitle=_movieSubtitle;
@property (strong, nonatomic) NSString *movieTitle; // @synthesize movieTitle=_movieTitle;
@property (weak, nonatomic) MPAVController *player; // @synthesize player=_player;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (nonatomic) double stopTime; // @synthesize stopTime=_stopTime;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setScaleMode:(long long)arg1 animated:(BOOL)arg2;
- (void)setScaleMode:(long long)arg1 duration:(float)arg2;
- (void)toggleScaleMode:(BOOL)arg1;

@end

