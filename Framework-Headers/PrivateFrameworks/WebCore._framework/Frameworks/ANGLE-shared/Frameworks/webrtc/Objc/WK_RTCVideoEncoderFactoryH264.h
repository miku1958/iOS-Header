//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <webrtc/RTCVideoEncoderFactory-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoEncoderFactoryH264 : NSObject <RTCVideoEncoderFactory>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createEncoder:(id)arg1;
- (id)supportedCodecs;

@end
