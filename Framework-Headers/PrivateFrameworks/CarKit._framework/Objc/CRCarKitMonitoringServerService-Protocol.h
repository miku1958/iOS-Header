//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData;

@protocol CRCarKitMonitoringServerService
- (void)startMonitoringCertificateSerial:(NSData *)arg1 reply:(void (^)(void))arg2;
- (void)stopMonitoringCertificateSerial:(NSData *)arg1 reply:(void (^)(void))arg2;
@end

