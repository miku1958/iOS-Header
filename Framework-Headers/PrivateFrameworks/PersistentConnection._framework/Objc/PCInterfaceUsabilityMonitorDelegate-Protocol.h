//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersistentConnection/NSObject-Protocol.h>

@class NSObject;
@protocol PCInterfaceUsabilityMonitorProtocol;

@protocol PCInterfaceUsabilityMonitorDelegate <NSObject>

@optional
- (void)interfaceLinkQualityChanged:(NSObject<PCInterfaceUsabilityMonitorProtocol> *)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceRadioHotnessChanged:(NSObject<PCInterfaceUsabilityMonitorProtocol> *)arg1;
- (void)interfaceReachabilityChanged:(NSObject<PCInterfaceUsabilityMonitorProtocol> *)arg1;
@end
