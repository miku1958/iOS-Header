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
}

@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;

- (void).cxx_destruct;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (id)urlRequest;

@end

