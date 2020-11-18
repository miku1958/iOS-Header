//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <VideoSubscriberAccountUI/NSCopying-Protocol.h>
#import <VideoSubscriberAccountUI/VSJSResponsePayload-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VSJSResponsePayload : IKJSObject <VSJSResponsePayload, NSCopying>
{
    NSString *_authN;
    NSString *_username;
    NSDate *_expirationDate;
    NSString *_userMetadata;
    NSString *_logout;
    NSArray *_userChannelList;
    NSString *_authenticationScheme;
    NSString *_statusCode;
    NSNumber *_expectedAction;
    NSArray *_subscriptions;
    NSArray *_clearSubscriptions;
}

@property (copy, nonatomic) NSString *authN; // @synthesize authN=_authN;
@property (copy, nonatomic) NSString *authenticationScheme; // @synthesize authenticationScheme=_authenticationScheme;
@property (copy, nonatomic) NSArray *clearSubscriptions; // @synthesize clearSubscriptions=_clearSubscriptions;
@property (copy, nonatomic) NSNumber *expectedAction; // @synthesize expectedAction=_expectedAction;
@property (copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (copy, nonatomic) NSString *logout; // @synthesize logout=_logout;
@property (copy, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
@property (copy, nonatomic) NSArray *subscriptions; // @synthesize subscriptions=_subscriptions;
@property (copy, nonatomic) NSArray *userChannelList; // @synthesize userChannelList=_userChannelList;
@property (copy, nonatomic) NSString *userMetadata; // @synthesize userMetadata=_userMetadata;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

