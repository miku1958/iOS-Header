//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo
{
    BOOL _fetchAssetContents;
    BOOL _preserveOrdering;
    BOOL _forceDecryptionAttempt;
    NSSet *_desiredKeys;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property (strong, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property (strong, nonatomic) NSSet *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property (nonatomic) BOOL fetchAssetContents; // @synthesize fetchAssetContents=_fetchAssetContents;
@property (nonatomic) BOOL forceDecryptionAttempt; // @synthesize forceDecryptionAttempt=_forceDecryptionAttempt;
@property (nonatomic) BOOL preserveOrdering; // @synthesize preserveOrdering=_preserveOrdering;

- (void).cxx_destruct;
- (id)init;

@end
