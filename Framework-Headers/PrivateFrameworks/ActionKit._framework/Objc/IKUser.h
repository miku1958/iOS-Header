//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IKUser : NSObject
{
    unsigned long long _userID;
    NSString *_username;
    BOOL _subscribed;
}

@property (nonatomic, getter=isSubscribed) BOOL subscribed; // @synthesize subscribed=_subscribed;
@property (nonatomic) unsigned long long userID; // @synthesize userID=_userID;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

- (void)dealloc;
- (id)description;
- (id)init;

@end
