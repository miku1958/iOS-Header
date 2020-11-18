//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISAuthenticationChallenge.h>

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge
{
    long long _failureCount;
    BOOL _hasPassword;
    NSString *_password;
    id<NSURLAuthenticationChallengeSender> _sender;
    NSString *_user;
    BOOL _userNameIsEditable;
}

@property long long failureCount; // @synthesize failureCount=_failureCount;
@property BOOL hasPassword; // @synthesize hasPassword=_hasPassword;
@property (strong) NSString *password; // @synthesize password=_password;
@property id<NSURLAuthenticationChallengeSender> sender; // @synthesize sender=_sender;
@property (strong) NSString *user; // @synthesize user=_user;
@property BOOL userNameIsEditable; // @synthesize userNameIsEditable=_userNameIsEditable;

- (void)dealloc;
- (id)init;
- (BOOL)userNameIsEmail;

@end

