//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, SSDownloadManager, SUClientInterface;
@protocol OS_dispatch_queue;

@interface SUDownloadManager : NSObject
{
    NSArray *_cachedDownloads;
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_downloadsByID;
}

@property (readonly, nonatomic) SSDownloadManager *downloadManager;
@property (readonly, nonatomic) NSArray *downloads;

- (void)_finishPreflightWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_reloadDownloadManager;
- (void)_removeObject:(id)arg1 fromArray:(id *)arg2;
- (void)dealloc;
- (BOOL)deleteDownload:(id)arg1;
- (id)downloadForDownloadIdentifier:(long long)arg1;
- (id)initWithDownloadManager:(id)arg1;
- (id)initWithDownloadManager:(id)arg1 clientInterface:(id)arg2;
- (void)preflightWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadDownloadManager;

@end
