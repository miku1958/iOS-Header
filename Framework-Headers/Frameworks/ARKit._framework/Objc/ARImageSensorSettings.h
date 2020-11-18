//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@class ARVideoFormat, NSDictionary, NSString;

@interface ARImageSensorSettings : NSObject <NSCopying>
{
    BOOL _autoFocusEnabled;
    BOOL _mirrorVideoOutput;
    BOOL _visionDataOutputEnabled;
    BOOL _geometricDistortionCorrectionEnabled;
    BOOL _enabled;
    float _maxGainOverride;
    ARVideoFormat *_videoFormat;
    NSString *_metaData;
    NSDictionary *_visionDataOutputParameters;
}

@property (nonatomic) BOOL autoFocusEnabled; // @synthesize autoFocusEnabled=_autoFocusEnabled;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled; // @synthesize geometricDistortionCorrectionEnabled=_geometricDistortionCorrectionEnabled;
@property (nonatomic) float maxGainOverride; // @synthesize maxGainOverride=_maxGainOverride;
@property (copy, nonatomic) NSString *metaData; // @synthesize metaData=_metaData;
@property (nonatomic) BOOL mirrorVideoOutput; // @synthesize mirrorVideoOutput=_mirrorVideoOutput;
@property (strong, nonatomic) ARVideoFormat *videoFormat; // @synthesize videoFormat=_videoFormat;
@property (nonatomic) BOOL visionDataOutputEnabled; // @synthesize visionDataOutputEnabled=_visionDataOutputEnabled;
@property (strong, nonatomic) NSDictionary *visionDataOutputParameters; // @synthesize visionDataOutputParameters=_visionDataOutputParameters;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithVideoFormat:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
