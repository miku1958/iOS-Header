//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL;

@protocol PKPeerPaymentTargetDeviceDelegate
- (void)downloadPassIfNecessaryWithCompletion:(void (^)(BOOL))arg1;
- (void)registerDeviceWithRegistrationURL:(NSURL *)arg1 pushToken:(NSString *)arg2 forceReregister:(BOOL)arg3 completion:(void (^)(BOOL, NSError *))arg4;
@end
