//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/MDSearchQueryResultProcessor-Protocol.h>

@class CSSearchQueryContext, NSArray, NSKnownKeysMappingStrategy, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface CSSearchQuery : NSObject <MDSearchQueryResultProcessor>
{
    unsigned long long _foundItemCount;
    short _requestedAttributeCount;
    short _attrInfo[12];
    BOOL _started;
    BOOL _finished;
    BOOL _cancelled;
    BOOL _gatherEnded;
    struct os_unfair_lock_s _liveItemLock;
    NSKnownKeysMappingStrategy *_mappingStrategy;
    unsigned long long *_attrKeys;
    BOOL _privateIndex;
    BOOL _userFSIndex;
    BOOL _suspended;
    CDUnknownBlockType _foundItemsHandler;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_queryString;
    CSSearchQueryContext *_queryContext;
    NSMapTable *_liveIndexBundleIDToIndexItemIDMap;
    NSMapTable *_liveIndexBundleIDToBundleString;
    NSMapTable *_liveIndexUserFSOIDTOIdentifierMap;
    CDUnknownBlockType _gatherEndedHandler;
    CDUnknownBlockType _changedItemsHandler;
    CDUnknownBlockType _removedItemsHandler;
    CDUnknownBlockType _foundAttributesHandler;
    CDUnknownBlockType _changedAttributesHandler;
    CDUnknownBlockType _countChangedHandler;
    CDUnknownBlockType _resolvedAttributeNamesHandler;
    CDUnknownBlockType _completionsHandler;
    CDUnknownBlockType _completionScoresHandler;
    CDUnknownBlockType _foundItemHandler;
    CDUnknownBlockType _interruptedHandler;
    CDUnknownBlockType _restartedHandler;
    CDUnknownBlockType _restartGatherEndedHandler;
    NSString *_privateBundleID;
}

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (copy) CDUnknownBlockType changedAttributesHandler; // @synthesize changedAttributesHandler=_changedAttributesHandler;
@property (copy) CDUnknownBlockType changedItemsHandler; // @synthesize changedItemsHandler=_changedItemsHandler;
@property (copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (copy) CDUnknownBlockType completionScoresHandler; // @synthesize completionScoresHandler=_completionScoresHandler;
@property (copy) CDUnknownBlockType completionsHandler; // @synthesize completionsHandler=_completionsHandler;
@property (copy) CDUnknownBlockType countChangedHandler; // @synthesize countChangedHandler=_countChangedHandler;
@property (readonly, nonatomic) NSArray *fetchAttributes;
@property (copy) CDUnknownBlockType foundAttributesHandler; // @synthesize foundAttributesHandler=_foundAttributesHandler;
@property (readonly) unsigned long long foundItemCount;
@property (copy) CDUnknownBlockType foundItemHandler; // @synthesize foundItemHandler=_foundItemHandler;
@property (copy) CDUnknownBlockType foundItemsHandler; // @synthesize foundItemsHandler=_foundItemsHandler;
@property (copy) CDUnknownBlockType gatherEndedHandler; // @synthesize gatherEndedHandler=_gatherEndedHandler;
@property (copy) CDUnknownBlockType interruptedHandler; // @synthesize interruptedHandler=_interruptedHandler;
@property (strong, nonatomic) NSMapTable *liveIndexBundleIDToBundleString; // @synthesize liveIndexBundleIDToBundleString=_liveIndexBundleIDToBundleString;
@property (strong, nonatomic) NSMapTable *liveIndexBundleIDToIndexItemIDMap; // @synthesize liveIndexBundleIDToIndexItemIDMap=_liveIndexBundleIDToIndexItemIDMap;
@property (strong, nonatomic) NSMapTable *liveIndexUserFSOIDTOIdentifierMap; // @synthesize liveIndexUserFSOIDTOIdentifierMap=_liveIndexUserFSOIDTOIdentifierMap;
@property (strong, nonatomic) NSString *privateBundleID; // @synthesize privateBundleID=_privateBundleID;
@property (nonatomic) BOOL privateIndex; // @synthesize privateIndex=_privateIndex;
@property (copy) NSArray *protectionClasses;
@property (strong, nonatomic) CSSearchQueryContext *queryContext; // @synthesize queryContext=_queryContext;
@property (copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (copy) CDUnknownBlockType removedItemsHandler; // @synthesize removedItemsHandler=_removedItemsHandler;
@property (copy) CDUnknownBlockType resolvedAttributeNamesHandler; // @synthesize resolvedAttributeNamesHandler=_resolvedAttributeNamesHandler;
@property (copy) CDUnknownBlockType restartGatherEndedHandler; // @synthesize restartGatherEndedHandler=_restartGatherEndedHandler;
@property (copy) CDUnknownBlockType restartedHandler; // @synthesize restartedHandler=_restartedHandler;
@property (nonatomic) BOOL suspended; // @synthesize suspended=_suspended;
@property (nonatomic) BOOL userFSIndex; // @synthesize userFSIndex=_userFSIndex;

+ (id)_makeQueryErrorWithErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (void)initialize;
+ (void)preheat:(id)arg1;
+ (void)setConnectionName:(id)arg1;
+ (void)userEngagedWithUniqueIdentifier:(id)arg1 bundleId:(id)arg2 forUserQuery:(id)arg3 interactionType:(int)arg4;
- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)_removeIdentifiers:(id)arg1 withBundleID:(id)arg2 andQueryID:(long long)arg3;
- (BOOL)addOrUpdateLiveOID:(long long)arg1 bundleID:(id)arg2 identifier:(id)arg3;
- (id)addOrUpdateUserFSLiveOID:(long long)arg1 userFSDomain:(id)arg2 identifier:(id)arg3;
- (BOOL)attribute;
- (id)bundleIDs;
- (void)cancel;
- (id)connection;
- (id)copyCSSearchableItemWithValues:(id *)arg1 valueCount:(unsigned long long)arg2 attrKeys:(unsigned long long *)arg3 protectionClass:(id)arg4 mappingStrategy:(id)arg5 attrInfo:(short *)arg6 requestedAttributeCount:(unsigned long long)arg7 unpackInfo:(struct CSUnpackInfo)arg8 userFSDomain:(id)arg9;
- (id)copyResultFromPlist:(id)arg1 protectionClass:(id)arg2;
- (BOOL)counting;
- (double)currentTime;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)didFinishWithError:(id)arg1;
- (void)didResolveFriendlyAttributeNames:(id)arg1 fromFetchAttributes:(id)arg2;
- (void)didReturnResults:(long long)arg1 resultsData:(id)arg2 oidData:(id)arg3 protectionClass:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)grouped;
- (void)handleCompletion:(id)arg1;
- (void)handleError:(id)arg1;
- (void)handleFoundItems:(id)arg1;
- (id)init;
- (id)initWithQueryString:(id)arg1 attributes:(id)arg2;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;
- (id)initWithQueryString:(id)arg1 options:(id)arg2;
- (BOOL)internal;
- (BOOL)isTopHitQuery;
- (BOOL)live;
- (id)options;
- (void)processAttributesData:(id)arg1 update:(BOOL)arg2 protectionClass:(id)arg3;
- (void)processCompletionsResultsData:(id)arg1 protectionClass:(id)arg2;
- (void)processLiveResultsData:(id)arg1 oidData:(id)arg2 protectionClass:(id)arg3;
- (void)processRemoveResultsData:(id)arg1 protectionClass:(id)arg2;
- (void)processResultFromPlist:(id)arg1 atIndex:(unsigned long long)arg2 protectionClass:(id)arg3 oids:(long long *)arg4 oidCount:(unsigned int)arg5 addItems:(id *)arg6 updateItems:(id *)arg7 moveItems:(id *)arg8;
- (void)processResultsData:(id)arg1 protectionClass:(id)arg2;
- (BOOL)removeLiveOID:(long long)arg1 outBundleID:(id *)arg2 outIdentifier:(id *)arg3;
- (BOOL)removeUserFSLiveOID:(long long)arg1 outBundleID:(id *)arg2 outIdentifier:(id *)arg3;
- (id)scopes;
- (void)setBundleIDs:(id)arg1;
- (void)setScopes:(id)arg1;
- (void)setupFetchAttributesForSearch;
- (void)start;
- (void)userEngagedWithResult:(id)arg1 interactionType:(int)arg2;

@end

