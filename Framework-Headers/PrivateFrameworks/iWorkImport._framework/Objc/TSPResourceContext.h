//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSSet, TSPDocumentResourceCache, TSPDocumentResourceLegacyRegistry, TSPDocumentResourceRegistry;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPResourceContext : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_accessQueue_resourceRequests;
    NSMapTable *_accessQueue_resourceRequestTable;
    TSPDocumentResourceCache *_documentResourceCache;
    TSPDocumentResourceRegistry *_documentResourceRegistry;
    TSPDocumentResourceLegacyRegistry *_sageDocumentResourceLegacyRegistry;
    TSPDocumentResourceLegacyRegistry *_tangierDocumentResourceLegacyRegistry;
}

@property (readonly, nonatomic) TSPDocumentResourceCache *documentResourceCache; // @synthesize documentResourceCache=_documentResourceCache;
@property (readonly, nonatomic) TSPDocumentResourceRegistry *documentResourceRegistry; // @synthesize documentResourceRegistry=_documentResourceRegistry;
@property (readonly) NSSet *resourceRequests;
@property (readonly, nonatomic) TSPDocumentResourceLegacyRegistry *sageDocumentResourceLegacyRegistry; // @synthesize sageDocumentResourceLegacyRegistry=_sageDocumentResourceLegacyRegistry;
@property (readonly, nonatomic) TSPDocumentResourceLegacyRegistry *tangierDocumentResourceLegacyRegistry; // @synthesize tangierDocumentResourceLegacyRegistry=_tangierDocumentResourceLegacyRegistry;

- (void).cxx_destruct;
- (void)accessQueue_addResourceRequest:(id)arg1;
- (void)addResourceRequests:(id)arg1;
- (id)init;
- (id)initWithDocumentResourceCache:(id)arg1 documentResourceRegistry:(id)arg2 sageDocumentResourceLegacyRegistry:(id)arg3 tangierDocumentResourceLegacyRegistry:(id)arg4;
- (id)newDataStorageForDocumentResourceInfo:(id)arg1 createResourceRequestIfNeeded:(BOOL)arg2 error:(id *)arg3;
- (void)removeResourceRequests:(id)arg1;

@end

