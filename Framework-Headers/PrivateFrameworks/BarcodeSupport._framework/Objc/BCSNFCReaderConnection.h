//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BCSNotificationServiceConnection;
@protocol OS_dispatch_queue;

@interface BCSNFCReaderConnection : NSObject
{
    BCSNotificationServiceConnection *_notificationServiceConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (BOOL)_enableNFC;
- (long long)_hardwareSupportState;
- (BOOL)_isNFCEnabled;
- (void)checkHardwareSupportStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkNFCEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disconnect;
- (void)enableNFCWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)startReaderWithDelegate:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 interruptionHandler:(CDUnknownBlockType)arg3;
- (void)stopReaderWithErrorHandler:(CDUnknownBlockType)arg1;

@end

