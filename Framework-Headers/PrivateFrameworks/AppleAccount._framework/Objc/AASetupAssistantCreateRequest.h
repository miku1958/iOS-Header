//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class AASigningSession, ACAccount, NSDictionary;

@interface AASetupAssistantCreateRequest : AARequest
{
    NSDictionary *appleIDParameters;
    AASigningSession *signingSession;
    ACAccount *_account;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)initWithAccount:(id)arg1 withAppleIDParameters:(id)arg2 signingSession:(id)arg3;
- (id)urlRequest;
- (id)urlString;

@end

