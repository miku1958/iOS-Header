//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMFNetAddress, HMFNetService, NSDictionary;

@protocol HMFNetServiceDelegate <NSObject>

@optional
- (void)netService:(HMFNetService *)arg1 didUpdateAddress:(HMFNetAddress *)arg2;
- (void)netService:(HMFNetService *)arg1 didUpdateTXTRecord:(NSDictionary *)arg2;
@end
