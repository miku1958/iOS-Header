//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPContainerObserver-Protocol.h>
#import <MapsSupport/MSPQueryDelegate-Protocol.h>

@class MSPContainer, NSArray, NSLock, NSString;
@protocol MSPQueryDelegate, OS_dispatch_queue;

@interface NewMSPQuery : NSObject <MSPContainerObserver, MSPQueryDelegate>
{
    unsigned long long _contentVersion;
    BOOL _isReady;
    MSPContainer *_container;
    NSArray *_cachedContents;
    CDUnknownBlockType _filterBlock;
    NewMSPQuery *_parentQuery;
    NSLock *_lock;
    id<MSPQueryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (strong, nonatomic) NSArray *cachedContents; // @synthesize cachedContents=_cachedContents;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (readonly, nonatomic) MSPContainer *container; // @synthesize container=_container;
@property (readonly) unsigned long long contentVersion; // @synthesize contentVersion=_contentVersion;
@property (readonly) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MSPQueryDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property (readonly) unsigned long long hash;
@property BOOL isReady; // @synthesize isReady=_isReady;
@property (strong, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property (strong, nonatomic) NewMSPQuery *parentQuery; // @synthesize parentQuery=_parentQuery;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyDelegate:(CDUnknownBlockType)arg1;
- (void)addOrUpdateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addOrUpdateObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;
- (void)fetchContentsWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithContainer:(id)arg1 delegate:(id)arg2;
- (id)initWithContainer:(id)arg1 delegate:(id)arg2 filteredWithBlock:(CDUnknownBlockType)arg3;
- (id)initWithParentQuery:(id)arg1 container:(id)arg2 delegate:(id)arg3 filteredWithBlock:(CDUnknownBlockType)arg4;
- (BOOL)isObject:(id)arg1 equalTo:(id)arg2;
- (void)moveObject:(id)arg1 afterObject:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveObject:(id)arg1 beforeObject:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveObject:(id)arg1 toIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveObjectToBack:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)moveObjectToFront:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processContents;
- (void)processContentsUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processContentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2;
- (void)queryContentsDidLoad:(id)arg1 contentsVersion:(unsigned long long)arg2;
- (void)removeObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setContents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)subQueryFilteredWithBlock:(CDUnknownBlockType)arg1;

@end

