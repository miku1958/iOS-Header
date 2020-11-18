//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAiCloudTermsAgreeRequest : AARequest
{
    ACAccount *_account;
    BOOL _preferPassword;
}

@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (nonatomic) BOOL preferPassword; // @synthesize preferPassword=_preferPassword;

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)urlRequest;

@end
