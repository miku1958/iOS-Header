//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SPOwner/NSObject-Protocol.h>

@class SPUnknownBeacon;

@protocol SPUnknownDiscoveryXPCProtocol <NSObject>
- (oneway void)fetchEncryptedPayloadForUnknownBeacon:(SPUnknownBeacon *)arg1 completion:(void (^)(NSURL *))arg2;
- (oneway void)startUnknownDiscoveryWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)stopUnknownDiscoveryWithCompletion:(void (^)(NSError *))arg1;
@end

