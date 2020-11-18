//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@class ACAccount, NSString;

@protocol EMAccount <NSObject>

@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *password;

- (BOOL)canAuthenticateWithCurrentCredentials;
- (BOOL)hasPasswordCredential;
- (void)savePersistentAccount;
- (ACAccount *)systemAccount;
@end

