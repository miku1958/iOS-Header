//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiometricKit/BKDevice.h>

@protocol BKDevicePearlDelegate;

@interface BKDevicePearl : BKDevice
{
    long long _pearlState;
}

@property (weak, nonatomic) id<BKDevicePearlDelegate> delegate; // @dynamic delegate;
@property (readonly, nonatomic) long long pearlState; // @synthesize pearlState=_pearlState;

- (BOOL)clearIdentityMigrationFailureForUser:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)disableFieldDiagnosticsWithError:(id *)arg1;
- (id)eligibleForAugmentation:(id)arg1 error:(id *)arg2;
- (BOOL)enableFieldDiagnosticsWithTatsuManifest:(id)arg1 error:(id *)arg2;
- (id)fieldDiagnosticsEncryptionKeyWithError:(id *)arg1;
- (id)fieldDiagnosticsRemainingTimeWithError:(id *)arg1;
- (id)fieldDiagnosticsTatsuManifestWithError:(id *)arg1;
- (id)generateFieldDiagnosticsNonceWithError:(id *)arg1;
- (id)queryIdentityMigrationFailureForUser:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)setTemplate:(id)arg1 forIdentity:(id)arg2 error:(id *)arg3;

@end

