//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/NSCoding-Protocol.h>

@class NSData, NSString;

@interface UNSRemoteNotificationClient : NSObject <NSCoding>
{
    NSString *_tokenIdentifier;
    NSString *_environment;
    NSData *_lastKnownDeviceToken;
    BOOL _wantsPush;
    NSString *_pushDisabledReason;
}

@property (strong, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property (strong, nonatomic) NSData *lastKnownDeviceToken; // @synthesize lastKnownDeviceToken=_lastKnownDeviceToken;
@property (strong, nonatomic) NSString *pushDisabledReason; // @synthesize pushDisabledReason=_pushDisabledReason;
@property (readonly, strong, nonatomic) NSString *tokenIdentifier; // @synthesize tokenIdentifier=_tokenIdentifier;
@property (nonatomic, getter=doesWantPush) BOOL wantsPush; // @synthesize wantsPush=_wantsPush;

+ (void)initialize;
+ (id)validEnvironmentFromEnvironment:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)wantsPushWithCoder:(id)arg1;

@end
