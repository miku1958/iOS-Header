//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/NSObject-Protocol.h>

@class AVOutputDevice, NSDictionary;

@protocol AVOutputDeviceCommunicationChannelManager <NSObject>

@property (weak) AVOutputDevice *parentOutputDevice;

- (void)openCommunicationChannelWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(AVOutputDeviceCommunicationChannel *, NSError *, NSString *))arg2;
@end

