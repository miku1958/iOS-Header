//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UNSNotificationRecord;

@interface UNSNotificationRecordUpdate : NSObject
{
    UNSNotificationRecord *_notificationRecord;
}

@property (readonly, nonatomic) UNSNotificationRecord *notificationRecord; // @synthesize notificationRecord=_notificationRecord;

- (void).cxx_destruct;
- (id)_initWithNotificationRecord:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

