//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetViewer/ASVHitTestResult.h>

@class MISSING_TYPE, NSUUID;

@interface ASVRealHitTestResult : ASVHitTestResult
{
    NSUUID *_planeIdentifier;
    long long _alignment;
    MISSING_TYPE *_localPosition;
    CDStruct_14d5dc5e _worldTransform;
}

@property (readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property (readonly, nonatomic) float distanceFromFeaturePoint;
@property (readonly, nonatomic) MISSING_TYPE *localPosition; // @synthesize localPosition=_localPosition;
@property (readonly, nonatomic) NSUUID *planeIdentifier; // @synthesize planeIdentifier=_planeIdentifier;
@property (readonly, nonatomic) CDStruct_14d5dc5e worldTransform; // @synthesize worldTransform=_worldTransform;

- (void).cxx_destruct;
- (id)initWithHitTestResult:(id)arg1 imagePoint:assetPosition:cameraPosition: /* Error: Ran out of types for this method. */;
- (id)initWithType:(long long)arg1 worldPosition:(CDStruct_14d5dc5e)arg2 worldTransform:(id)arg3 localPosition:(long long)arg4 imagePoint:assetPosition:cameraPosition:planeIdentifier:planeAlignment: /* Error: Ran out of types for this method. */;

@end
