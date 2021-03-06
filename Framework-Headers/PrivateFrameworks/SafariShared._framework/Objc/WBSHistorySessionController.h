//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistorySessions-Protocol.h>

@class NSArray, NSMutableDictionary, WBSHistory, WBSHistorySessionIntervalCache;
@protocol OS_dispatch_queue;

@interface WBSHistorySessionController : NSObject <WBSHistorySessions>
{
    NSObject<OS_dispatch_queue> *_sessionCacheAccessQueue;
    WBSHistory *_history;
    NSMutableDictionary *_itemsBySession;
    NSArray *_orderedSessions;
    WBSHistorySessionIntervalCache *_intervalCache;
}

@property (readonly, nonatomic) unsigned long long numberOfSessions;
@property (readonly, copy, nonatomic) NSArray *orderedSessions;

+ (id)sharedSessionController;
- (void).cxx_destruct;
- (void)_addItemsToSessionCache:(id)arg1 shouldPostChangeNotification:(BOOL)arg2;
- (void)_clearSessionCache;
- (void)_dispatchHistorySessionsDidChangeNotification;
- (BOOL)_getKey:(id *)arg1 forDate:(double)arg2;
- (void)_historyItemsWereAdded:(id)arg1;
- (void)_historyItemsWereRemoved:(id)arg1;
- (unsigned long long)_insertItem:(id)arg1 withSessionKey:(id)arg2;
- (void)_loadSessionCache;
- (id)_orderedSessionKeys;
- (void)_removeItemsFromSessionCache:(id)arg1;
- (void)_requestSessionKeyForDate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_timeZoneDidChange:(id)arg1;
- (void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithHistory:(id)arg1;
- (id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)itemsLastVisitedInSession:(id)arg1;
- (unsigned long long)numberOfItemsVisitedInSession:(id)arg1;
- (void)orderedItemsNewerThanDate:(id)arg1 maxCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)sessionForItem:(id)arg1;

@end

