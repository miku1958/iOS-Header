//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLAssetsdCPLResourceDownloader : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    NSString *_trustedCallerBundleID;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_queue> *_pendingCPLDownloadsIsolationQueue;
    NSMutableDictionary *_pendingCPLDownloads;
}

- (void).cxx_destruct;
- (void)_handleInvalidation;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelCPLDownloadTasks:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleInvalidation;
- (id)initWithPhotoLibrary:(id)arg1 trustedCallerBundleID:(id)arg2 clientConnection:(id)arg3;
- (void)sendClientCPLStatusWithVirtualTaskIdentifier:(id)arg1 downloadContext:(id)arg2;
- (id)startCPLDownloadForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(BOOL)arg3 highPriority:(BOOL)arg4 track:(BOOL)arg5 notify:(BOOL)arg6 transient:(BOOL)arg7 proposedTaskIdentifier:(id)arg8 doneToken:(id)arg9 error:(id *)arg10;

@end

