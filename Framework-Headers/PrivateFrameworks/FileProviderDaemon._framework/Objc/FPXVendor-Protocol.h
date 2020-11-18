//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProviderDaemon/FPXOperationService-Protocol.h>
#import <FileProviderDaemon/FPXVendorObservation-Protocol.h>

@class FPCTLTermDumper, FPItem, FPItemID, FPSandboxingURLWrapper, NSArray, NSData, NSDate, NSDictionary, NSFileHandle, NSFileProviderDomain, NSFileProviderItemVersion, NSFileProviderRequest, NSProgress, NSString, NSURL;

@protocol FPXVendor <FPXOperationService, FPXVendorObservation>
- (void)URLForItemID:(FPItemID *)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 ignoreAlternateContentsURL:(BOOL)arg3 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, NSError *))arg4;
- (void)_test_callFileProviderManagerAPIs:(void (^)(NSError *))arg1;
- (void)acknowledgeUserVisibleRootDidChangeForDomain:(NSString *)arg1 urlWrapper:(FPSandboxingURLWrapper *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)beginRequestWithDomain:(NSFileProviderDomain *)arg1 alternateContentsDictionary:(NSDictionary *)arg2 usesFPFS:(BOOL)arg3;
- (void)bulkEvictItemsWithItemIDs:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)changeItem:(FPItem *)arg1 baseVersion:(NSFileProviderItemVersion *)arg2 changedFields:(unsigned long long)arg3 contents:(FPSandboxingURLWrapper *)arg4 options:(unsigned long long)arg5 completionHandler:(void (^)(FPItem *, NSError *))arg6;
- (NSProgress *)contentsForItemWithIdentifier:(FPItemID *)arg1 version:(NSFileProviderItemVersion *)arg2 request:(NSFileProviderRequest *)arg3 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPItem *, NSError *))arg4;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(NSArray *)arg1 domainIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)didChangeItemID:(FPItemID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)didUpdateAlternateContentsDocumentForDocumentWithItemID:(FPItemID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)dropDomainWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)dropIndexForDomain:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)dumpIndexStateForDomain:(NSString *)arg1 toFileHandler:(NSFileHandle *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)dumpInternalStateToTermDumper:(FPCTLTermDumper *)arg1 domainIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)evictItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItemID *, NSError *))arg2;
- (void)fetchCurrentIndexingAnchorForDomain:(NSString *)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
- (void)fetchCustomPushTopicsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchOperationServiceEndpoint:(void (^)(NSXPCListenerEndpoint *, NSError *))arg1;
- (void)fetchServicesForItemID:(FPItemID *)arg1 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSArray *, NSError *))arg2;
- (void)fetchVendorEndpoint:(void (^)(NSXPCListenerEndpoint *, NSError *))arg1;
- (void)identifierForItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItemID *, NSError *))arg2;
- (void)importDidFinishWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)indexOneBatchInDomain:(NSString *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)indexOneBatchInDomain:(NSString *)arg1 fromAnchor:(NSData *)arg2 toAnchor:(NSData *)arg3 updatedItems:(NSArray *)arg4 deletedItems:(NSArray *)arg5 completionHandler:(void (^)(NSError *))arg6;
- (void)itemChangedAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)itemForItemID:(FPItemID *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)itemForURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)providePlaceholderAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)removeTrashedItemsOlderThanDate:(NSDate *)arg1 domainIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setAlternateContentsURL:(FPSandboxingURLWrapper *)arg1 forDocumentWithItemID:(FPItemID *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)signalEnumeratorForMaterializedItemsWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)startProvidingItemAtURL:(NSURL *)arg1 readingOptions:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)trashItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (NSProgress *)updateExistingContents:(FPSandboxingURLWrapper *)arg1 ofItemWithIdentifier:(FPItemID *)arg2 existingVersion:(NSFileProviderItemVersion *)arg3 toVersion:(NSFileProviderItemVersion *)arg4 request:(NSFileProviderRequest *)arg5 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPItem *, NSError *))arg6;
- (void)valuesForAttributes:(NSArray *)arg1 forItemID:(FPItemID *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)wakeForPushWithCompletionHandler:(void (^)(NSError *))arg1;
@end
