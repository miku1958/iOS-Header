//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDAuthorizationSyncEntity.h>

@interface HDAuthorizationBackupSyncEntity : HDAuthorizationSyncEntity
{
}

+ (id)_backupInfoWithSyncStore:(id)arg1;
+ (void)_setBackupInfo:(id)arg1;
+ (id)authorizationBackupPullIdentifierWithSyncStore:(id)arg1;
+ (id)authorizationBackupPushIdentifierWithSyncStore:(id)arg1;
+ (id)backupInfoUserDefaultsKey;
+ (id)createCodableSourceAuthorizationWithSourceUUID:(id)arg1 syncSession:(id)arg2;
+ (void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg1;
+ (BOOL)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (void)resetAuthorizationBackupIdentifiers;
+ (void)setAuthorizationBackupPushIdentifier:(id)arg1 syncStore:(id)arg2;
+ (id)syncEntityIdentifier;

@end
