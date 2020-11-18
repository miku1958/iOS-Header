//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSIndexSet;

@interface AVApplePortraitMetadataInternal : NSObject
{
    int version;
    float apertureFocalRatio;
    float luminanceNoiseAmplitude;
    int faceOrientation;
    NSData *faceObservationsData;
    NSIndexSet *indexesOfShallowDepthOfFieldObservations;
    struct CGRect focusRectangle;
}

@property (nonatomic) float apertureFocalRatio; // @synthesize apertureFocalRatio;
@property (strong, nonatomic) NSData *faceObservationsData; // @synthesize faceObservationsData;
@property (nonatomic) int faceOrientation; // @synthesize faceOrientation;
@property (nonatomic) struct CGRect focusRectangle; // @synthesize focusRectangle;
@property (strong, nonatomic) NSIndexSet *indexesOfShallowDepthOfFieldObservations; // @synthesize indexesOfShallowDepthOfFieldObservations;
@property (nonatomic) float luminanceNoiseAmplitude; // @synthesize luminanceNoiseAmplitude;
@property (nonatomic) int version; // @synthesize version;

- (void)dealloc;
- (id)init;

@end
