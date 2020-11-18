//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HAPAccessoryServer, HAPOSTransaction, NSArray, NSError, NSNumber, NSString;

@protocol HAPAccessoryServerDelegate <NSObject>
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didDiscoverAccessoriesWithError:(NSError *)arg2 transaction:(HAPOSTransaction *)arg3;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didStopPairingWithError:(NSError *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateCategory:(NSNumber *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateHasPairings:(BOOL)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateName:(NSString *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateValuesForCharacteristics:(NSArray *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 isBlockedWithCompletionHandler:(void (^)(BOOL))arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 promptUserForPasswordWithType:(unsigned long long)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 requestUserPermissionForUnauthenticatedAccessory:(NSError *)arg2;
- (void)accessoryServerDidUpdateStateNumber:(HAPAccessoryServer *)arg1;
@end

