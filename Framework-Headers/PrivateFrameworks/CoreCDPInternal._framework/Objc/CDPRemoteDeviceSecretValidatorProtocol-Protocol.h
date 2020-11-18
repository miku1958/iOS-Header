//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSError, NSString;

@protocol CDPRemoteDeviceSecretValidatorProtocol
- (void)approveFromAnotherDeviceWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)cancelValidationWithError:(NSError *)arg1;
- (void)resetAccountCDPState;
- (void)validateSecret:(NSString *)arg1 devices:(NSArray *)arg2 type:(unsigned long long)arg3 withCompletion:(void (^)(BOOL, BOOL, NSError *))arg4;
@end
