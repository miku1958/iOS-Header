//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDHAPAccessory, HMDService, NSMutableSet, NSString;
@protocol HMDDataStreamSetupOperationDelegate, OS_dispatch_queue;

@interface HMDDataStreamSetupOperation : NSObject
{
    id<HMDDataStreamSetupOperationDelegate> _delegate;
    HMDHAPAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_logIdentifier;
    HMDService *_transferManagementService;
    NSMutableSet *_pendingBulkSendListeners;
}

@property (readonly, nonatomic) HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property (weak, nonatomic) id<HMDDataStreamSetupOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property (readonly, nonatomic) NSMutableSet *pendingBulkSendListeners; // @synthesize pendingBulkSendListeners=_pendingBulkSendListeners;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) HMDService *transferManagementService; // @synthesize transferManagementService=_transferManagementService;

+ (id)hapSetupOperationWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 maxControllerTransportMTU:(unsigned long long)arg5 setupOperationReadRequired:(BOOL)arg6;
+ (id)tcpSetupOperationWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4;
- (void).cxx_destruct;
- (void)_clearPendingBulkSendListeners;
- (void)addBulkSendListener:(id)arg1 fileType:(id)arg2;
- (void)cancelSetup;
- (void)continueStreamSetupWithResponse:(id)arg1;
- (void)dealloc;
- (id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4;
- (void)movePendingBulkSendListenersToBulkSendProtocol:(id)arg1;
- (void)postDidFailWithError:(id)arg1;
- (void)postDidSucceedWithTransport:(id)arg1 sessionEncryption:(id)arg2;
- (void)processTransportSetupResponse:(id)arg1;
- (BOOL)removeBulkSendListener:(id)arg1;
- (void)startSetup;

@end

