//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, NSDictionary;

@interface AALoginAccountRequest : AARequest
{
    ACAccount *_account;
    NSDictionary *_delegatesInfo;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 delegates:(id)arg2;
- (id)urlRequest;
- (id)urlString;

@end
