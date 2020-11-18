//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/SSDownloadManagerObserver-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSString, SSDownloadManager;

__attribute__((visibility("hidden")))
@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver>
{
    SSDownloadManager *_manager;
    NSOperationQueue *_queue;
    NSMutableDictionary *_downloads;
    BOOL _reconnectInProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_attemptReconnect;
- (void)addDownload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)cancelDownload:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)downloadHandlerDisconnected:(BOOL)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)finishDownload:(long long)arg1;
- (id)initWithDownloadManager:(id)arg1;
- (void)setDelegate:(id)arg1 forDownload:(long long)arg2;
- (void)withDownload:(long long)arg1 perform:(CDUnknownBlockType)arg2;
- (void)withDownload:(long long)arg1 performAsync:(CDUnknownBlockType)arg2;
- (void)withDownloadMatchingIdentifier:(id)arg1 perform:(CDUnknownBlockType)arg2;

@end

