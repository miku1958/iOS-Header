//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CATextLayer.h>

@class AVPlayer, AVPlayerLayer, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer
{
    NSObject<OS_dispatch_source> *_hudTimer;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    BOOL _showHud;
    int _colorId;
    double _opacity;
    int _fontSizeInt;
    BOOL _updateUISettings;
    int _hudXoffset;
    int _hudYoffset;
    unsigned long long _hudUpdateInterval;
    BOOL _showCompleteURI;
    long long _prevVariantIdx;
    long long _prevStallCount;
    long long _totalStallCount;
    NSMutableDictionary *_loadingStatusCache;
}

@property (weak) AVPlayer *player; // @synthesize player=_player;
@property (weak) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;

+ (id)convertBitrate:(double)arg1;
+ (BOOL)runningAnInternalBuild;
- (void).cxx_destruct;
- (void)_hudUpdate;
- (void)currentItemChanged;
- (void)currentItemTracksChanged;
- (void)dealloc;
- (void)getHudSetting;
- (float)getScaleFactorForDisplaySize:(struct CGSize)arg1;
- (id)getTrackFormatDesc:(id)arg1;
- (id)getVideoRange:(struct opaqueCMFormatDescription *)arg1;
- (BOOL)hudEnabled;
- (id)init;
- (void)readHudSettingsAndCallCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setColor:(int)arg1;
- (void)startDispatchTimer;
- (void)updateBounds:(struct CGRect)arg1;
- (BOOL)valueLoadedForKey:(id)arg1 onObject:(id)arg2;

@end
