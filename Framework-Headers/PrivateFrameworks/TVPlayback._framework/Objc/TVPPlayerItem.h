//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVPlayerItem.h>

@class AVMediaSelectionOption, TVImageProxy, TVPMediaItemLoader;

@interface TVPPlayerItem : AVPlayerItem
{
    BOOL _muted;
    BOOL _audioSelectionIsAutomatic;
    TVPMediaItemLoader *_mediaItemLoader;
    long long _previousStatus;
    TVImageProxy *_posterProxy;
    id _scrubImageLoader;
    AVMediaSelectionOption *_savedManualAudioSelection;
}

@property (nonatomic) BOOL audioSelectionIsAutomatic; // @synthesize audioSelectionIsAutomatic=_audioSelectionIsAutomatic;
@property (weak, nonatomic) TVPMediaItemLoader *mediaItemLoader; // @synthesize mediaItemLoader=_mediaItemLoader;
@property (nonatomic) BOOL muted; // @synthesize muted=_muted;
@property (strong, nonatomic) TVImageProxy *posterProxy; // @synthesize posterProxy=_posterProxy;
@property (nonatomic) long long previousStatus; // @synthesize previousStatus=_previousStatus;
@property (strong, nonatomic) AVMediaSelectionOption *savedManualAudioSelection; // @synthesize savedManualAudioSelection=_savedManualAudioSelection;
@property (strong, nonatomic) id scrubImageLoader; // @synthesize scrubImageLoader=_scrubImageLoader;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1;

@end
