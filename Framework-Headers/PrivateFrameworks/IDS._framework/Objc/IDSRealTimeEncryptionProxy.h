//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _IDSRealTimeEncryptionProxy;

@interface IDSRealTimeEncryptionProxy : NSObject
{
    _IDSRealTimeEncryptionProxy *_internal;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (void)requestMasterKeyMaterialForGroup:(id)arg1;
- (void)requestPublicKeys;
- (void)resetKeysForGroup:(id)arg1;
- (void)sendMKMRecoveryRequestToGroup:(id)arg1;
- (void)sendMasterKeyMaterialToGroup:(id)arg1;
- (void)sendPrekeyToGroup:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end

