//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSEventListenerObject.h>

#import <ITMLKit/IKJSPlayer-Protocol.h>

@class IKAppPlayerBridge, IKDOMDocument, IKJSMediaItem, IKJSPlaylist, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer>
{
    IKJSPlaylist *_playlist;
    long long _playerState;
    BOOL _holdingSelfReference;
    NSMutableDictionary *_timedMetadataListeners;
    NSMutableDictionary *_timeListeners;
    NSMutableDictionary *_boundaryListeners;
    IKAppPlayerBridge *_bridge;
}

@property (readonly, nonatomic) IKAppPlayerBridge *bridge; // @synthesize bridge=_bridge;
@property (copy, nonatomic) NSDictionary *contextMenuData;
@property (readonly, nonatomic) IKJSMediaItem *currentMediaItem;
@property (readonly, nonatomic) NSArray *currentMediaItemAccessLogs;
@property (readonly, nonatomic) NSDate *currentMediaItemDate;
@property (readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property (readonly, nonatomic) NSArray *currentMediaItemErrorLogs;
@property (nonatomic) BOOL interactiveOverlayDismissable;
@property (strong, nonatomic) IKDOMDocument *interactiveOverlayDocument;
@property (nonatomic) BOOL muted;
@property (readonly, nonatomic) IKJSMediaItem *nextMediaItem;
@property (strong, nonatomic) IKDOMDocument *overlayDocument;
@property (nonatomic) double playbackRate;
@property (readonly, nonatomic) NSString *playbackState;
@property (strong, nonatomic) IKJSPlaylist *playlist;
@property (readonly, nonatomic) IKJSMediaItem *previousMediaItem;
@property (nonatomic) BOOL showsResumeMenu;
@property (strong, nonatomic) NSDictionary *userInfo;

- (void).cxx_destruct;
- (void)_addManagedReference;
- (void)_removeManagedReference;
- (BOOL)_timedMetadataDidChangeWithExtraInfo:(id)arg1;
- (void)addEventListener:(id)arg1:(id)arg2:(id)arg3;
- (void)changeToMediaAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (BOOL)dispatchEvent:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (id)initWithAppContext:(id)arg1 bridge:(id)arg2;
- (void)next;
- (void)pause;
- (void)play;
- (void)present;
- (void)previous;
- (void)removeEventListener:(id)arg1:(id)arg2;
- (void)seekToTime:(double)arg1;
- (long long)state;
- (void)stop;

@end
