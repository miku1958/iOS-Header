//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <webrtc/RTCVideoDecoderFactory-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoDecoderFactoryH264 : NSObject <RTCVideoDecoderFactory>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createDecoder:(id)arg1;
- (id)supportedCodecs;

@end
