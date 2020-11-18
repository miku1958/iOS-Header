//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSHistoryLoader-Protocol.h>

@class NSArray, NSData, NSDate, NSSet, NSString, WBSHistoryItem, WBSHistoryTag, WBSHistoryVisit;
@protocol WBSHistoryStoreDelegate;

@protocol WBSHistoryStore <WBSHistoryLoader>

@property (nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle;
@property (weak, nonatomic) id<WBSHistoryStoreDelegate> delegate;
@property (copy, nonatomic) NSData *fetchThrottlerData;
@property (nonatomic) double historyAgeLimit;
@property (readonly, nonatomic) BOOL isUsingInMemoryDatabase;
@property (copy, nonatomic) NSData *longLivedSaveOperationData;
@property (nonatomic) BOOL pushNotificationsAreInitialized;
@property (copy, nonatomic) NSData *pushThrottlerData;
@property (copy, nonatomic) NSData *syncCircleSizeRetrievalThrottlerData;
@property (nonatomic) BOOL syncsWithManateeContainer;

- (void)addOrUpdateItemsOnDatabaseQueue:(NSSet *)arg1;
- (NSSet *)allVisitsForItemsOnDatabaseQueue:(NSSet *)arg1;
- (void)assignHistoryItem:(WBSHistoryItem *)arg1 toTopicTags:(NSSet *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)checkIfLocalVisitExistsInAnyOfItems:(NSSet *)arg1 withCompletion:(void (^)(BOOL))arg2;
- (void)clearHistoryVisitsAddedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 completionHandler:(void (^)(void))arg3;
- (void)clearHistoryWithCompletionHandler:(void (^)(void))arg1;
- (void)closeWithCompletionHandler:(void (^)(void))arg1;
- (void)enumerateLastVisitForItemsOnDatabaseQueue:(NSSet *)arg1 ignoringVisits:(NSSet *)arg2 enumerationBlock:(void (^)(WBSHistoryItem *, WBSHistoryVisit *))arg3;
- (void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(NSSet *)arg1 items:(NSSet *)arg2 enumerationBlock:(void (^)(WBSHistoryVisit *))arg3;
- (void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(NSSet *)arg1 items:(NSSet *)arg2 enumerationBlock:(void (^)(WBSHistoryVisit *))arg3;
- (void)fetchTopicsFromStartDate:(NSDate *)arg1 toEndDate:(NSDate *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchTopicsFromStartDate:(NSDate *)arg1 toEndDate:(NSDate *)arg2 limit:(unsigned long long)arg3 minimumItemCount:(unsigned long long)arg4 sortOrder:(long long)arg5 completionHandler:(void (^)(NSArray *, NSError *))arg6;
- (void)getAllTombstonesWithCompletion:(void (^)(NSSet *))arg1;
- (void)getServerChangeTokenDataWithCompletion:(void (^)(NSData *))arg1;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(void (^)(NSSet *, NSSet *, long long, void (^)(BOOL)))arg2;
- (void)getVisitsCreatedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 completionHandler:(void (^)(NSSet *))arg3;
- (void)itemWasReplaced:(WBSHistoryItem *)arg1 byItem:(WBSHistoryItem *)arg2;
- (void)itemsWereAdded:(NSArray *)arg1 byUserInitiatedAction:(BOOL)arg2;
- (void)itemsWereModified:(NSArray *)arg1 byUserInitiatedAction:(BOOL)arg2;
- (NSDate *)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (void)performMaintenance:(void (^)(void))arg1;
- (void)pruneTombstonesWithEndDatePriorToDate:(NSDate *)arg1;
- (void)removeItemsOnDatabaseQueue:(NSSet *)arg1;
- (void)removePastHistoryVisitsForItem:(WBSHistoryItem *)arg1 completionHandler:(void (^)(void))arg2;
- (void)removeVisitsOnDatabaseQueue:(NSSet *)arg1;
- (void)replayAndAddTombstones:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)resetCloudHistoryDataWithCompletionHandler:(void (^)(void))arg1;
- (void)setLastSeenDate:(NSDate *)arg1 forCloudClientVersion:(unsigned long long)arg2;
- (void)setServerChangeTokenData:(NSData *)arg1;
- (void)setTitle:(NSString *)arg1 ofTag:(WBSHistoryTag *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)tagsWithIdentifiers:(NSArray *)arg1 type:(unsigned long long)arg2 level:(long long)arg3 creatingIfNecessary:(BOOL)arg4 withTitles:(NSArray *)arg5 completionHandler:(void (^)(NSArray *, NSArray *, NSError *))arg6;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(void (^)(void))arg2;
- (void)vacuumHistoryWithCompletionHandler:(void (^)(void))arg1;
- (void)visitIdentifiersMatchingExistingVisits:(NSSet *)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(void (^)(NSSet *))arg3;
- (void)visitTitleWasUpdated:(WBSHistoryVisit *)arg1;
- (void)visitsWereAdded:(NSArray *)arg1;
- (void)visitsWereModified:(NSArray *)arg1;
@end
