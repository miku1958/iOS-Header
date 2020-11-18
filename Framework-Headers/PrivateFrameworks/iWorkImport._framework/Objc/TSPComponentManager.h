//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPComponentDelegate-Protocol.h>
#import <iWorkImport/TSPObjectModifyDelegate-Protocol.h>

@class NSCache, NSHashTable, NSMapTable, NSString, TSPComponent, TSPObjectContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPComponentManager : NSObject <TSPComponentDelegate, TSPObjectModifyDelegate>
{
    _Atomic int _ignoreCachedObjectEvictionCount;
    BOOL _isTornDown;
    NSObject<OS_dispatch_queue> *_componentQueue;
    NSHashTable *_components;
    NSMapTable *_componentDictionary;
    NSCache *_componentCache;
    TSPComponent *_viewStateComponent;
    NSObject<OS_dispatch_queue> *_readFlushedComponentQueue;
    TSPObjectContext *_context;
    TSPComponent *_packageMetadataComponent;
}

@property (readonly, weak, nonatomic) TSPObjectContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPComponent *documentComponent;
@property (readonly, nonatomic) TSPComponent *documentMetadataComponent;
@property (readonly, nonatomic) TSPComponent *documentObjectContainerComponent;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isDocumentComponentTreeModified;
@property (readonly, nonatomic) BOOL isSupportComponentTreeModified;
@property (readonly, nonatomic) TSPComponent *packageMetadataComponent; // @synthesize packageMetadataComponent=_packageMetadataComponent;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSPComponent *supportComponent;
@property (readonly, nonatomic) TSPComponent *supportMetadataComponent;
@property (readonly, nonatomic) TSPComponent *supportObjectContainerComponent;
@property (strong) TSPComponent *viewStateComponent;

+ (id)componentManagersPerformingCacheOperationOnCurrentThread;
- (void).cxx_destruct;
- (void)beginIgnoringCachedObjectEviction;
- (void)cacheComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
- (id)componentForRootObjectIdentifier:(long long)arg1;
- (void)componentForRootObjectIdentifier:(long long)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)componentForRootObjectOfLazyReference:(id)arg1;
- (void)componentForRootObjectOfLazyReference:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)componentForRootObjectOfLazyReferenceImpl:(id)arg1;
- (void)continueCacheOperationUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2;
- (void)dirtyAllComponentsForDocumentUpgradeInPackage:(unsigned char)arg1;
- (void)discardOrphanedComponents;
- (id)documentComponentImpl;
- (void)endIgnoringCachedObjectEviction;
- (void)enumerateComponents:(CDUnknownBlockType)arg1;
- (void)evictAllCachedObjects;
- (void)flushComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
- (id)init;
- (id)initWithContext:(id)arg1;
- (BOOL)isActive;
- (BOOL)isPerformingCacheOperation;
- (void)loadFromPackage:(id)arg1 metadata:(id)arg2;
- (id)objectForIdentifier:(long long)arg1;
- (unsigned long long)objectTargetType;
- (void)performCacheOperationUsingBlock:(CDUnknownBlockType)arg1;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)retrieveOrCreateComponentForRootObject:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)rootComponentForPackageIdentifier:(unsigned char)arg1;
- (id)rootComponentWithIdentifierImpl:(long long)arg1 locator:(id)arg2 packageIdentifier:(unsigned char)arg3;
- (BOOL)shouldKeepAllCachedObjectsInMemory;
- (id)supportComponentImpl;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)tearDown;
- (void)traverseComponentTreeFromRoot:(id)arg1 accessor:(CDUnknownBlockType)arg2;
- (void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2 shouldCaptureSnapshot:(BOOL)arg3;

@end

