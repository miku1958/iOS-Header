//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Security/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString, SFAnalyticsActivityTracker, SFAnalyticsMultiSampler;
@protocol SFAnalyticsProtocol;

@protocol SFAnalyticsProtocol <NSObject>
+ (id<SFAnalyticsProtocol>)logger;
- (SFAnalyticsMultiSampler *)AddMultiSamplerForName:(NSString *)arg1 withTimeInterval:(double)arg2 block:(NSDictionary * (^)(void))arg3;
- (void)logResultForEvent:(NSString *)arg1 hardFailure:(BOOL)arg2 result:(NSError *)arg3;
- (void)logResultForEvent:(NSString *)arg1 hardFailure:(BOOL)arg2 result:(NSError *)arg3 withAttributes:(NSDictionary *)arg4;
- (SFAnalyticsActivityTracker *)logSystemMetricsForActivityNamed:(NSString *)arg1 withAction:(void (^)(void))arg2;
- (SFAnalyticsActivityTracker *)startLogSystemMetricsForActivityNamed:(NSString *)arg1;
@end
