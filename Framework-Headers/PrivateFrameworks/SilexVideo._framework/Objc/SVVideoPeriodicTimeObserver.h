//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPeriodicTimeObserving-Protocol.h>

@class NSString, SVPlayer;
@protocol SVTimeConverting, SVVideoPlaybackStateObserving;

@interface SVVideoPeriodicTimeObserver : NSObject <SVVideoPeriodicTimeObserving>
{
    CDUnknownBlockType changeBlock;
    SVPlayer *_player;
    id<SVVideoPlaybackStateObserving> _playbackStateObserver;
    id<SVTimeConverting> _timeConverter;
    id _timeObserverToken;
    double _time;
}

@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SVVideoPlaybackStateObserving> playbackStateObserver; // @synthesize playbackStateObserver=_playbackStateObserver;
@property (readonly, nonatomic) SVPlayer *player; // @synthesize player=_player;
@property (readonly) Class superclass;
@property (nonatomic) double time; // @synthesize time=_time;
@property (readonly, nonatomic) id<SVTimeConverting> timeConverter; // @synthesize timeConverter=_timeConverter;
@property (strong, nonatomic) id timeObserverToken; // @synthesize timeObserverToken=_timeObserverToken;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 playbackStateObserver:(id)arg2 timeConverter:(id)arg3;
- (void)startPeriodicTimeObserverForPlayer:(id)arg1;
- (void)stopPeriodicTimeObserverForPlayer:(id)arg1;
- (void)updateTime:(CDStruct_198678f7)arg1;

@end

