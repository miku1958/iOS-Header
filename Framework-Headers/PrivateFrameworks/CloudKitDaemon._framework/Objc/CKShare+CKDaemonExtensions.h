//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKShare.h>

@interface CKShare (CKDaemonExtensions)
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;
- (void)_ingestAndExportPPPCSFromShareInvitationToken:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_prepPCSDataUsingPreDecryptedPCSOnlyWithContext:(id)arg1 databaseScope:(long long)arg2;
- (void)_prepPCSDataWithContext:(id)arg1 databaseScope:(long long)arg2 publicSharingKey:(id)arg3 removeServerSpecifiedKeys:(BOOL)arg4 containerIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_prepPCSDataWithContext:(id)arg1 databaseScope:(long long)arg2 publicSharingKey:(id)arg3 removeServerSpecifiedKeys:(BOOL)arg4 containerIdentifier:(id)arg5 sharedRecordZone:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (BOOL)hasEncryptedPersonalInfo;
- (struct _OpaquePCSShareProtection *)privatePCS;
- (struct _OpaquePCSShareProtection *)publicPCS;
- (void)setPrivatePCS:(struct _OpaquePCSShareProtection *)arg1;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection *)arg1;
- (void)setSharePCSData:(id)arg1;
- (void)setSharePCSData:(id)arg1 isUnitTestAccount:(BOOL)arg2;
@end
