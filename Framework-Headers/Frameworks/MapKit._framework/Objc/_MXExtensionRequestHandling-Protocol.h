//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSObject;
@protocol NSSecureCoding, _MXExtensionRequestDispatching><NSSecureCoding;

@protocol _MXExtensionRequestHandling <NSObject>
- (void)handleRequest:(NSObject<NSSecureCoding> *)arg1 requestDispatcher:(NSObject<_MXExtensionRequestDispatching><NSSecureCoding> *)arg2 completion:(void (^)(NSObject<NSSecureCoding> *, NSError *))arg3;
@end

