//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLAuthenticationChallenge;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject
{
    NSURLAuthenticationChallenge *_challenge;
    NSString *_localizedMessage;
    NSString *_localizedTitle;
}

@property (readonly) long long failureCount;
@property (readonly) BOOL hasPassword;
@property (strong) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property (strong) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property (readonly, strong) NSString *password;
@property (readonly) id<NSURLAuthenticationChallengeSender> sender;
@property (readonly, strong) NSString *user;
@property (readonly) BOOL userNameIsEditable;
@property (readonly) BOOL userNameIsEmail;

- (void)cancelAuthentication;
- (void)dealloc;
- (id)initWithAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1;

@end

