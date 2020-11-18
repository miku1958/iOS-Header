//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BurstImageStat : NSObject
{
    float normalizedFocusScore;
    float normalizedSigma;
    float colorHistogram[1024];
    int numEntries;
    unsigned short aeMatrix[256];
    int dissimilarity;
    struct FastRegistration_Signatures projectionSignature;
    struct SharpnessGridElement_t *sharpnessGrid;
    int gridWidth;
    int gridHeight;
    struct GridROI_t gridROI;
    struct GridROI_t smoothedROI;
    float maxSkewness;
    float roiSize;
    BOOL exclude;
    BOOL AEStable;
    BOOL AFStable;
    BOOL hasRegistrationData;
    BOOL emotionallyRejected;
    BOOL doLimitedSharpnessAndBlur;
    BOOL isGarbage;
    int orientation;
    int AEAverage;
    int AETarget;
    int temporalOrder;
    float avgHorzDiffY;
    float blurExtent;
    float imageScore;
    float actionScore;
    float registrationErrorX;
    float registrationErrorY;
    float registrationErrorIntegral;
    float actionClusteringScore;
    int numHWFaces;
    float tx;
    float ty;
    int _AEDelta;
    int _version;
    double timeReceived;
    double timestamp;
    NSString *_imageId;
    NSMutableArray *_faceStatArray;
    struct CGRect facesRoiRect;
}

@property int AEAverage; // @synthesize AEAverage;
@property int AEDelta; // @synthesize AEDelta=_AEDelta;
@property BOOL AEStable; // @synthesize AEStable;
@property int AETarget; // @synthesize AETarget;
@property BOOL AFStable; // @synthesize AFStable;
@property float actionClusteringScore; // @synthesize actionClusteringScore;
@property float actionScore; // @synthesize actionScore;
@property float avgHorzDiffY; // @synthesize avgHorzDiffY;
@property float blurExtent; // @synthesize blurExtent;
@property BOOL doLimitedSharpnessAndBlur; // @synthesize doLimitedSharpnessAndBlur;
@property BOOL emotionallyRejected; // @synthesize emotionallyRejected;
@property BOOL exclude; // @synthesize exclude;
@property (strong) NSMutableArray *faceStatArray; // @synthesize faceStatArray=_faceStatArray;
@property struct CGRect facesRoiRect; // @synthesize facesRoiRect;
@property BOOL hasRegistrationData; // @synthesize hasRegistrationData;
@property (strong) NSString *imageId; // @synthesize imageId=_imageId;
@property float imageScore; // @synthesize imageScore;
@property BOOL isGarbage; // @synthesize isGarbage;
@property float maxSkewness; // @synthesize maxSkewness;
@property int numHWFaces; // @synthesize numHWFaces;
@property int orientation; // @synthesize orientation;
@property float registrationErrorIntegral; // @synthesize registrationErrorIntegral;
@property float registrationErrorX; // @synthesize registrationErrorX;
@property float registrationErrorY; // @synthesize registrationErrorY;
@property float roiSize; // @synthesize roiSize;
@property int temporalOrder; // @synthesize temporalOrder;
@property double timeReceived; // @synthesize timeReceived;
@property double timestamp; // @synthesize timestamp;
@property float tx; // @synthesize tx;
@property float ty; // @synthesize ty;
@property int version; // @synthesize version=_version;

- (void).cxx_destruct;
- (unsigned short *)aeMatrix;
- (void)allocateMeanStdPingPongBuffers:(float **)arg1:(float **)arg2:(float **)arg3:(float **)arg4;
- (void)assignMeanStdBuffers:(float *)arg1;
- (int)canRegister;
- (void)collapseSharpnessGrid;
- (float *)colorHistogram;
- (long long)compareImageOrder:(id)arg1;
- (long long)compareImageStats:(id)arg1;
- (void)computeAEMatrix:(struct __CVBuffer *)arg1;
- (float)computeAEMatrixDifference:(id)arg1;
- (void)computeBlurStatsOnGrid:(struct vImage_Buffer)arg1;
- (float)computeFacialFocusScoreSum;
- (void)computeImageColorHistogram:(struct vImage_Buffer)arg1;
- (void)computeImageData:(struct __CVBuffer *)arg1 faceIDCounts:(id)arg2;
- (float)computeImageDistance:(id)arg1;
- (void)computeImageProjections:(struct vImage_Buffer)arg1;
- (void)computeImageSharpnessOnGrid:(struct vImage_Buffer)arg1;
- (float)computeRuleOfThreeDistance;
- (float)computeScore:(float)arg1;
- (float)computeSmilePercentage;
- (float)computeSmoothedGridROI:(id)arg1 nextStat:(id)arg2;
- (void)dealloc;
- (void)flagAsGarbage;
- (struct GridROI_t)getSharpnessAndBlurLimits;
- (id)initWithIdentifier:(id)arg1;
- (void)performRegistration:(id)arg1 deltaCol:(float *)arg2 deltaRow:(float *)arg3;
- (int)setAEMatrix:(id)arg1;
- (void)updateROI:(struct GridROI_t)arg1;
- (void)writeGridROI:(id)arg1;

@end

