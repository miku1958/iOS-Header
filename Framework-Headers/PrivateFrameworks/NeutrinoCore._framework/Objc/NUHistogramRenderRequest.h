//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

#import <NeutrinoCore/NUTimeBased-Protocol.h>

@class NSString, NUColorSpace, NUHistogramParameters;

@interface NUHistogramRenderRequest : NURenderRequest <NUTimeBased>
{
    NUHistogramParameters *_parameters;
    NUColorSpace *_histogramCalculationColorSpace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NUColorSpace *histogramCalculationColorSpace; // @synthesize histogramCalculationColorSpace=_histogramCalculationColorSpace;
@property (copy, nonatomic) NUHistogramParameters *parameters;
@property (readonly) Class superclass;
@property (nonatomic) CDStruct_1b6d18a9 time;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)submit:(CDUnknownBlockType)arg1;

@end

