//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext, CIDualRedEyeRepairTuning, CIImage, CIRenderDestination, NSArray, NSDate, NSDictionary;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLTexture;

@interface CIDualRedEyeRepairSession : NSObject
{
    struct __CVBuffer *_primary;
    struct __CVBuffer *_secondary;
    struct __CVBuffer *_output;
    CIContext *context;
    NSArray *observations;
    CIRenderDestination *destination;
    CIImage *primaryImage;
    CIImage *secondaryImage;
    NSDictionary *metadata;
    NSDictionary *imageProperties;
    NSArray *faces;
    CIDualRedEyeRepairTuning *tuning;
    NSDate *timestamp;
    NSDictionary *tuningParametersByPortType;
    id<MTLCommandQueue> commandQueue;
    id<MTLTexture> primaryTexture;
    id<MTLTexture> secondaryTexture;
    id<MTLTexture> outputTexture;
    id<MTLCommandBuffer> commandBuffer;
}

@property (strong, nonatomic) id<MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer;
@property (strong, nonatomic) id<MTLCommandQueue> commandQueue; // @synthesize commandQueue;
@property (strong, nonatomic) CIContext *context; // @synthesize context;
@property (strong, nonatomic) CIRenderDestination *destination; // @synthesize destination;
@property (strong, nonatomic) NSArray *faces; // @synthesize faces;
@property (strong, nonatomic) NSDictionary *imageProperties; // @synthesize imageProperties;
@property (strong, nonatomic) NSDictionary *metadata; // @synthesize metadata;
@property (strong, nonatomic) NSArray *observations; // @synthesize observations;
@property (strong, nonatomic) id<MTLTexture> outputTexture; // @synthesize outputTexture;
@property (strong, nonatomic) CIImage *primaryImage; // @synthesize primaryImage;
@property (strong, nonatomic) id<MTLTexture> primaryTexture; // @synthesize primaryTexture;
@property (strong, nonatomic) CIImage *secondaryImage; // @synthesize secondaryImage;
@property (strong, nonatomic) id<MTLTexture> secondaryTexture; // @synthesize secondaryTexture;
@property (strong, nonatomic) NSDate *timestamp; // @synthesize timestamp;
@property (strong, nonatomic) CIDualRedEyeRepairTuning *tuning; // @synthesize tuning;
@property (strong, nonatomic) NSDictionary *tuningParametersByPortType; // @synthesize tuningParametersByPortType;

+ (id)_contextRGBAh;
- (BOOL)_repairPrimaryWithSecondary:(struct __CVBuffer *)arg1 to:(struct __CVBuffer *)arg2;
- (void)cleanupState;
- (void)customizeRepairFilter:(id)arg1 forFace:(id)arg2;
- (void)dealloc;
- (void)dumpInputs;
- (void)dumpObservation:(id)arg1 index:(int)arg2;
- (void)dumpSecondary;
- (id)init;
- (BOOL)prepareRepair;
- (BOOL)prepareRepairWithTuningParametersByPortType:(id)arg1;
- (BOOL)prewarm;
- (id)redEyeFaceFromObservation:(id)arg1 exifOrientation:(int)arg2;
- (BOOL)renderUsingPixelBuffers;
- (BOOL)renderUsingProvidedCommandQueue;
- (BOOL)repairFace:(id)arg1 filter:(id)arg2;
- (BOOL)repairPrimaryWithSecondary:(struct __CVBuffer *)arg1;
- (BOOL)setPrimary:(struct __CVBuffer *)arg1 observations:(id)arg2 metadata:(id)arg3;
- (BOOL)validateRenderState;
- (int)validateRepair;
- (int)validateSetPrimary;

@end

