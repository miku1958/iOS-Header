//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <PhotoImaging/PIVideoReframeResult-Protocol.h>

@class NSArray, NSString;
@protocol NURenderStatistics;

@interface _PIVideoReframeResult : _NURenderResult <PIVideoReframeResult>
{
    NSArray *_keyframes;
    double _confidence;
    CDStruct_996ac03c _stabCropRect;
}

@property (readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *keyframes; // @synthesize keyframes=_keyframes;
@property (readonly, nonatomic) CDStruct_996ac03c stabCropRect; // @synthesize stabCropRect=_stabCropRect;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithKeyframes:(id)arg1 confidence:(double)arg2 stabCropRect:(CDStruct_996ac03c)arg3;

@end
