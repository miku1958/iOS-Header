//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKAppContext, IKAppMediaItemBridge, IKAppPlaylistBridge, IKDOMDocument, IKJSPlayer;
@protocol IKAppPlayer;

@interface IKAppPlayerBridge : NSObject
{
    id<IKAppPlayer> _appPlayer;
    IKAppContext *_appContext;
    IKJSPlayer *_jsPlayer;
    long long _state;
}

@property (readonly, weak, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property (readonly, nonatomic) id<IKAppPlayer> appPlayer; // @synthesize appPlayer=_appPlayer;
@property (readonly, nonatomic) IKAppMediaItemBridge *currentMediaItem;
@property (readonly, weak, nonatomic) IKJSPlayer *jsPlayer; // @synthesize jsPlayer=_jsPlayer;
@property (readonly, nonatomic) IKAppMediaItemBridge *nextMediaItem;
@property (strong, nonatomic) IKDOMDocument *overlayDocument;
@property (weak, nonatomic) IKAppPlaylistBridge *playlist;
@property (readonly, nonatomic) IKAppMediaItemBridge *previousMediaItem;
@property (readonly, nonatomic) double scanRate;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (void)addTimeIntervalObserver:(unsigned long long)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)initWithJSPlayer:(id)arg1;
- (void)mediaItemDidChange:(long long)arg1;
- (void)mediaItemDidChange:(id)arg1 userInitiated:(BOOL)arg2;
- (void)mediaItemWillChange:(long long)arg1;
- (void)mediaItemWillChange:(id)arg1 userInitiated:(BOOL)arg2;
- (void)observeTimeBoundary:(double)arg1;
- (void)pause;
- (void)play;
- (void)present;
- (void)removeTimeIntervalObserver:(unsigned long long)arg1;
- (BOOL)requestSeekToTime:(double *)arg1 currentTime:(double)arg2;
- (void)requestSeekToTime:(double)arg1 currentTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scan:(double)arg1;
- (void)setElapsedTime:(double)arg1 precise:(BOOL)arg2;
- (void)setTimedMetadataKeysToObserve:(id)arg1;
- (BOOL)shouldHandleStateEvent:(id)arg1;
- (void)shouldHandleStateEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stateDidChange:(id)arg1;
- (void)stateWillChange:(id)arg1;
- (void)stop;
- (void)stopObservingTimeBoundary:(double)arg1;
- (void)timeBoundaryDidCross:(double)arg1;
- (void)timeIntervalElapsed:(double)arg1 time:(double)arg2;
- (void)timedMetadataDidChange:(id)arg1 value:(id)arg2;

@end

