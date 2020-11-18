//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface CKFetchRecordZoneChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    BOOL _shouldFetchAssetContents;
    BOOL _fetchAllChanges;
    BOOL _forcePCSDecryptionAttempt;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    long long _changeTypes;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property (strong, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) long long changeTypes; // @synthesize changeTypes=_changeTypes;
@property (strong, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property (nonatomic) BOOL fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property (nonatomic) BOOL forcePCSDecryptionAttempt; // @synthesize forcePCSDecryptionAttempt=_forcePCSDecryptionAttempt;
@property (strong, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property (nonatomic) BOOL shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

