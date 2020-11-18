//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarRecordDataSource-Protocol.h>
#import <AvatarUI/AVTAvatarRecordDataSourceInternal-Protocol.h>
#import <AvatarUI/AVTAvatarStoreDelegate-Protocol.h>

@class AVTAvatarFetchRequest, AVTObservableAvatarStore, NSMutableArray, NSPointerArray, NSString;
@protocol AVTUILogger, OS_dispatch_queue;

@interface AVTAvatarRecordDataSource : NSObject <AVTAvatarStoreDelegate, AVTAvatarRecordDataSourceInternal, AVTAvatarRecordDataSource>
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    AVTObservableAvatarStore *_backingStore;
    AVTAvatarFetchRequest *_fetchRequest;
    NSMutableArray *_nts_recordStorage;
    id<AVTUILogger> _logger;
    NSPointerArray *_nts_observers;
}

@property (readonly, nonatomic) AVTObservableAvatarStore *backingStore; // @synthesize backingStore=_backingStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTAvatarFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<AVTUILogger> logger; // @synthesize logger=_logger;
@property (readonly, nonatomic) NSPointerArray *nts_observers; // @synthesize nts_observers=_nts_observers;
@property (strong, nonatomic) NSMutableArray *nts_recordStorage; // @synthesize nts_recordStorage=_nts_recordStorage;
@property (readonly) Class superclass;

+ (id)defaultUIDataSourceWithDomainIdentifier:(id)arg1;
+ (unsigned long long)indexForInsertingDuplicateRecord:(id)arg1 original:(id)arg2 inRecords:(id)arg3;
+ (unsigned long long)indexForInsertingRecord:(id)arg1 inRecords:(id)arg2;
+ (id)loadRecordsWithStore:(id)arg1 request:(id)arg2 logger:(id)arg3;
+ (id)sortedRecordsEditableFirstReverseOrder:(id)arg1;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)addPriorityObserver:(id)arg1;
- (BOOL)areRecordsLoaded;
- (void)enumerateObserversRespondingToSelector:(SEL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfRecordPassingTest:(CDUnknownBlockType)arg1;
- (id)indexesOfRecordsPassingTest:(CDUnknownBlockType)arg1;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 callbackQueue:(id)arg3 logger:(id)arg4;
- (id)internalRecordStore;
- (unsigned long long)numberOfRecords;
- (void)performObserversWork:(CDUnknownBlockType)arg1;
- (void)performSyncWorkWithRecords:(CDUnknownBlockType)arg1;
- (id)recordAtIndex:(unsigned long long)arg1;
- (id)recordStore;
- (void)removeObserver:(id)arg1;
- (void)store:(id)arg1 didCreateDuplicateAvatar:(id)arg2 forOriginal:(id)arg3 postCompletionHandler:(CDUnknownBlockType)arg4;
- (void)store:(id)arg1 didDeleteAvatarWithIdentifier:(id)arg2 postCompletionHandler:(CDUnknownBlockType)arg3;
- (void)store:(id)arg1 didSaveAvatar:(id)arg2 postCompletionHandler:(CDUnknownBlockType)arg3;

@end

