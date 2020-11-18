//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDPCSCache, CKDPCSData, CKDRecordPCSData, NSError, NSObject, NSString;
@protocol CKSQLiteItem, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheFetchOperation : CKDDatabaseOperation
{
    BOOL _didFetchData;
    BOOL _wasFetchedFromCache;
    BOOL _shouldRetry;
    BOOL _pcsDataInvalidated;
    int _numRetries;
    NSObject<OS_dispatch_group> *_fetchGroup;
    CKDPCSCache *_cache;
    id<CKSQLiteItem> _itemID;
    unsigned long long _fetchOptions;
    CKDPCSData *_pcsData;
    NSError *_fetchError;
    CKDRecordPCSData *_parentPCSData;
}

@property (strong, nonatomic) CKDPCSCache *cache; // @synthesize cache=_cache;
@property (nonatomic) BOOL didFetchData; // @synthesize didFetchData=_didFetchData;
@property (strong, nonatomic) NSError *fetchError; // @synthesize fetchError=_fetchError;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property (nonatomic) unsigned long long fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property (strong, nonatomic) id<CKSQLiteItem> itemID; // @synthesize itemID=_itemID;
@property (readonly, nonatomic) NSString *itemTypeName;
@property (nonatomic) int numRetries; // @synthesize numRetries=_numRetries;
@property (strong, nonatomic) CKDRecordPCSData *parentPCSData; // @synthesize parentPCSData=_parentPCSData;
@property (strong, nonatomic) CKDPCSData *pcsData; // @synthesize pcsData=_pcsData;
@property (getter=isPCSDataInvalidated) BOOL pcsDataInvalidated; // @synthesize pcsDataInvalidated=_pcsDataInvalidated;
@property (nonatomic) BOOL shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property (nonatomic) BOOL wasFetchedFromCache; // @synthesize wasFetchedFromCache=_wasFetchedFromCache;

- (void).cxx_destruct;
- (BOOL)_createParentPCS;
- (BOOL)_decryptPCS;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchParentPCS;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (BOOL)_savePCSDataToCache;
- (BOOL)canBeUsedForOperation:(id)arg1 withOptions:(unsigned long long)arg2;
- (BOOL)hasAllPCSData;
- (id)initWithItemID:(id)arg1 parentOperation:(id)arg2 cache:(id)arg3 options:(unsigned long long)arg4;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;

@end

