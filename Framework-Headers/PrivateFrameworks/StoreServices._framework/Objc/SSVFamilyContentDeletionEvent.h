//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SSVFamilyContentDeletionEvent : NSObject
{
    NSArray *_deletedAccounts;
}

@property (readonly, nonatomic) NSArray *deletedAccounts; // @synthesize deletedAccounts=_deletedAccounts;

+ (id)notificationPayloadWithAccountPairs:(id)arg1;
+ (void)postDistributedNotificationWithAccountPairs:(id)arg1;
- (void).cxx_destruct;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)initWithXPCEventStreamEvent:(id)arg1;

@end

