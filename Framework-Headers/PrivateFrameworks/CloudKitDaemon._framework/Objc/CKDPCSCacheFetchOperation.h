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
    NSError *_dependentPCSFetchError;
    CKDRecordPCSData *_parentPCSData;
}

@property (strong, nonatomic) CKDPCSCache *cache; // @synthesize cache=_cache;
@property (strong, nonatomic) NSError *dependentPCSFetchError; // @synthesize dependentPCSFetchError=_dependentPCSFetchError;
@property (nonatomic) BOOL didFetchData; // @synthesize didFetchData=_didFetchData;
@property (strong, nonatomic) NSError *fetchError; // @synthesize fetchError=_fetchError;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property (nonatomic) unsigned long long fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property (readonly, nonatomic) BOOL hasAllPCSData;
@property (strong, nonatomic) id<CKSQLiteItem> itemID; // @synthesize itemID=_itemID;
@property (readonly, nonatomic) NSString *itemTypeName;
@property (nonatomic) int numRetries; // @synthesize numRetries=_numRetries;
@property (strong, nonatomic) CKDRecordPCSData *parentPCSData; // @synthesize parentPCSData=_parentPCSData;
@property (strong, nonatomic) CKDPCSData *pcsData; // @synthesize pcsData=_pcsData;
@property (getter=isPCSDataInvalidated) BOOL pcsDataInvalidated; // @synthesize pcsDataInvalidated=_pcsDataInvalidated;
@property (nonatomic) BOOL shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property (nonatomic) unsigned long long state; // @dynamic state;
@property (nonatomic) BOOL wasFetchedFromCache; // @synthesize wasFetchedFromCache=_wasFetchedFromCache;

- (void).cxx_destruct;
- (BOOL)_createAdditionalPCS;
- (BOOL)_decryptPCS;
- (BOOL)_errorShouldImpactFlowControl:(id)arg1;
- (BOOL)_fetchDependentPCS;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_fetchPCSDataFromServer;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (BOOL)_savePCSDataToCache;
- (BOOL)_saveUpdatedPCSToServer;
- (void)_willRetryFetch;
- (BOOL)canBeUsedForOperation:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (BOOL)needsAdditionalPCSCreation;

@end

