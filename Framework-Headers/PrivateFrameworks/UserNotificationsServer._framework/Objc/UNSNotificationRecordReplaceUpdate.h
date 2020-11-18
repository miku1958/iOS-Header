//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsServer/UNSNotificationRecordUpdate.h>

@class UNSNotificationRecord;

@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate
{
    UNSNotificationRecord *_replacedNotificationRecord;
}

@property (readonly, nonatomic) UNSNotificationRecord *replacedNotificationRecord; // @synthesize replacedNotificationRecord=_replacedNotificationRecord;

+ (id)updateWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2;
- (void).cxx_destruct;
- (id)_initWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

