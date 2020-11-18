//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSEventListenerObject.h>

#import <ITMLKit/IKJSPlayer-Protocol.h>

@class IKAppPlayerBridge, IKDOMDocument, IKJSMediaItem, IKJSPlaylist, NSDate, NSMutableDictionary, NSNumber, NSString;

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer>
{
    IKJSPlaylist *_playlist;
    long long _playerState;
    BOOL _holdingSelfReference;
    NSMutableDictionary *_observedMetadataKeys;
    NSMutableDictionary *_timeListeners;
    NSMutableDictionary *_boundaryListeners;
    IKAppPlayerBridge *_bridge;
}

@property (readonly, nonatomic) IKAppPlayerBridge *bridge; // @synthesize bridge=_bridge;
@property (readonly, nonatomic) IKJSMediaItem *currentMediaItem;
@property (readonly, nonatomic) NSDate *currentMediaItemDate;
@property (readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property (nonatomic) BOOL interactiveOverlayDismissable;
@property (strong, nonatomic) IKDOMDocument *interactiveOverlayDocument;
@property (readonly, nonatomic) IKJSMediaItem *nextMediaItem;
@property (strong, nonatomic) IKDOMDocument *overlayDocument;
@property (nonatomic) double playbackRate;
@property (readonly, nonatomic) NSString *playbackState;
@property (strong, nonatomic) IKJSPlaylist *playlist;
@property (readonly, nonatomic) IKJSMediaItem *previousMediaItem;

- (void).cxx_destruct;
- (void)_addManagedReference;
- (void)_removeManagedReference;
- (void)addEventListener:(id)arg1:(id)arg2:(id)arg3;
- (void)changeToMediaAtIndex:(unsigned long long)arg1;
- (void)currentMediaItemDurationDidChange:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAppContext:(id)arg1 bridge:(id)arg2;
- (void)mediaItemDidChange:(long long)arg1;
- (void)mediaItemWillChange:(long long)arg1;
- (void)next;
- (void)pause;
- (void)play;
- (void)playbackDidStall:(double)arg1;
- (void)playbackError:(id)arg1 shouldStopDueToError:(BOOL)arg2;
- (void)present;
- (void)previous;
- (void)removeEventListener:(id)arg1:(id)arg2;
- (BOOL)requestSeekToTime:(double *)arg1 currentTime:(double)arg2;
- (void)seekToTime:(double)arg1;
- (BOOL)shouldChangeToMediaAtIndex:(unsigned long long)arg1;
- (BOOL)shouldHandleStateEvent:(id)arg1;
- (long long)state;
- (void)stateDidChange:(id)arg1;
- (void)stateWillChange:(id)arg1;
- (void)stop;
- (void)timeBoundaryDidCross:(double)arg1;
- (void)timeIntervalElapsed:(double)arg1 time:(double)arg2;
- (void)timedMetadataDidChange:(id)arg1 value:(id)arg2;
- (void)transportBarVisibilityDidChange:(BOOL)arg1;

@end
