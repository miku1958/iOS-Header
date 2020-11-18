//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureSinkConfiguration.h>

@class NSArray;

@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration
{
    BOOL _depthDataDeliveryEnabled;
    BOOL _filterRenderingEnabled;
    NSArray *_filters;
    float _simulatedAperture;
}

@property (nonatomic) BOOL depthDataDeliveryEnabled; // @synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled;
@property (nonatomic) BOOL filterRenderingEnabled; // @synthesize filterRenderingEnabled=_filterRenderingEnabled;
@property (copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property (nonatomic) float simulatedAperture; // @synthesize simulatedAperture=_simulatedAperture;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)sinkType;

@end

