//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@interface RTBatteryManagerNotificationChargerConnected : RTNotification
{
    BOOL _connected;
}

@property (readonly, nonatomic) BOOL connected; // @synthesize connected=_connected;

- (id)initWithChargerConnected:(BOOL)arg1;

@end

