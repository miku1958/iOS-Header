//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALNUNNotificationMapper;

@interface CALNUNNotificationResponseMapper : NSObject
{
    CALNUNNotificationMapper *_notificationMapper;
}

@property (readonly, nonatomic) CALNUNNotificationMapper *notificationMapper; // @synthesize notificationMapper=_notificationMapper;

+ (id)_calnNotificationActionIdentifierFromUNNotificationActionIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)calnNotificationResponseFromUNNotificationResponse:(id)arg1;
- (id)initWithNotificationMapper:(id)arg1;

@end

