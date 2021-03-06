//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFMediaObjectObserver-Protocol.h>
#import <Home/HFMediaSessionObserver-Protocol.h>
#import <Home/HFMediaValueSource-Protocol.h>

@class NSError, NSMutableArray, NSString;
@protocol HFHomeKitObject, HFMediaProfileContainer;

@interface HFMediaValueManager : NSObject <HFMediaObjectObserver, HFMediaSessionObserver, HFMediaValueSource, HFHomeKitItemProtocol>
{
    BOOL _hasPendingWrites;
    id<HFMediaProfileContainer> _mediaProfileContainer;
    NSMutableArray *_transactionStack;
    NSError *_cachedPlaybackStateWriteError;
}

@property (strong, nonatomic) NSError *cachedPlaybackStateWriteError; // @synthesize cachedPlaybackStateWriteError=_cachedPlaybackStateWriteError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPendingWrites; // @synthesize hasPendingWrites=_hasPendingWrites;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, weak, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableArray *transactionStack; // @synthesize transactionStack=_transactionStack;

- (void).cxx_destruct;
- (void)_notifyDelegatesDidUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesFailedToUpdatePlaybackStateWithError:(id)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesWillUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_updateCachedPlaybackStateWriteError:(id)arg1 operationType:(id)arg2 notifyDelegates:(BOOL)arg3;
- (void)_updateLastPlaybackState:(long long)arg1 sender:(SEL)arg2 notifyWillUpdate:(BOOL)arg3 notifyDidUpdate:(BOOL)arg4;
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;
- (void)clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(BOOL)arg2;
- (BOOL)hasPendingWritesForRouteID:(id)arg1;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1;
- (long long)lastPlaybackStateForProfileForRouteID:(id)arg1;
- (void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2;
- (id)mediaProfileContainerForRouteID:(id)arg1;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;

@end

