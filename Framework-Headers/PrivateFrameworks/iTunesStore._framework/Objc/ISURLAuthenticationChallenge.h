//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISAuthenticationChallenge.h>

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge
{
}

+ (id)_messageForProtectionSpace:(id)arg1;
+ (id)_titleForProtectionSpace:(id)arg1;
- (void)cancelAuthentication;
- (long long)failureCount;
- (BOOL)hasPassword;
- (id)initWithAuthenticationChallenge:(id)arg1;
- (id)password;
- (id)sender;
- (void)useCredential:(id)arg1;
- (id)user;

@end
