//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HAPAccessoryServer, NSDictionary, NSNumber;

@protocol HAPAccessoryServerNotification <HMFObject>
- (void)indicateNotificationFromServer:(HAPAccessoryServer *)arg1 notifyType:(unsigned long long)arg2 withDictionary:(NSDictionary *)arg3;

@optional
- (NSNumber *)hapInstanceId;
@end

