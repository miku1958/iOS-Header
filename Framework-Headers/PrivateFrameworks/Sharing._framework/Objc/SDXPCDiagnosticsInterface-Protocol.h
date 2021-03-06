//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SFBLEDevice;

@protocol SDXPCDiagnosticsInterface
- (void)bluetoothUserInteraction;
- (void)diagnosticBLEModeWithCompletion:(void (^)(NSError *))arg1;
- (void)diagnosticControl:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)diagnosticLogControl:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)diagnosticMock:(NSString *)arg1 device:(SFBLEDevice *)arg2 completion:(void (^)(NSError *))arg3;
- (void)diagnosticMockStart:(void (^)(NSError *))arg1;
- (void)diagnosticMockStop:(void (^)(NSError *))arg1;
- (void)diagnosticShow:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)diagnosticUnlockTestClientWithDevice:(SFBLEDevice *)arg1;
- (void)diagnosticUnlockTestServer;
@end

