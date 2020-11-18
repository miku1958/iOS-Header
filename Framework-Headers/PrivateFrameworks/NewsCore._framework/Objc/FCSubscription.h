//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface FCSubscription : NSObject
{
    BOOL _notificationsEnabled;
    BOOL _canRetry;
    NSString *_subscriptionID;
    unsigned long long _subscriptionType;
    NSDate *_dateAdded;
    NSString *_tagID;
    NSURL *_url;
    NSString *_title;
    NSURL *_pollingURL;
    NSString *_errorMessage;
}

@property (readonly, nonatomic) BOOL canRetry; // @synthesize canRetry=_canRetry;
@property (readonly, copy, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property (readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property (readonly, nonatomic) BOOL notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property (readonly, nonatomic) NSURL *pollingURL; // @synthesize pollingURL=_pollingURL;
@property (readonly, copy, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
@property (readonly, nonatomic) unsigned long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property (strong, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

+ (id)mutedSubscriptionWithSubscriptionID:(id)arg1 tagID:(id)arg2 dateAdded:(id)arg3;
+ (id)pendingSubscriptionWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;
+ (id)subscriptionWithSubscriptionID:(id)arg1 dictionaryRepresentation:(id)arg2;
+ (id)subscriptionWithSubscriptionID:(id)arg1 tagID:(id)arg2 dateAdded:(id)arg3 notificationsEnabled:(BOOL)arg4;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithSubscriptionID:(id)arg1 tagID:(id)arg2 dateAdded:(id)arg3 subscriptionType:(unsigned long long)arg4 notificationsEnabled:(BOOL)arg5;
- (id)initWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;
- (BOOL)isTypeMutedTag;
- (BOOL)isTypePending;
- (BOOL)isTypeTag;

@end

