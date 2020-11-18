//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKShareMetadata.h>

@interface CKShareMetadata (CKDaemonExtensions)
- (void)_decryptDataWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;
- (void)_encryptDataWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;
- (BOOL)hasEncryptedData;
- (struct _OpaquePCSShareProtection *)publicPCS;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection *)arg1;
@end
