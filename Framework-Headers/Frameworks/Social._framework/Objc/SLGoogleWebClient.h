//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/SLWebClient-Protocol.h>

@class NSArray, NSString;

@interface SLGoogleWebClient : NSObject <SLWebClient>
{
}

@property (readonly, nonatomic) NSString *authRequestURL;
@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSString *clientRedirect;
@property (readonly, nonatomic) NSString *clientRedirectForAppOpenURL;
@property (readonly, nonatomic) NSString *clientSecret;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *defaultScope;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *fallbackUserInfoURL;
@property (readonly, nonatomic) Class fallbackWebUserInfoResponseClass;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *source;
@property (readonly) Class superclass;
@property (readonly, nonatomic) Class tokenRequestClass;
@property (readonly, nonatomic) Class tokenResponseClass;
@property (readonly, nonatomic) NSString *tokenURL;
@property (readonly, nonatomic) NSString *userInfoURL;
@property (readonly, nonatomic) Class webAuthRequestClass;
@property (readonly, nonatomic) Class webUserInfoResponseClass;
@property (readonly, nonatomic) NSArray *youTubeScope;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
