//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXShotflowFaceDetection : NSObject
{
    float _area;
    BOOL _hasPose;
    BOOL _hasLabel;
    float _confidence;
    int _mergesCount;
    int _scale;
    float _rotationAngle;
    float _yawAngle;
    int _label;
    NSString *_labelName;
    struct CGRect _box;
    struct CGRect _defaultBox;
}

@property (nonatomic) struct CGRect box; // @synthesize box=_box;
@property (readonly, nonatomic) struct CGPoint boxCenter;
@property (nonatomic) float confidence; // @synthesize confidence=_confidence;
@property (nonatomic) struct CGRect defaultBox; // @synthesize defaultBox=_defaultBox;
@property (readonly, nonatomic) float distanceToDefaultBox;
@property (nonatomic) BOOL hasLabel; // @synthesize hasLabel=_hasLabel;
@property (nonatomic) BOOL hasPose; // @synthesize hasPose=_hasPose;
@property (nonatomic) int label; // @synthesize label=_label;
@property (strong, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property (nonatomic) int mergesCount; // @synthesize mergesCount=_mergesCount;
@property (nonatomic) float rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property (nonatomic) int scale; // @synthesize scale=_scale;
@property (readonly, nonatomic) float smartDistance;
@property (nonatomic) float yawAngle; // @synthesize yawAngle=_yawAngle;

- (void).cxx_destruct;
- (float)iOa:(id)arg1;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 hasPose:(BOOL)arg7;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 hasPose:(BOOL)arg7 hasLabel:(BOOL)arg8 label:(int)arg9;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 hasPose:(BOOL)arg7 hasLabel:(BOOL)arg8 label:(int)arg9 labelName:(id)arg10;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7 hasPose:(BOOL)arg8;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7 hasPose:(BOOL)arg8 hasLabel:(BOOL)arg9 label:(int)arg10;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7 hasPose:(BOOL)arg8 hasLabel:(BOOL)arg9 label:(int)arg10 labelName:(id)arg11;
- (BOOL)isOverlappingLowMergeDet:(id)arg1 withOverlapThreshold:(float)arg2 withMergeCountDelta:(int)arg3;
- (BOOL)isOverlappingSmallFace:(id)arg1 withOverlapThreshold:(float)arg2 withSizeRatio:(float)arg3;
- (float)overlap:(id)arg1;

@end

