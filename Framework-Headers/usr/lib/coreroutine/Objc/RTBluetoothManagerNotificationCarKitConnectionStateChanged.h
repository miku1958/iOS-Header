//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

__attribute__((visibility("hidden")))
@interface RTBluetoothManagerNotificationCarKitConnectionStateChanged : RTNotification
{
    long long _carKitConnectionState;
}

@property (readonly, nonatomic) long long carKitConnectionState; // @synthesize carKitConnectionState=_carKitConnectionState;

+ (id)notificationName;
- (id)initWithCarKitConnectionState:(long long)arg1;

@end
