//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, WBSHistorySessionIntervalCache;
@protocol OS_dispatch_queue;

@interface WBSHistorySessionController : NSObject
{
    NSObject<OS_dispatch_queue> *_sessionCacheAccessQueue;
    NSMutableDictionary *_itemsBySession;
    NSArray *_orderedSessions;
    WBSHistorySessionIntervalCache *_intervalCache;
}

+ (id)sharedSessionController;
- (void).cxx_destruct;
- (void)_addItemToSessionCache:(id)arg1;
- (void)_clearSessionCache;
- (void)_dispatchHistorySessionsDidChangeNotification;
- (BOOL)_getKey:(id *)arg1 forDate:(double)arg2;
- (void)_historyItemsWereAdded:(id)arg1;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_insertItem:(id)arg1 withSessionKey:(id)arg2;
- (void)_loadSessionCache;
- (id)_orderedSessionKeys;
- (void)_removeItemFromSessionCache:(id)arg1;
- (void)_timeZoneDidChange:(id)arg1;
- (void)dealloc;
- (void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)itemsLastVisitedInSession:(id)arg1;
- (unsigned long long)numberOfItemsVisitedInSession:(id)arg1;
- (unsigned long long)numberOfSessions;
- (id)orderedSessions;
- (id)sessionForItem:(id)arg1;

@end
