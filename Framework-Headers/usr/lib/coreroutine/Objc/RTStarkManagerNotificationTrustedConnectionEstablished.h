//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

__attribute__((visibility("hidden")))
@interface RTStarkManagerNotificationTrustedConnectionEstablished : RTNotification
{
    BOOL _trustedConnectionEstablished;
}

@property (nonatomic) BOOL trustedConnectionEstablished; // @synthesize trustedConnectionEstablished=_trustedConnectionEstablished;

+ (id)notificationName;
- (id)initWithTrustedConnectionEstablished:(BOOL)arg1;

@end
