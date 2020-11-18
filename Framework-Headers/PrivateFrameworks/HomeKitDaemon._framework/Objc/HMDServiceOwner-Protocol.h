//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMDBackingStoreTransactionBlock, HMDService, HMDServiceTransaction, NSString, NSUUID;

@protocol HMDServiceOwner
- (HMDBackingStoreTransactionBlock *)backingStoreTransactionWithName:(NSString *)arg1;
- (HMDServiceTransaction *)createUpdateServiceTransationWithServiceUUID:(NSUUID *)arg1;
- (void)makeServiceNameConsistent:(HMDService *)arg1 withName:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

