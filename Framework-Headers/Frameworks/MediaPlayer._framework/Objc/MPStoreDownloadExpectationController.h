//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPStoreDownloadManagerObserver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MPStoreDownloadExpectationController : NSObject <MPStoreDownloadManagerObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_source> *_dispatchSource;
    unsigned long long _downloadManagerMonitorCount;
    CDUnknownBlockType _searchBlock;
    double _timeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType searchBlock;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (void)_attemptDownloadSearch;
- (void)_beginMonitoringDownloadManager;
- (void)_endMonitoringDownloadManager;
- (void)_finishWithDownload:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (id)init;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

