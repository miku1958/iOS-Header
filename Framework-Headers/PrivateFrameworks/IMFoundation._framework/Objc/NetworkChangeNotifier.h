//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMFoundation/IMConnectionMonitorDelegate-Protocol.h>
#import <IMFoundation/IMSystemMonitorListener-Protocol.h>

@class IMConnectionMonitor, NSArray, NSString;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate>
{
    BOOL _lastPostedNetworkUp;
    struct __SCDynamicStore *_store;
    NSString *_myIP;
    NSArray *_myIPs;
    IMConnectionMonitor *_connectionMonitor;
}

@property (strong, nonatomic) IMConnectionMonitor *connectionMonitor; // @synthesize connectionMonitor=_connectionMonitor;
@property (readonly, nonatomic) struct __SCDynamicStore *getDynamicStore;
@property (readonly, nonatomic) BOOL isNetworkUp;
@property (nonatomic) BOOL lastPostedNetworkUp; // @synthesize lastPostedNetworkUp=_lastPostedNetworkUp;
@property (readonly, nonatomic) NSString *myGatewayAddress;
@property (strong, nonatomic) NSString *myIP; // @synthesize myIP=_myIP;
@property (readonly, nonatomic) NSString *myIPAddress;
@property (readonly, nonatomic) NSArray *myIPAddresses;
@property (strong, nonatomic) NSArray *myIPs; // @synthesize myIPs=_myIPs;
@property (nonatomic) struct __SCDynamicStore *store; // @synthesize store=_store;

+ (void)disableNotifications;
+ (BOOL)enableNotifications;
+ (id)sharedInstance;
- (void)_clearIPCache;
- (BOOL)_listenForChanges;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isPrimaryCellular;
- (unsigned long long)linkQualityForInterfaceType:(unsigned long long)arg1;
- (int)linkQualityValueForInterface:(id)arg1;
- (int)linkQualityValueForInterfaceType:(unsigned long long)arg1;
- (id)primaryInterfaceName;
- (void)systemDidWake;
- (void)systemWillSleep;

@end

