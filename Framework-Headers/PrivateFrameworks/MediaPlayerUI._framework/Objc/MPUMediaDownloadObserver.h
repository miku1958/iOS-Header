//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPUMediaDownloadObserver : NSObject
{
    CDUnknownBlockType _progressHandler;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasPendingProgressHandlerExecution;
    BOOL _invalidated;
    long long _pid;
    BOOL _paused;
}

@property (readonly) BOOL canCancel;
@property (readonly, getter=isCurrentlyPlayable) BOOL currentlyPlayable;
@property (readonly) double downloadProgress;
@property (readonly, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (readonly, nonatomic) long long persistentID; // @synthesize persistentID=_pid;
@property (copy) CDUnknownBlockType progressHandler;
@property (readonly, nonatomic, getter=isPurchasing) BOOL purchasing;
@property (readonly, nonatomic) double rawDownloadProgress;
@property (readonly, nonatomic) double rawDownloadTotal;
@property (readonly, getter=isRestoreDownload) BOOL restoreDownload;

+ (id)newObserverForMediaCollection:(id)arg1;
+ (id)newObserverForMediaItem:(id)arg1;
+ (id)newObserverForMediaItemPersistentID:(unsigned long long)arg1 isPendingSync:(BOOL)arg2 storeID:(long long)arg3;
+ (id)newObserverForStoreID:(long long)arg1;
- (void).cxx_destruct;
- (void)_onQueue_invalidate;
- (void)_onQueue_setShouldFireProgressHandler;
- (void)cancelDownload;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)pauseDownload;
- (void)resumeDownload;

@end
