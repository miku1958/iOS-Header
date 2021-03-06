//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString;

@interface AAAuthenticateRequest : AARequest
{
    NSString *_username;
    NSString *_password;
    NSString *_authToken;
    ACAccount *_account;
}

@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property (copy, nonatomic) NSString *password; // @synthesize password=_password;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (id)urlCredential;
- (id)urlRequest;
- (id)urlString;

@end

