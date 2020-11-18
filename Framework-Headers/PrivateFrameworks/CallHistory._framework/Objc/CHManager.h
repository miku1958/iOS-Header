//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSArray, NSDate, NSNumber, NSPredicate, NSString;
@protocol SyncManagerProtocol;

@interface CHManager : CHSynchronizedLoggable
{
    BOOL _showsTelephonyCalls;
    BOOL _showsFaceTimeVideoCalls;
    BOOL _showsFaceTimeAudioCalls;
    BOOL _generateSyncTransactions;
    BOOL _cacheIsDirty;
    BOOL _reCoalesce;
    unsigned int _limitingCallTypes;
    NSDate *_limitingStartDate;
    NSDate *_limitingEndDate;
    NSArray *_limitingCallKinds;
    NSPredicate *_postFetchingPredicate;
    NSString *_coalescingStrategy;
    NSArray *_recentCalls;
    long long _numberOfUnseenMissedCalls;
    id<SyncManagerProtocol> _syncManager;
    NSArray *_uncoalescedRecentCalls;
    NSArray *_uncoalescedUnFilteredRecentCalls;
    NSNumber *_unreadCallCount;
}

@property BOOL cacheIsDirty; // @synthesize cacheIsDirty=_cacheIsDirty;
@property (copy, nonatomic) NSString *coalescingStrategy; // @synthesize coalescingStrategy=_coalescingStrategy;
@property (nonatomic) BOOL generateSyncTransactions; // @synthesize generateSyncTransactions=_generateSyncTransactions;
@property (copy, nonatomic) NSArray *limitingCallKinds; // @synthesize limitingCallKinds=_limitingCallKinds;
@property (nonatomic) unsigned int limitingCallTypes; // @synthesize limitingCallTypes=_limitingCallTypes;
@property (copy, nonatomic) NSDate *limitingEndDate; // @synthesize limitingEndDate=_limitingEndDate;
@property (copy, nonatomic) NSDate *limitingStartDate; // @synthesize limitingStartDate=_limitingStartDate;
@property long long numberOfUnseenMissedCalls; // @synthesize numberOfUnseenMissedCalls=_numberOfUnseenMissedCalls;
@property (strong, nonatomic) NSPredicate *postFetchingPredicate; // @synthesize postFetchingPredicate=_postFetchingPredicate;
@property BOOL reCoalesce; // @synthesize reCoalesce=_reCoalesce;
@property (strong, nonatomic) NSArray *recentCalls; // @synthesize recentCalls=_recentCalls;
@property (nonatomic) BOOL showsFaceTimeAudioCalls; // @synthesize showsFaceTimeAudioCalls=_showsFaceTimeAudioCalls;
@property (nonatomic) BOOL showsFaceTimeVideoCalls; // @synthesize showsFaceTimeVideoCalls=_showsFaceTimeVideoCalls;
@property (nonatomic) BOOL showsTelephonyCalls; // @synthesize showsTelephonyCalls=_showsTelephonyCalls;
@property (strong) id<SyncManagerProtocol> syncManager; // @synthesize syncManager=_syncManager;
@property (strong, nonatomic, getter=uncoalescedRecentCallsSync) NSArray *uncoalescedRecentCalls; // @synthesize uncoalescedRecentCalls=_uncoalescedRecentCalls;
@property (strong) NSArray *uncoalescedUnFilteredRecentCalls; // @synthesize uncoalescedUnFilteredRecentCalls=_uncoalescedUnFilteredRecentCalls;
@property (strong) NSNumber *unreadCallCount; // @synthesize unreadCallCount=_unreadCallCount;

+ (unsigned int)CHCallStatusForCallWithDuration:(double)arg1 isOriginated:(BOOL)arg2 isAnswered:(BOOL)arg3;
+ (id)limitingCallKindsForCallType:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)addMultipleCallsToCallHistory:(id)arg1;
- (void)addToCallHistory:(id)arg1;
- (id)applyPredicate:(id)arg1 toCalls:(id)arg2;
- (unsigned long long)callCountWithPredicate:(id)arg1;
- (double)callTimersGetIncoming;
- (double)callTimersGetLifetime;
- (double)callTimersGetOutgoing;
- (void)callTimersReset;
- (id)callsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 batchSize:(unsigned long long)arg4;
- (void)clearDatabase;
- (id)coalesceCalls:(id)arg1;
- (unsigned long long)coalescedCallCountWithPredicate:(id)arg1;
- (id)coalescedCallsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 batchSize:(unsigned long long)arg4;
- (unsigned long long)countCallsWithPredicate:(id)arg1;
- (unsigned long long)countCallsWithPredicateSync:(id)arg1;
- (void)currentLocaleChanged:(id)arg1;
- (void)dealloc;
- (void)deleteAllCalls;
- (void)deleteAllCallsSync;
- (void)deleteCall:(id)arg1;
- (void)deleteCallAtIndex:(unsigned long long)arg1;
- (long long)deleteCallsWithPredicate:(id)arg1;
- (void)deleteCallsWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteTheseCalls:(id)arg1;
- (void)deleteTheseCallsSync:(id)arg1;
- (id)fetchRecentCallsSyncWithCoalescing:(BOOL)arg1;
- (unsigned long long)fetchUnreadCallsCount;
- (void)flush;
- (id)getLimitsDictionary;
- (void)handleCallHistoryContactStoreChangedInternalNotification:(id)arg1;
- (void)handleCallHistoryDatabaseChangedInternalNotification:(id)arg1;
- (id)init;
- (id)initWithFetchingLimitsDictionary:(id)arg1 andCoalescingStrategy:(id)arg2 andPostFetchingPredicate:(id)arg3 withQueue:(id)arg4;
- (id)latestCallMatchingNormalizedRemoteParticipantHandleValues:(id)arg1;
- (id)latestRecentCallMatchingPredicate:(id)arg1;
- (void)markAllCallsAsReadWithPredicate:(id)arg1;
- (id)recentCallsWithPredicate:(id)arg1;
- (void)registerForNotifications;
- (void)setDefaultInitValues;
- (void)setInitialLimitingCallKinds:(id)arg1;
- (void)setLimitingCallKindsSync:(id)arg1;
- (void)setLimitingCallTypesSync:(unsigned int)arg1;
- (void)setOutgoingLocalParticipantUUID:(id)arg1 forRecentCallsMatchingPredicate:(id)arg2;
- (long long)setRead:(BOOL)arg1 forCallsWithPredicate:(id)arg2;
- (void)setRead:(BOOL)arg1 forCallsWithPredicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)unCoalesceCall:(id)arg1;
- (void)updateBytesOfDataUsedFor:(id)arg1 with:(id)arg2;

@end
