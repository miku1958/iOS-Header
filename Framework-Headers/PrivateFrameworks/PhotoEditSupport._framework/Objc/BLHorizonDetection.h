//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BLHorizonDetection : NSObject
{
    char *_grayScale;
    char *_rgb;
    char *_orgEdge;
    char *_processedEdge;
    char *_bwLabelSceneMap;
    int _rows;
    int _cols;
    int _isHor;
    int _numLines;
    float _scaleFactor;
    CDStruct_74df0099 *_detectedLinePointer;
    CDStruct_defeeb22 *_detectedHorPointerH;
    float *_edgeAngle;
}

+ (void)findHorizonForImage:(id)arg1 horizonLineH:(CDStruct_defeeb22 *)arg2;
- (void)applyLineFilters;
- (void)edgeOrientationAnalysisFindModes:(char *)arg1;
- (void)extractGrayRGBData:(id)arg1;
- (void)findHorizon:(id)arg1 horizonLineH:(CDStruct_defeeb22 *)arg2;
- (void)horizonDetection;
- (void)imageStatisticalAnalysis:(unsigned int *)arg1 numCC:(int)arg2;
- (void)lineOverlapHorBW:(CDStruct_74df0099 *)arg1 numLines:(int)arg2;
- (void)preProcessEdgeAnglePDF;
- (void)preProcessEdgeCC;
- (void)preProcessEdgeCheckNB;
- (void)sceneClassification;

@end

