//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AASetupAssistantConfigResponse : AAResponse
{
    NSDictionary *_urls;
}

@property (readonly, nonatomic) NSString *aboutURL;
@property (readonly, nonatomic) NSString *activeEmailDomain;
@property (readonly, nonatomic) NSString *authenticateURL;
@property (readonly, nonatomic) NSString *checkValidityURL;
@property (readonly, nonatomic) NSString *createAppleIDURL;
@property (readonly, nonatomic) NSString *createDelegateAccountsURL;
@property (readonly, nonatomic) NSString *existingAppleIDTermsUIURL;
@property (readonly, nonatomic) NSString *genericTermsURL;
@property (readonly, nonatomic) NSString *iForgotUIURL;
@property (readonly, nonatomic) NSString *iForgotURL;
@property (readonly, nonatomic) NSString *loginDelegatesURL;
@property (readonly, nonatomic) BOOL setupAssistantServerEnabled;
@property (readonly, nonatomic) NSString *signingSessionCertURL;
@property (readonly, nonatomic) NSString *signingSessionURL;
@property (readonly, nonatomic) NSString *updateAppleIDURL;
@property (readonly, nonatomic) NSString *upgradeIOSTermsUI;
@property (readonly, nonatomic) NSString *upgradeStatusURL;
@property (readonly, nonatomic) NSString *xmlUI;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

