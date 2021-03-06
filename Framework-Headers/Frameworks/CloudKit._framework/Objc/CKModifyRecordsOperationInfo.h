//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    BOOL _atomic;
    BOOL _shouldOnlySaveAssetContent;
    BOOL _shouldReportRecordsInFlight;
    BOOL _originatingFromDaemon;
    BOOL _markAsParticipantNeedsNewInvitationToken;
    BOOL _shouldSkipPCSRetryBehavior;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    NSData *_clientChangeTokenData;
    long long _savePolicy;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSDictionary *_pluginFieldsForRecordDeletesByID;
    NSDictionary *_assetUUIDToExpectedProperties;
    NSDictionary *_packageUUIDToExpectedProperties;
}

@property (copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // @synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties;
@property (nonatomic) BOOL atomic; // @synthesize atomic=_atomic;
@property (strong, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property (strong, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property (nonatomic) BOOL markAsParticipantNeedsNewInvitationToken; // @synthesize markAsParticipantNeedsNewInvitationToken=_markAsParticipantNeedsNewInvitationToken;
@property (nonatomic) BOOL originatingFromDaemon; // @synthesize originatingFromDaemon=_originatingFromDaemon;
@property (copy, nonatomic) NSDictionary *packageUUIDToExpectedProperties; // @synthesize packageUUIDToExpectedProperties=_packageUUIDToExpectedProperties;
@property (copy, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID; // @synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID;
@property (strong, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property (copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
@property (strong, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
@property (nonatomic) long long savePolicy; // @synthesize savePolicy=_savePolicy;
@property (nonatomic) BOOL shouldOnlySaveAssetContent; // @synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent;
@property (nonatomic) BOOL shouldReportRecordsInFlight; // @synthesize shouldReportRecordsInFlight=_shouldReportRecordsInFlight;
@property (nonatomic) BOOL shouldSkipPCSRetryBehavior; // @synthesize shouldSkipPCSRetryBehavior=_shouldSkipPCSRetryBehavior;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

