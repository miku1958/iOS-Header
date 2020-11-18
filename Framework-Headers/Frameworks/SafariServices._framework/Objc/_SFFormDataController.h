//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebUI/WBUFormDataController.h>

#import <SafariServices/_SFAuthenticationContextDelegate-Protocol.h>

@class NSString, _SFAuthenticationContext, _SFAutoFillAuthenticationCache;

@interface _SFFormDataController : WBUFormDataController <_SFAuthenticationContextDelegate>
{
    _SFAutoFillAuthenticationCache *_autoFillAuthenticationCache;
    _SFAuthenticationContext *_autoFillAuthenticationContext;
}

@property (readonly, nonatomic) _SFAutoFillAuthenticationCache *autoFillAuthenticationCache; // @synthesize autoFillAuthenticationCache=_autoFillAuthenticationCache;
@property (readonly, nonatomic) _SFAuthenticationContext *autoFillAuthenticationContext; // @synthesize autoFillAuthenticationContext=_autoFillAuthenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_authenticationContextInvalidated:(id)arg1;
- (BOOL)authenticationEnabledForContext:(id)arg1;
- (BOOL)contextRequiresSessionBasedAuthentication:(id)arg1;
- (BOOL)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (BOOL)contextShouldAllowPasscodeFallback:(id)arg1;
- (id)initWithAggressiveKeychainCaching:(BOOL)arg1;
- (double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(id)arg1;

@end

