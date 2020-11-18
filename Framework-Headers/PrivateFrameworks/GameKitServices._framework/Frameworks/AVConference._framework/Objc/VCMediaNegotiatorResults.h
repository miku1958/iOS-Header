//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorResults : NSObject
{
    BOOL _supportsDynamicMaxBitrate;
    NSString *_remoteUserAgent;
    NSString *_remoteBasebandCodec;
    unsigned int _remoteBasebandCodecSampleRate;
    NSMutableDictionary *_bandwidthSettings;
}

@property (strong, nonatomic) NSMutableDictionary *bandwidthSettings; // @synthesize bandwidthSettings=_bandwidthSettings;
@property (strong, nonatomic) NSString *remoteBasebandCodec; // @synthesize remoteBasebandCodec=_remoteBasebandCodec;
@property (nonatomic) unsigned int remoteBasebandCodecSampleRate; // @synthesize remoteBasebandCodecSampleRate=_remoteBasebandCodecSampleRate;
@property (strong, nonatomic) NSString *remoteUserAgent; // @synthesize remoteUserAgent=_remoteUserAgent;
@property (nonatomic) BOOL supportsDynamicMaxBitrate; // @synthesize supportsDynamicMaxBitrate=_supportsDynamicMaxBitrate;

- (void)dealloc;
- (id)init;

@end

