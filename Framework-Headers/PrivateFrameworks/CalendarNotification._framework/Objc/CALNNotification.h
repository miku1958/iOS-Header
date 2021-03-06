//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/NSSecureCoding-Protocol.h>

@class CALNNotificationRequest, NSDate;

@interface CALNNotification : NSObject <NSSecureCoding>
{
    NSDate *_date;
    CALNNotificationRequest *_request;
}

@property (readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy, nonatomic) CALNNotificationRequest *request; // @synthesize request=_request;

+ (id)notificationWithRequest:(id)arg1 date:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 date:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNotification:(id)arg1;

@end

