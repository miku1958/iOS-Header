//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSIndexingQueue, NSMutableArray, NSString, NSXPCConnection;
@protocol CSSearchableIndexDelegate, CSSearchableIndexInterface><NSXPCProxyCreating, OS_dispatch_queue;

@interface CSSearchableIndex : NSObject
{
    BOOL _batchOpen;
    int _awakeNotifyToken;
    id<CSSearchableIndexDelegate> _indexDelegate;
    NSXPCConnection *_connection;
    id<CSSearchableIndexInterface><NSXPCProxyCreating> _testProxy;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_name;
    NSString *_protectionClass;
    NSString *_bundleIdentifier;
    CSIndexingQueue *_activityQueue;
    NSMutableArray *_batchedItemsToIndex;
    NSMutableArray *_batchedItemIdentifiersToDelete;
    long long _options;
}

@property (strong, nonatomic) CSIndexingQueue *activityQueue; // @synthesize activityQueue=_activityQueue;
@property (nonatomic) int awakeNotifyToken; // @synthesize awakeNotifyToken=_awakeNotifyToken;
@property (nonatomic) BOOL batchOpen; // @synthesize batchOpen=_batchOpen;
@property (strong, nonatomic) NSMutableArray *batchedItemIdentifiersToDelete; // @synthesize batchedItemIdentifiersToDelete=_batchedItemIdentifiersToDelete;
@property (strong, nonatomic) NSMutableArray *batchedItemsToIndex; // @synthesize batchedItemsToIndex=_batchedItemsToIndex;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (weak) id<CSSearchableIndexDelegate> indexDelegate; // @synthesize indexDelegate=_indexDelegate;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) long long options; // @synthesize options=_options;
@property (copy, nonatomic) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;
@property (strong, nonatomic) id<CSSearchableIndexInterface><NSXPCProxyCreating> testProxy; // @synthesize testProxy=_testProxy;

+ (void)_setLastUpdateTime;
+ (BOOL)activityShouldBeIndexed:(id)arg1 bundleID:(id)arg2;
+ (id)defaultSearchableIndex;
+ (void)initialize;
+ (BOOL)isIndexingAvailable;
+ (double)lastUpdateTime;
+ (id)mainBundleID;
+ (id)mainBundleLocalizedString;
+ (void)notifyIndexDelegates;
- (void).cxx_destruct;
- (void)_cancelAwakeNotifyToken;
- (void)_changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 forUser:(unsigned int)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5;
- (void)_checkInWithIndexDelegate:(id)arg1 reason:(id)arg2;
- (void)_commonInit;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection;
- (void)_indexActivities:(id)arg1;
- (id)_initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 options:(long long)arg4;
- (void)_issueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_itemsBySanitizingItemsForSpotlight:(id)arg1;
- (void)_performIndexJob:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)_registerAwakeNotifyToken;
- (CDUnknownBlockType)_registerCompletionBlock:(CDUnknownBlockType)arg1 label:(id)arg2;
- (CDUnknownBlockType)_registerCompletionBlock:(CDUnknownBlockType)arg1 label:(id)arg2 throttle:(BOOL)arg3;
- (CDUnknownBlockType)_registerDataCompletionBlock:(CDUnknownBlockType)arg1 label:(id)arg2;
- (id)_remoteProxy;
- (id)_remoteProxyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_remoteProxyWithDataCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setMailMessageAttributes:(id)arg1;
- (void)_standardizeItems:(id)arg1;
- (BOOL)_supportsBatching;
- (id)_validateClientState:(id)arg1;
- (id)_validateOperation;
- (id)_validateOperationWithIdentifiers:(id)arg1;
- (id)_validateOperationWithItems:(id)arg1;
- (id)_validateOperationWithItems:(id)arg1 identifiers:(id)arg2;
- (void)beginIndexBatch;
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2;
- (void)dealloc;
- (void)deleteAllSearchableItemsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllSearchableItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteSearchableItemsSinceDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)description;
- (void)endIndexBatchWithClientState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchLastClientStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)indexSearchableItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)indexSearchableItems:(id)arg1 returningItemsSanitizedForSpotlightTo:(CDUnknownBlockType)arg2;
- (void)indexUserActivity:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithName:(id)arg1 options:(long long)arg2;
- (id)initWithName:(id)arg1 protectionClass:(id)arg2;
- (id)initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3;
- (id)initWithTestingStub:(id)arg1;
- (void)performDataMigrationWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performIndexJob:(id)arg1;
- (void)performIndexJob:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
