//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

__attribute__((visibility("hidden")))
@interface RTWiFiManagerNotificationLinkStatusChange : RTNotification
{
    long long _linkStatus;
}

@property (readonly, nonatomic) long long linkStatus; // @synthesize linkStatus=_linkStatus;

+ (id)notificationName;
- (id)initWithLinkStatus:(long long)arg1;

@end

