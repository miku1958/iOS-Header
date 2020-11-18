//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUCallServicesProtocol-Protocol.h>

@class NSDictionary, TUDialRequest;

@protocol TUCallServicesDaemonDelegate <TUCallServicesProtocol>
- (void)dialWithRequest:(TUDialRequest *)arg1;
- (void)dialWithRequest:(TUDialRequest *)arg1 reply:(void (^)(TUCall *, NSArray *))arg2;
- (void)pullCallFromClientUsingHandoffActivityUserInfo:(NSDictionary *)arg1 reply:(void (^)(TUCall *, NSArray *))arg2;
- (void)requestInitialState:(void (^)(NSArray *))arg1;
@end

