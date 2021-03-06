//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKDRecordPCSData, CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation
{
    BOOL _serverRecordHasNoProtectionData;
    NSString *_serverRecordType;
}

@property (readonly, nonatomic) CKRecordID *recordID;
@property (strong, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData; // @synthesize serverRecordHasNoProtectionData=_serverRecordHasNoProtectionData;
@property (strong, nonatomic) NSString *serverRecordType; // @synthesize serverRecordType=_serverRecordType;

- (void).cxx_destruct;
- (BOOL)_createAdditionalPCS;
- (BOOL)_decryptPCS;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (BOOL)_decryptRecordPCSInSharedDatabase;
- (BOOL)_fetchDependentPCS;
- (BOOL)_fetchDependentPCSInSharedDatabase;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchPCSForPrivateZone;
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;
- (BOOL)_savePCSDataToCache;
- (BOOL)hasAllPCSData;
- (id)itemTypeName;
- (BOOL)needsChainPCSCreation;

@end

