//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Proximity/NSObject-Protocol.h>

@class NSUUID;

@protocol PRProtobufServerProtocol <NSObject>
- (void)startStreamingProtobufDataForClientId:(NSUUID *)arg1 reply:(void (^)(BOOL))arg2;
- (void)stopStreamingProtobufDataForClientId:(NSUUID *)arg1 reply:(void (^)(BOOL))arg2;
@end

