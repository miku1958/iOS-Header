//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LKTOpticalFlow : NSObject
{
    BOOL _isValid;
    BOOL _useNonLocalRegularization;
    int _width;
    int _height;
    int _levelCount;
    int _numScales;
    unsigned int _outputPixelFormat;
    int _numWarpings;
    int _nlreg_radius;
    int _nlreg_padding;
    float _nlreg_sigma_l;
    float _nlreg_sigma_c;
    float _nlreg_sigma_w;
}

@property (readonly, nonatomic) int height; // @synthesize height=_height;
@property (nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property (readonly, nonatomic) int levelCount; // @synthesize levelCount=_levelCount;
@property (nonatomic) int nlreg_padding; // @synthesize nlreg_padding=_nlreg_padding;
@property (nonatomic) int nlreg_radius; // @synthesize nlreg_radius=_nlreg_radius;
@property (nonatomic) float nlreg_sigma_c; // @synthesize nlreg_sigma_c=_nlreg_sigma_c;
@property (nonatomic) float nlreg_sigma_l; // @synthesize nlreg_sigma_l=_nlreg_sigma_l;
@property (nonatomic) float nlreg_sigma_w; // @synthesize nlreg_sigma_w=_nlreg_sigma_w;
@property (readonly, nonatomic) int numScales; // @synthesize numScales=_numScales;
@property (nonatomic) int numWarpings; // @synthesize numWarpings=_numWarpings;
@property (nonatomic) unsigned int outputPixelFormat; // @synthesize outputPixelFormat=_outputPixelFormat;
@property (nonatomic) BOOL useNonLocalRegularization; // @synthesize useNonLocalRegularization=_useNonLocalRegularization;
@property (readonly, nonatomic) int width; // @synthesize width=_width;

- (BOOL)_validateInputImage:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (BOOL)_validateOutputImage:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (BOOL)estimateFlowFromReference:(struct __CVBuffer *)arg1 target:(struct __CVBuffer *)arg2 error:(id *)arg3;
- (BOOL)estimateFlowStream:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)initWithWidth:(int)arg1 height:(int)arg2 numScales:(int)arg3;
- (BOOL)setOutputUV:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (void)waitUntilCompleted;

@end

