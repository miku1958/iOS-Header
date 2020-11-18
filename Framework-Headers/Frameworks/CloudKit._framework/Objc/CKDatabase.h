//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, NSOperationQueue;

@interface CKDatabase : NSObject
{
    CKContainer *_container;
    long long _scope;
    NSOperationQueue *_operationQueue;
}

@property (weak, nonatomic) CKContainer *container; // @synthesize container=_container;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (nonatomic) long long scope; // @synthesize scope=_scope;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKStatusReportArray;
- (id)_initWithContainer:(id)arg1 scope:(long long)arg2;
- (void)_scheduleOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)clearAssetCache;
- (void)clearAuthTokensForRecordWithID:(id)arg1;
- (void)clearCacheEntriesForRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearCacheEntriesForZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearCachesWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearRecordCache;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)deleteRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSubscriptionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)description;
- (void)fetchAllRecordZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAllSubscriptionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSubscriptionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)saveRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveRecordZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showAssetCache;

@end

