//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@class ARVideoFormat;

@interface ARConfiguration : NSObject <NSCopying>
{
    BOOL _lightEstimationEnabled;
    BOOL _providesAudioData;
    ARVideoFormat *_videoFormat;
    long long _worldAlignment;
    unsigned long long _frameSemantics;
}

@property (nonatomic) unsigned long long frameSemantics; // @synthesize frameSemantics=_frameSemantics;
@property (nonatomic, getter=isLightEstimationEnabled) BOOL lightEstimationEnabled; // @synthesize lightEstimationEnabled=_lightEstimationEnabled;
@property (nonatomic) BOOL providesAudioData; // @synthesize providesAudioData=_providesAudioData;
@property (strong, nonatomic) ARVideoFormat *videoFormat; // @synthesize videoFormat=_videoFormat;
@property (nonatomic) long long worldAlignment; // @synthesize worldAlignment=_worldAlignment;

+ (BOOL)isSupported;
+ (id)supportedVideoFormats;
+ (BOOL)supportsFrameSemantics:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initPrivate;

@end

