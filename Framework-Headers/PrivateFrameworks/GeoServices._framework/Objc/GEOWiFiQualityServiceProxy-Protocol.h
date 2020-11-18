//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEOWiFiQualityServiceRequest, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GEOWiFiQualityServiceProxy <NSObject>
- (void)cancelRequestId:(NSString *)arg1;
- (void)submitWiFiQualityServiceRequest:(GEOWiFiQualityServiceRequest *)arg1 requestId:(NSString *)arg2 auditToken:(GEOApplicationAuditToken *)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completion:(void (^)(GEOWiFiQualityServiceResponse *, NSError *))arg5;
- (void)submitWiFiQualityTileLoadForKey:(NSString *)arg1 eTag:(NSString *)arg2 requestId:(NSString *)arg3 auditToken:(GEOApplicationAuditToken *)arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completion:(void (^)(NSString *, NSString *, NSData *, NSError *))arg6;
@end
