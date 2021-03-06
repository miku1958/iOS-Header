//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HMHomeManagerDelegatePrivate-Protocol.h>

@class HFHomeKitDispatcher, HMHome, HMHomeManager;

@protocol HFHomeManagerObserver <HMHomeManagerDelegatePrivate>

@optional
- (void)homeKitDispatcher:(HFHomeKitDispatcher *)arg1 manager:(HMHomeManager *)arg2 didChangeHome:(HMHome *)arg3;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateLocationSensingAvailability:(BOOL)arg2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(HMHomeManager *)arg1;
- (void)homeManagerDidFinishUnknownChange:(HMHomeManager *)arg1;
@end

