//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMDUnassociatedWACAccessory, NSError;

@protocol HMDWACAccessoryConfigurationDelegate
- (void)requestPermissionToAssociateWACAccessory:(HMDUnassociatedWACAccessory *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)unassociatedWACAccessoryDidFinishAssociation:(HMDUnassociatedWACAccessory *)arg1 withError:(NSError *)arg2;
- (void)unassociatedWACAccessoryDidStartAssociation:(HMDUnassociatedWACAccessory *)arg1;
@end
