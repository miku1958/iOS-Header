//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Social/SLFacebookRequest.h>

@class ACAccount;

@interface SLFacebookLoginRequest : SLFacebookRequest
{
    ACAccount *_account;
}

- (void).cxx_destruct;
- (id)_tokenSecret;
- (id)initWithAccount:(id)arg1;
- (void)preflightRequest;

@end
