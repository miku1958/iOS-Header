//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMetadataObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVMetadataTrackedFacesObjectInternal, NSDictionary;

@interface AVMetadataTrackedFacesObject : AVMetadataObject <NSCopying>
{
    AVMetadataTrackedFacesObjectInternal *_trackedFacesObjectInternal;
}

@property (readonly) NSDictionary *payload;

+ (id)trackedFacesWithTime:(CDStruct_1b6d18a9)arg1 faceKitDictionary:(id)arg2 input:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 faceKitDictionary:(id)arg2 input:(id)arg3;

@end
