//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@interface RTDataProtectionManagerNotificationEncryptedDataAvailability : RTNotification
{
    long long _availability;
}

@property (readonly, nonatomic) long long availability; // @synthesize availability=_availability;

- (id)initWithEncryptedDataAvailability:(long long)arg1;

@end
