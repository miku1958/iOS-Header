//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FTRegConnectionHandler, IMServiceImpl, NSArray;

@interface FTRegAccountMonitor : NSObject
{
    long long _serviceType;
    IMServiceImpl *_service;
    NSArray *_accounts;
    FTRegConnectionHandler *_connectionHandler;
    CDStruct_34e8bc21 _monitorFlags;
}

@property (readonly, strong, nonatomic) NSArray *activeAccounts; // @synthesize activeAccounts=_accounts;
@property (strong, nonatomic) IMServiceImpl *service; // @synthesize service=_service;
@property (nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;

- (void).cxx_destruct;
- (id)_activeAccounts;
- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (BOOL)_shouldHandleAccountNofication:(id)arg1;
- (void)_startListeningForNotifications;
- (void)_stopListeningForNotifications;
- (void)_updateAccountState:(BOOL)arg1;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;
- (id)logName;

@end

