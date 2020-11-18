//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString, TUProxyCall;

@protocol TUVideoProxyCallManagerDelegate <NSObject>
- (void)notifyCallServicesDaemonOfNewCall;
- (TUProxyCall *)proxyCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)setProxyCall:(TUProxyCall *)arg1 forUniqueProxyIdentifier:(NSString *)arg2;
- (void)videoProxyCallFiltered:(TUProxyCall *)arg1;
@end
