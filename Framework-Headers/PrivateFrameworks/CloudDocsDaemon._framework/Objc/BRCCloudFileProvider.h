//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCFileProvider.h>

#import <CloudDocsDaemon/BRCReachabilityDelegate-Protocol.h>
#import <CloudDocsDaemon/BRItemNotificationReceiving-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCCloudFileProvider : BRCFileProvider <BRItemNotificationReceiving, BRCReachabilityDelegate>
{
    NSMutableDictionary *_pipeByKey;
    NSMutableDictionary *_readersURLAndIDToDocID;
    NSMutableDictionary *_downloadTrackersByDocID;
    NSMutableDictionary *_recursiveReadsByURLAndID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 session:(id)arg3 recursively:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_cancelCallBackForDocID:(id)arg1 key:(id)arg2;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (id)_fileReactorID;
- (BOOL)_hasFilePresenterForURL:(id)arg1;
- (BOOL)_hasPendingReaderForDocumentID:(id)arg1;
- (id)_physicalURLForURL:(id)arg1;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 session:(id)arg3;
- (unsigned long long)_spaceRequiredForReaders;
- (void)_unregisterPresenterForKey:(id)arg1;
- (void)_waitForDownloadOfDirectory:(id)arg1 key:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_waitForDownloadOfDocument:(id)arg1 key:(id)arg2 requireCurrent:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelAllCoordinationProviders;
- (void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2;
- (void)documentWasMadeLive:(id)arg1;
- (void)dumpToContext:(id)arg1;
- (id)initWithURL:(id)arg1;
- (oneway void)invalidate;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(CDUnknownBlockType)arg4;

@end
