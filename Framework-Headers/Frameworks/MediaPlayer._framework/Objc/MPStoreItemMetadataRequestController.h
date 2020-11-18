//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CPLRUDictionary, NSMapTable, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPStoreItemMetadataRequestController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    CPLRUDictionary *_itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
    NSMapTable *_itemIdentifierToCompositeStoreItemMetadataMapTable;
    NSOperationQueue *_operationQueue;
}

+ (unsigned long long)optimalBatchSize;
+ (id)sharedStoreItemMetadataRequestController;
- (void).cxx_destruct;
- (id)_addStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (id)_cachedStoreItemMetadataWithItemIdentifier:(id)arg1;
- (void)_resolveItemIdentifiers:(id)arg1 withKeyProfile:(id)arg2 storeBagDictionary:(id)arg3 originatingRequest:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (BOOL)_storeItemMetadata:(id)arg1 hasCompleteDataForRequestReason:(unsigned long long)arg2;
- (id)_storePlatformKeyProfileForRequestReason:(unsigned long long)arg1;
- (id)addStoreItemMetadata:(id)arg1;
- (id)cachedResponseForItemIdentifiers:(id)arg1;
- (void)getStoreItemMetadataForRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)requestStoreItemMetadataForReason:(unsigned long long)arg1 withItemIdentifiers:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end

