//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol DNDSSyncService;

@protocol DNDSSyncServiceDelegate <NSObject>
- (void)syncService:(id<DNDSSyncService>)arg1 didReceiveMessage:(NSDictionary *)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(NSString *)arg4;

@optional
- (BOOL)syncService:(id<DNDSSyncService>)arg1 shouldAcceptIncomingMessage:(NSDictionary *)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(NSString *)arg4;
@end
