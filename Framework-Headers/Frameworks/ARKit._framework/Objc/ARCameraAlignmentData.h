//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>

@class NSString;

@interface ARCameraAlignmentData : NSObject <ARResultData>
{
    CDStruct_14d5dc5e _cameraTransform;
}

@property (nonatomic) CDStruct_14d5dc5e cameraTransform; // @synthesize cameraTransform=_cameraTransform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;

@end

