//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol HKDiagnosticStoreServer <NSObject>
- (void)remote_fetchDiagnosticsWithKeys:(NSArray *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)remote_fetchURLForAnalyticsFileWithName:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
@end
