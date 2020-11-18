//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDDecryptRecordsOperation : CKDDatabaseOperation
{
    BOOL _forcePCSDecrypt;
    CDUnknownBlockType _recordDecryptedBlock;
    NSArray *_recordsToDecrypt;
    NSObject<OS_dispatch_group> *_recordDecryptGroup;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property (nonatomic) BOOL forcePCSDecrypt; // @synthesize forcePCSDecrypt=_forcePCSDecrypt;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *recordDecryptGroup; // @synthesize recordDecryptGroup=_recordDecryptGroup;
@property (copy, nonatomic) CDUnknownBlockType recordDecryptedBlock; // @synthesize recordDecryptedBlock=_recordDecryptedBlock;
@property (strong, nonatomic) NSArray *recordsToDecrypt; // @synthesize recordsToDecrypt=_recordsToDecrypt;
@property (strong, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;

- (void).cxx_destruct;
- (void)_decryptRecord:(id)arg1;
- (void)_decryptRecord:(id)arg1 usingWebSharingIdentityData:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProtectionDataForRecord:(id)arg1;
- (void)_handleShareProtectionDataForRecord:(id)arg1;
- (void)_handleZoneProtectionDataForRecord:(id)arg1;
- (void)_recordWasDecrypted:(id)arg1 withError:(id)arg2;
- (id)_unwrapAssetKey:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_unwrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 forField:(id)arg3;
- (id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_unwrapPackageAssets:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)operationShouldBeFlowControlled;
- (BOOL)shouldCheckAppVersion;

@end
