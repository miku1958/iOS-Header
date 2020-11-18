//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VNFaceObservation;

@interface VCPFace : NSObject
{
    BOOL _leftEyeClosed;
    BOOL _rightEyeClosed;
    BOOL _smile;
    int _trackID;
    float _confidence;
    float _faceQuality;
    long long _yaw;
    VNFaceObservation *_observation;
    struct CGRect _bounds;
}

@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property float confidence; // @synthesize confidence=_confidence;
@property float faceQuality; // @synthesize faceQuality=_faceQuality;
@property BOOL leftEyeClosed; // @synthesize leftEyeClosed=_leftEyeClosed;
@property (strong) VNFaceObservation *observation; // @synthesize observation=_observation;
@property BOOL rightEyeClosed; // @synthesize rightEyeClosed=_rightEyeClosed;
@property BOOL smile; // @synthesize smile=_smile;
@property int trackID; // @synthesize trackID=_trackID;
@property long long yaw; // @synthesize yaw=_yaw;

- (void).cxx_destruct;
- (struct CGRect)faceBounds:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct CGRect)faceBoundsWithTransform:(unsigned long long)arg1 height:(unsigned long long)arg2 transform:(struct CGAffineTransform)arg3;
- (unsigned long long)flagsForOrientation:(BOOL)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)init;

@end
