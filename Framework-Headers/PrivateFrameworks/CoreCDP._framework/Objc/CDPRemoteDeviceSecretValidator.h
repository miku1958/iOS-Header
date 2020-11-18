//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPRemoteDeviceSecretValidator : NSObject
{
    id<CDPRemoteDeviceSecretValidatorProtocol> _validator;
    unsigned long long _failedAttempts;
}

@property (readonly, nonatomic) unsigned long long failedAttempts; // @synthesize failedAttempts=_failedAttempts;

- (void).cxx_destruct;
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)cancelValidationWithError:(id)arg1;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (void)resetAccountCDPState;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;

@end
