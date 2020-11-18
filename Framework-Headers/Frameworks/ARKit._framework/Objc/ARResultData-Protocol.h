//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARData-Protocol.h>

@class ARLightEstimate, ARPointCloud, NSArray, NSMutableArray;

@protocol ARResultData <ARData>

@optional
- (NSArray *)anchorsForCameraWithTransform:(CDStruct_14d5dc5e)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2 existingAnchors:(NSArray *)arg3 anchorsToRemove:(NSMutableArray *)arg4;
- (CDStruct_14d5dc5e)cameraTransform;
- (ARPointCloud *)featurePoints;
- (ARLightEstimate *)lightEstimate;
- (CDStruct_fdd7a678)trackingState;
- (CDStruct_14d5dc5e)worldOriginTransform;
@end

