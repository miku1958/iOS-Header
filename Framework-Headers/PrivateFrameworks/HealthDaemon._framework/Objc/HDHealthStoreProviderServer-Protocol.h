//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKHealthStoreIdentifier, NSSet;

@protocol HDHealthStoreProviderServer <NSObject>
- (void)remote_fetchAvailableIdentifiersWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_fetchForIdentifier:(HKHealthStoreIdentifier *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_requestAuthorizationToNewIdentifierToShareTypes:(NSSet *)arg1 readTypes:(NSSet *)arg2 completion:(void (^)(HKHealthStoreIdentifier *, NSError *))arg3;
- (void)remote_requestAuthorizationToNewIdentifierWithCompletion:(void (^)(HKHealthStoreIdentifier *, NSError *))arg1;
@end
