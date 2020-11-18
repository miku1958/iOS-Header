//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSRemoteNotificationPayload : NSObject
{
    ACAccount *_account;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_logKey;
    NSDictionary *_payload;
}

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSNumber *accountIdentifier;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) NSDictionary *aps;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property (readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property (readonly, nonatomic) long long priority;

+ (long long)actionTypeFromPayload:(id)arg1;
- (void).cxx_destruct;
- (id)initWithPayload:(id)arg1;

@end

