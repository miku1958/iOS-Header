//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HAPAccessoryServer, HAPCharacteristic;

@protocol HAPAccessoryServerForBridgeDelegate <NSObject>
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateValuesForBridgeCharacteristic:(HAPCharacteristic *)arg2;
@end
