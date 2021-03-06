//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NURAWImageProperties-Protocol.h>

@class CIFilter, NSArray, NSString, _NURAWCameraSpaceProperties;
@protocol NURAWNoiseReductionProperties;

@interface _NURAWImageProperties : NSObject <NURAWImageProperties>
{
    NSString *_decoderVersion;
    NSArray *_availableDecoderVersions;
    double _temperature;
    double _tint;
    CIFilter *_rawConvert;
    id<NURAWNoiseReductionProperties> _noiseReductionProperties;
    _NURAWCameraSpaceProperties *_rawCameraSpaceProperties;
}

@property (strong) NSArray *availableDecoderVersions; // @synthesize availableDecoderVersions=_availableDecoderVersions;
@property (readonly, copy) NSString *debugDescription;
@property (strong) NSString *decoderVersion; // @synthesize decoderVersion=_decoderVersion;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) id<NURAWNoiseReductionProperties> noiseReductionProperties; // @synthesize noiseReductionProperties=_noiseReductionProperties;
@property (strong) _NURAWCameraSpaceProperties *rawCameraSpaceProperties; // @synthesize rawCameraSpaceProperties=_rawCameraSpaceProperties;
@property (strong) CIFilter *rawConvert; // @synthesize rawConvert=_rawConvert;
@property (readonly) Class superclass;
@property double temperature; // @synthesize temperature=_temperature;
@property double tint; // @synthesize tint=_tint;

- (void).cxx_destruct;
- (id)inputNeutralXYFromRGB:(const double *)arg1;

@end

