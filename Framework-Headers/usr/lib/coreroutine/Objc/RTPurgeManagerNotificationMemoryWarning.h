//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

__attribute__((visibility("hidden")))
@interface RTPurgeManagerNotificationMemoryWarning : RTNotification
{
    long long _pressureState;
}

@property (readonly, nonatomic) long long pressureState; // @synthesize pressureState=_pressureState;

+ (id)notificationName;
- (id)initWithMemoryPressureState:(long long)arg1;

@end
