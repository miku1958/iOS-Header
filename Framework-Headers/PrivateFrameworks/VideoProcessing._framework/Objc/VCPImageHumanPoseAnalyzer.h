//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSMutableArray, NSString, NSURL, VCPCNNModelEspresso;

@interface VCPImageHumanPoseAnalyzer : VCPImageAnalyzer
{
    VCPCNNModelEspresso *_modelEspresso;
    NSURL *_netFileUrl;
    float *_inputData;
    NSString *_resConfig;
    NSMutableArray *_persons;
    NSMutableArray *_results;
    BOOL _saveKeypoints;
    int _inputWidth;
    int _inputHeight;
    float *_heatmapNms;
    BOOL _forceCPU;
    BOOL _sharedModel;
    BOOL _flushModel;
    BOOL _trackingMode;
}

@property BOOL trackingMode; // @synthesize trackingMode=_trackingMode;

+ (BOOL)saveKeypoints;
+ (id)sharedModel:(id)arg1;
- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)configForAspectRatio:(id)arg1;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChannels:(int)arg3;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 modelInputHeight:(int)arg3 modelInputWidth:(int)arg4;
- (int)createModelWithHeight:(int)arg1 srcWidth:(int)arg2;
- (void)dealloc;
- (int)generateHumanPose:(struct __CVBuffer *)arg1;
- (id)init;
- (id)initWithKeypointsOption:(BOOL)arg1 aspectRatio:(id)arg2 lightweight:(BOOL)arg3 forceCPU:(BOOL)arg4 sharedModel:(BOOL)arg5 flushModel:(BOOL)arg6;
- (int)parsePersons:(float)arg1 width:(int)arg2 height:(int)arg3;
- (int)preferredInputFormat:(int *)arg1 height:(int *)arg2 format:(unsigned int *)arg3;
- (int)processPersons:(float)arg1 width:(int)arg2 height:(int)arg3;
- (int)reInitModel;
- (int)updateModelForAspectRatio:(id)arg1;

@end
