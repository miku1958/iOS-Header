//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKUserIdentityLookupInfo.h>

@interface CKUserIdentityLookupInfo (CKDaemonExtensions)
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 participantID:(id)arg2 inShareWithID:(id)arg3 pcsManager:(id)arg4;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 participantID:(id)arg2 inShareWithID:(id)arg3 pcsManager:(id)arg4;
- (BOOL)hasEncryptedPersonalInfo;
@end

