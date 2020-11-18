//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAppleIDAuthenticationDelegate-Protocol.h>

@class AKAppleIDAuthenticationController, NSString;
@protocol AKFollowUpProvider;

@interface AKFollowUpSynchronizer : NSObject <AKAppleIDAuthenticationDelegate>
{
    id<AKFollowUpProvider> _followupProvider;
    AKAppleIDAuthenticationController *_controller;
}

@property (strong, nonatomic) AKAppleIDAuthenticationController *controller; // @synthesize controller=_controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<AKFollowUpProvider> followupProvider; // @synthesize followupProvider=_followupProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)updateSynchronizeTimeForAccount:(id)arg1 inStore:(id)arg2;
+ (void)updateSynchronizeTimeNoSaveForAccount:(id)arg1;
- (void).cxx_destruct;
- (id)_authController;
- (BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (BOOL)shouldSynchronizeForAccount:(id)arg1;
- (BOOL)synchronizeFollowUpsForAccount:(id)arg1 inStore:(id)arg2 error:(id *)arg3;

@end
