//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSURLStorageCacheClient-Protocol.h>

@class NSData, NSString, NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface NSURLStorage_CacheClient : NSObject <NSURLStorageCacheClient>
{
    NSXPCInterface *_netStoreInterface;
    NSXPCConnection *_networkStorageConnection;
    NSString *_taskManagerIdentifier;
    NSString *_path;
    struct weak_ptr<__CFURLCache> _cfWeakCacheCpp;
    NSData *_sandboxExtensionToken;
    long long _storageSize;
    BOOL _networkStorageConnectionInterrupted;
}

@property BOOL networkStorageConnectionInterrupted; // @synthesize networkStorageConnectionInterrupted=_networkStorageConnectionInterrupted;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_invalidateNSXPCConnection;
- (void)_reconnectWithStorageServer;
- (void)addCachedResponse:(id)arg1 key:(id)arg2;
- (void)addCachedResponseWithDictionary:(id)arg1 key:(id)arg2;
- (void)cachedResponseDictionaryForKey:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)copyAllPartitionNamesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)copyHostNamesForOptionalPartition:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)createStorageTaskManagerForPath:(id)arg1 maxSize:(long long)arg2 extension:(id)arg3 withIdentifier:(id)arg4;
- (long long)currentDiskUsage;
- (void)dealloc;
- (void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2;
- (void)deleteAllResponses;
- (void)deleteResponseForRequestWithKey:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)deleteResponsesSinceDate:(id)arg1;
- (BOOL)ensureNetworkStorageDaemonConnection;
- (id)getPath;
- (id)initWithCache:(shared_ptr_25027cf4)arg1;
- (void)notifyCacheClientOfTimeRelativeResponses:(id)arg1;
- (void)notifyCachedURLResponseBecameFileBacked:(id)arg1 filePath:(id)arg2 forUUID:(id)arg3;
- (void)setMaxSize:(long long)arg1;
- (void)setMinSizeForVMCachedResource:(long long)arg1;

@end

