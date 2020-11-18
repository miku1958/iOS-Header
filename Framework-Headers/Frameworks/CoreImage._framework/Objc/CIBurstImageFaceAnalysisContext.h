//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FCRFaceDetector, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIBurstImageFaceAnalysisContext : NSObject
{
    NSMutableDictionary *curConfig;
    NSMutableDictionary *faceIdMapping;
    NSMutableDictionary *renameMapping;
    int faceIdCounter;
    NSMutableArray *faceInfoArray;
    int numFramesSinceFullFaceCore;
    int numFramesNoFaces;
    FCRFaceDetector *faceDetector;
    NSMutableArray *faceTimestampArray;
    double latestImageTimestamp;
    int lastFaceIndex;
    BOOL forceFaceDetectionEnable;
    int _version;
    double timeBlinkDetectionDone;
    double timeFaceDetectionDone;
    double latestFaceTimestamp;
}

@property BOOL forceFaceDetectionEnable; // @synthesize forceFaceDetectionEnable;
@property double latestFaceTimestamp; // @synthesize latestFaceTimestamp;
@property double timeBlinkDetectionDone; // @synthesize timeBlinkDetectionDone;
@property double timeFaceDetectionDone; // @synthesize timeFaceDetectionDone;
@property int version; // @synthesize version=_version;

- (void)addFaceToArray:(id)arg1;
- (void)addFacesToImageStat:(id)arg1 imageSize:(struct CGSize)arg2;
- (void)adjustFaceIdsForImageStat:(id)arg1;
- (void)calcFaceScores:(id)arg1;
- (struct CGRect)calculateFaceCoreROI:(id)arg1 imageStat:(id)arg2 needFaceCore:(BOOL *)arg3;
- (void)calculateFaceFocusInImage:(id)arg1 imageStat:(id)arg2;
- (void)dealloc;
- (void)dumpFaceInfoArray;
- (void)extractFacesFromMetadata:(id)arg1;
- (int)findFacesInImage:(id)arg1 imageStat:(id)arg2;
- (id)findOverlappingFaceStat:(struct CGRect)arg1 imageStat:(id)arg2;
- (id)initWithVersion:(id)arg1;
- (struct CGRect)padRoiRect:(struct CGRect)arg1 paddingX:(float)arg2 paddingY:(float)arg3;
- (void)setupFaceDetector;

@end

