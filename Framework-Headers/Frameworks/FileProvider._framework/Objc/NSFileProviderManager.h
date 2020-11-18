//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSFileProviderDomain, NSMutableDictionary, NSString, NSURL, NSXPCConnection;
@protocol FPDDaemon, FPDRemoteFileProvider><NSXPCProxyCreating, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface NSFileProviderManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_sem;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id<FPDRemoteFileProvider><NSXPCProxyCreating> _remoteFileProvider;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection<FPDDaemon> *_connection;
    NSURL *_documentStorageURL;
    NSString *_providerIdentifier;
    NSFileProviderDomain *_domain;
    NSObject<OS_dispatch_queue> *_signalUpdateQueue;
    NSObject<OS_dispatch_source> *_signalUpdateSource;
    NSMutableDictionary *_completionHandlersByItemID;
    NSArray *_presentedFiles;
}

@property (readonly, nonatomic) NSURL *documentStorageURL;
@property (copy) NSArray *presentedFiles; // @synthesize presentedFiles=_presentedFiles;
@property (readonly, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;

+ (void)addDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)defaultManager;
+ (void)getDomainsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)managerForDomain:(id)arg1;
+ (id)placeholderURLForURL:(id)arg1;
+ (void)removeAllDomainsForProviderIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)removeAllDomainsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)removeDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)removeDomain:(id)arg1 forProviderIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)writePlaceholderAtURL:(id)arg1 withDictionary:(id)arg2 error:(id *)arg3;
+ (BOOL)writePlaceholderAtURL:(id)arg1 withMetadata:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)_cacheProviderInfo;
- (void)_callAllCompletionHandlersForItemID:(id)arg1 error:(id)arg2;
- (id)_connection;
- (id)_initWithProviderIdentifier:(id)arg1;
- (id)_initWithProviderIdentifier:(id)arg1 domain:(id)arg2;
- (void)_signalPendingEnumerators;
- (void)dealloc;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)itemIDForIdentifier:(id)arg1;
- (void)registerURLSessionTask:(id)arg1 forItemWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)remoteFileProviderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)signalEnumeratorForContainerItemIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
