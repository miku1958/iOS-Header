//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaItem, NSHashTable, VUIMPMediaItemDownloadControllerState;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemDownloadController : NSObject
{
    NSObject<OS_dispatch_queue> *_observerDispatchQueue;
    MPMediaItem *_mediaItem;
    VUIMPMediaItemDownloadControllerState *_state;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    NSHashTable *_observers;
}

@property (strong, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *observerDispatchQueue; // @synthesize observerDispatchQueue=_observerDispatchQueue;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (readonly, nonatomic, getter=isRestoreDownload) BOOL restoreDownload;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property (copy, nonatomic) VUIMPMediaItemDownloadControllerState *state; // @synthesize state=_state;
@property (readonly, nonatomic) BOOL supportsCancellation;
@property (readonly, nonatomic) BOOL supportsPausing;

- (void).cxx_destruct;
- (void)_enqueueAsyncProcessingQueueBlock:(CDUnknownBlockType)arg1;
- (void)_enqueueAsyncStrongSelfProcessingQueueBlock:(CDUnknownBlockType)arg1;
- (void)_enqueueObserverQueueBlock:(CDUnknownBlockType)arg1;
- (void)_notifyObservers:(id)arg1 stateDidChange:(id)arg2;
- (void)_onProcessingQueue_cancelDownload;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)_onProcessingQueue_setState:(id)arg1;
- (void)_setState:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelDownload;
- (id)init;
- (id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3;
- (void)invalidate;
- (void)pauseDownload;
- (void)removeObserver:(id)arg1;
- (void)resumeDownload;

@end
