//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NNMKMessage, NSError, NSNumber, NSString, NSValue;
@protocol NNMKSyncStateManagerDelegate;

@protocol NNMKSyncStateManager <NSObject>

@property (weak, nonatomic) id<NNMKSyncStateManagerDelegate> delegate;

- (BOOL)isInitialSyncRestricted;
- (NSNumber *)pairedDeviceScreenScale;
- (NSValue *)pairedDeviceScreenSize;
- (BOOL)pairedDeviceSupportsMailContentProtectedChannel;
- (BOOL)pairedDeviceSupportsMultipleMailboxes;
- (BOOL)pairedDeviceSupportsStandaloneMode;
- (NSString *)pairingStorePath;
- (void)reportInitialSyncDidComplete;
- (void)reportInitialSyncDidCompleteSending;
- (void)reportInitialSyncDidFailWithError:(NSError *)arg1;
- (void)reportInitialSyncProgress:(double)arg1;
- (BOOL)willPresentNotificationForMessage:(NNMKMessage *)arg1;
@end

