//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/NSObject-Protocol.h>

@class NSData;

@protocol AVOutputDeviceCommunicationChannelImpl <NSObject>
- (void)close;
- (void)sendData:(NSData *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

