//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol ASDDiagnosticServiceProtocol
- (void)activeClientsWithReplyHandler:(void (^)(NSArray *))arg1;
- (void)pingWithReplyHandler:(void (^)(void))arg1;
- (void)sendCommandWithReplyHandler:(long long)arg1 handler:(void (^)(void))arg2;
@end

