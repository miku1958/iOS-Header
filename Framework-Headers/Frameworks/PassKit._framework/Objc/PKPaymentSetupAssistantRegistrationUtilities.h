//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject
{
}

+ (id)_bridgeContextDefaultLocalCredential;
+ (void)_bridgeCredentials:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (BOOL)_bridgeNeedsToRun:(unsigned long long *)arg1;
+ (void)_bridgePreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)_handlePreflightFinishedWithSuccess:(BOOL)arg1 paymentCredentials:(id)arg2 provisioningController:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (BOOL)_phoneNeedsToRun:(unsigned long long *)arg1;
+ (void)_phonePreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)preflightPaymentSetupProvisioningController:(id)arg1 forSetupAssistant:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (BOOL)setupAssistantNeedsToRun:(unsigned long long)arg1 returningRequirements:(unsigned long long *)arg2;

@end

