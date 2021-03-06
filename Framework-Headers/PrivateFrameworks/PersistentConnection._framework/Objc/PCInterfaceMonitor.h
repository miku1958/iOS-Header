//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersistentConnection/PCInterfaceMonitorProtocol-Protocol.h>
#import <PersistentConnection/PCInterfaceUsabilityMonitorDelegate-Protocol.h>

@class NSMapTable, NSString;
@protocol PCInterfaceUsabilityMonitorProtocol;

@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol>
{
    id<PCInterfaceUsabilityMonitorProtocol> _internal;
    NSMapTable *_delegateMap;
}

@property (readonly, nonatomic) int currentRAT;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long interfaceIdentifier;
@property (readonly, nonatomic) BOOL isBadLinkQuality;
@property (readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property (readonly, nonatomic) BOOL isInterfaceUsable;
@property (readonly, nonatomic) BOOL isInternetReachable;
@property (readonly, nonatomic) BOOL isLTEWithCDRX;
@property (readonly, nonatomic) BOOL isNetworkingPowerExpensiveToUse;
@property (readonly, nonatomic) BOOL isPoorLinkQuality;
@property (readonly, nonatomic) BOOL isRadioHot;
@property (readonly, nonatomic) int linkQuality;
@property (readonly, strong, nonatomic) NSString *linkQualityString;
@property (readonly, nonatomic) NSString *networkCode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct __CFString *wwanInterfaceName;

+ (BOOL)isBadLinkQuality:(int)arg1;
+ (BOOL)isNetworkingPowerExpensiveToUse;
+ (BOOL)isPoorLinkQuality:(int)arg1;
+ (id)sharedInstanceForIdentifier:(long long)arg1;
+ (id)stringForLinkQuality:(int)arg1;
- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithInterfaceIdentifier:(long long)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceRadioHotnessChanged:(id)arg1;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)removeDelegate:(id)arg1;

@end

