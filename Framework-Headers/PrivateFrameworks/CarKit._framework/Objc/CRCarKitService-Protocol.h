//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CRVehicle, NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol CRCarKitService
- (void)allowsConnectionsForCertificateSerial:(NSData *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)allowsConnectionsForWiFiUUID:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)fetchAllVehiclesWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)fetchInstrumentClusterURLsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchSessionInstrumentClusterURLsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)handleCarPlayConnectionRequestForConnectionID:(unsigned int)arg1 startSessionProperties:(NSDictionary *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)handleCarPlayDiagnosticsWithDeviceScreenshotURL:(NSURL *)arg1 carScreenshotURL:(NSURL *)arg2 attachmentURLs:(NSArray *)arg3 activeBundleIdentifier:(NSString *)arg4 reply:(void (^)(void))arg5;
- (void)handleCarPlayRestrictionChangedWithReply:(void (^)(void))arg1;
- (void)handleDidConnectBluetoothAddress:(NSString *)arg1 reply:(void (^)(BOOL, NSString *, NSError *))arg2;
- (void)handleDidDisconnectBluetoothAddress:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)hasVehiclesWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)isBluetoothInCarWithReply:(void (^)(BOOL, NSString *, NSError *))arg1;
- (void)isCarPlayAllowedWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)isEnhancedIntegrationEnabledWithCertificateSerial:(NSData *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)isPairedWithCertificateSerial:(NSData *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)removeVehicle:(CRVehicle *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)saveVehicle:(CRVehicle *)arg1 reply:(void (^)(CRVehicle *, NSError *))arg2;
- (void)saveWiFiCredentials:(NSDictionary *)arg1 forAccessoryConnectionIdentifier:(unsigned long long)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)vehicleIdentifierForCertificateSerial:(NSData *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)wantsCarPlayControlAdvertisingForUSBWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)wantsCarPlayControlAdvertisingForWiFiUUID:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
@end

