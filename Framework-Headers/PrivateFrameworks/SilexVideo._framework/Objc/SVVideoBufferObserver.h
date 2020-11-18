//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoBufferObserving-Protocol.h>

@class NSString, SVKeyValueObserver;
@protocol SVPlayerItemObserving;

@interface SVVideoBufferObserver : NSObject <SVVideoBufferObserving>
{
    BOOL _playbackBufferFull;
    BOOL _playbackLikelyToKeepUp;
    CDUnknownBlockType _changeBlock;
    id<SVPlayerItemObserving> _playerItemObserver;
    SVKeyValueObserver *_playbackBufferFullObserver;
    SVKeyValueObserver *_playbackLikelyToKeepUpObserver;
}

@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isPlaybackBufferFull) BOOL playbackBufferFull; // @synthesize playbackBufferFull=_playbackBufferFull;
@property (readonly, nonatomic) SVKeyValueObserver *playbackBufferFullObserver; // @synthesize playbackBufferFullObserver=_playbackBufferFullObserver;
@property (nonatomic, getter=isPlaybackLikelyToKeepUp) BOOL playbackLikelyToKeepUp; // @synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp;
@property (readonly, nonatomic) SVKeyValueObserver *playbackLikelyToKeepUpObserver; // @synthesize playbackLikelyToKeepUpObserver=_playbackLikelyToKeepUpObserver;
@property (readonly, nonatomic) id<SVPlayerItemObserving> playerItemObserver; // @synthesize playerItemObserver=_playerItemObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlayerItemObserver:(id)arg1;

@end

