//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaSocial/MSCLOAuthWebViewController.h>

@class NSArray, NSString;

@interface MSCLFacebookAuthenticationWebViewController : MSCLOAuthWebViewController
{
    NSString *_clientID;
    NSArray *_writePermissions;
}

@property (readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property (readonly, copy, nonatomic) NSArray *writePermissions; // @synthesize writePermissions=_writePermissions;

+ (id)_authenticationURLWithClientID:(id)arg1 permissions:(id)arg2;
+ (id)authTokenFromRedirectURL:(id)arg1;
- (void).cxx_destruct;
- (id)initWithClientID:(id)arg1 writePermissions:(id)arg2;

@end

