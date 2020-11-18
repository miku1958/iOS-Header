//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSDictionary, NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue, SGSuggestionsServiceContactsProtocol;

@interface IMSuggestionsService : NSObject
{
    NSObject<SGSuggestionsServiceContactsProtocol> *_connection;
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pending;
    NSDictionary *_localTable;
    NSHashTable *_handlesToRetry;
    id _newContactNotificationToken;
    struct __CFRunLoopObserver *_notificationObserver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_maybeEmailAddress:(id)arg1;
- (BOOL)_maybePhoneNumber:(id)arg1;
- (void)_startRequestForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3;
- (void)_startRequestForDisplayNameCallbackWithSuggestedName:(id)arg1 displayName:(id)arg2 queue:(id)arg3;
- (void)dealloc;
- (void)fetchSuggestedRealNameForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)init;
- (BOOL)isBusiness:(id)arg1;
- (void)scheduleFetchIfNecessaryForHandle:(id)arg1;
- (void)startUsingLocalLookupsWithTable:(id)arg1;
- (void)stopUsingLocalLookups;
- (id)suggestedNameFromCache:(id)arg1 wasFound:(BOOL *)arg2;

@end

