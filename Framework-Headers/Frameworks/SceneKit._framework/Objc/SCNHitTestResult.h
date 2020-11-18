//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SCNNode;

@interface SCNHitTestResult : NSObject
{
    struct __C3DHitTestResult *_result;
}

@property (readonly, nonatomic) SCNNode *boneNode;
@property (readonly, nonatomic) long long faceIndex;
@property (readonly, nonatomic) long long geometryIndex;
@property (readonly, nonatomic) struct SCNVector3 localCoordinates;
@property (readonly, nonatomic) struct SCNVector3 localNormal;
@property (readonly, nonatomic) struct SCNMatrix4 modelTransform;
@property (readonly, nonatomic) SCNNode *node;
@property (readonly, nonatomic) MISSING_TYPE *simdLocalCoordinates;
@property (readonly, nonatomic) MISSING_TYPE *simdLocalNormal;
@property (readonly, nonatomic) CDStruct_14d5dc5e simdModelTransform;
@property (readonly, nonatomic) MISSING_TYPE *simdWorldCoordinates;
@property (readonly, nonatomic) MISSING_TYPE *simdWorldNormal;
@property (readonly, nonatomic) struct SCNVector3 worldCoordinates;
@property (readonly, nonatomic) struct SCNVector3 worldNormal;

+ (id)hitTestResultsFromHitTestResultRef:(struct __CFArray *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithResult:(struct __C3DHitTestResult *)arg1;
- (struct CGPoint)textureCoordinate;
- (struct CGPoint)textureCoordinatesWithMappingChannel:(long long)arg1;

@end
