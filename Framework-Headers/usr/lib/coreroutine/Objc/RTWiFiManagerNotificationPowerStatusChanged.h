//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@interface RTWiFiManagerNotificationPowerStatusChanged : RTNotification
{
    unsigned long long _powerStatus;
}

@property (readonly, nonatomic) unsigned long long powerStatus; // @synthesize powerStatus=_powerStatus;

- (id)initWithPowerStatus:(unsigned long long)arg1;

@end
