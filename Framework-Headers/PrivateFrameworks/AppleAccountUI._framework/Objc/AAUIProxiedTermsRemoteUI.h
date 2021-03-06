//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccountUI/AAUIGenericTermsRemoteUI.h>

@class AKDevice, NSString;

@interface AAUIProxiedTermsRemoteUI : AAUIGenericTermsRemoteUI
{
    AKDevice *_proxiedDevice;
    NSString *_appProvidedContext;
}

- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_agreeToTermsWithURLString:(id)arg1 preferPassword:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_authContextForRenewCredentials;
- (void)_sendAcceptedTermsInfo:(id)arg1;
- (id)initWithAuthResults:(id)arg1;
- (id)initWithAuthResults:(id)arg1 proxiedDevice:(id)arg2 appProvidedContext:(id)arg3;
- (id)sessionConfigurationForLoader:(id)arg1;

@end

