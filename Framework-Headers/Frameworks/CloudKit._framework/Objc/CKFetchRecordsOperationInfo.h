//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSSet;

@interface CKFetchRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    BOOL _isFetchCurrentUserOperation;
    BOOL _shouldFetchAssetContent;
    BOOL _shouldFetchAssetContentInMemory;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    NSDictionary *_desiredPackageFileIndices;
    NSDictionary *_signaturesOfAssetsByRecordIDAndKey;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property (nonatomic) unsigned long long URLOptions; // @synthesize URLOptions=_URLOptions;
@property (strong, nonatomic) NSSet *assetFieldNamesToPublishURLs; // @synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs;
@property (strong, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property (strong, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property (strong, nonatomic) NSDictionary *desiredPackageFileIndices; // @synthesize desiredPackageFileIndices=_desiredPackageFileIndices;
@property (nonatomic) BOOL isFetchCurrentUserOperation; // @synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation;
@property (strong, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property (strong, nonatomic) NSDictionary *recordIDsToETags; // @synthesize recordIDsToETags=_recordIDsToETags;
@property (strong, nonatomic) NSDictionary *recordIDsToVersionETags; // @synthesize recordIDsToVersionETags=_recordIDsToVersionETags;
@property (nonatomic) unsigned long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property (nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property (strong, nonatomic) NSDictionary *signaturesOfAssetsByRecordIDAndKey; // @synthesize signaturesOfAssetsByRecordIDAndKey=_signaturesOfAssetsByRecordIDAndKey;
@property (strong, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

