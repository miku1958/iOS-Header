//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CRVehicle, NSData, NSDictionary, NSString, NSURL;

@protocol CRCarKitService
- (void)allowsConnectionsForCertificateSerial:(NSData *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)allowsConnectionsForWiFiUUID:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)fetchAllVehiclesWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)handleCarPlayDiagnosticsWithDeviceScreenshotURL:(NSURL *)arg1 carScreenshotURL:(NSURL *)arg2 reply:(void (^)(void))arg3;
- (void)handleCarPlayRestrictionChangedWithReply:(void (^)(void))arg1;
- (void)handleDidConnectBluetoothAddress:(NSString *)arg1 reply:(void (^)(BOOL, NSString *, NSError *))arg2;
- (void)handleDidDisconnectBluetoothAddress:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)hasVehiclesWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)isBluetoothInCarWithReply:(void (^)(BOOL, NSString *, NSError *))arg1;
- (void)isCarPlayAllowedWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)isPairedWithCertificateSerial:(NSData *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)removeVehicle:(CRVehicle *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)saveVehicle:(CRVehicle *)arg1 reply:(void (^)(CRVehicle *, NSError *))arg2;
- (void)saveWiFiCredentialsForAccessoryConnectionIdentifier:(unsigned long long)arg1 credentials:(NSDictionary *)arg2 reply:(void (^)(BOOL, NSString *, NSError *))arg3;
@end
