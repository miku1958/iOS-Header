//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDRequestDetails;

@protocol DNDRemoteServiceServerStateProtocol <NSObject>
- (void)queryStateWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDState *, NSError *))arg2;
- (void)registerForStateUpdatesWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
@end
