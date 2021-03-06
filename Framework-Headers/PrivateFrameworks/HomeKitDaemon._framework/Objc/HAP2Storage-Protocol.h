//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HAPPairingIdentity, NSData, NSDictionary, NSSet, NSString;
@protocol HAP2StorageDelegate;

@protocol HAP2Storage <NSObject>

@property (weak, nonatomic) id<HAP2StorageDelegate> delegate;

- (void)fetchCacheForIdentifier:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)fetchControllerKeysWithCompletion:(void (^)(HAPPairingIdentity *, NSError *))arg1;
- (void)fetchKeysForIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSDictionary *))arg2;
- (void)hasKeysForIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSDictionary *))arg2;
- (void)removeCacheForIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeControllerKeyWithCompletion:(void (^)(NSError *))arg1;
- (void)removeKeysForIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)saveCacheForIdentifier:(NSString *)arg1 data:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)saveControllerIdentity:(HAPPairingIdentity *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)saveKeysForIdentifiers:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *))arg2;

@optional
- (void)shutDownWithCompletion:(void (^)(NSError *))arg1;
- (void)startUpWithCompletion:(void (^)(NSError *))arg1;
@end

