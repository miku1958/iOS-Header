//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class NSDictionary;

@protocol CDPDProtectedCloudStorageProxy <NSObject>
- (struct _PCSIdentitySetData *)pcsIdentityCreateWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (BOOL)pcsIdentityMigrateToStingrayWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (BOOL)pcsIdentityMigrateToiCDPWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (BOOL)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (BOOL)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (BOOL)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (struct _PCSIdentitySetData *)pcsIdentitySetupWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (BOOL)pcsRestoreLocalBackup:(NSDictionary *)arg1 error:(id *)arg2;
- (BOOL)pcsSynchronizeKeysWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
@end
