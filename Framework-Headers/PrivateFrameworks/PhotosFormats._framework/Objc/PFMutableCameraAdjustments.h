//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosFormats/PFCameraAdjustments.h>

@class AVApplePortraitMetadata, NSString;

@interface PFMutableCameraAdjustments : PFCameraAdjustments
{
}

@property (nonatomic) struct CGRect cropRect; // @dynamic cropRect;
@property (nonatomic, getter=isDepthEnabled) BOOL depthEnabled; // @dynamic depthEnabled;
@property (copy, nonatomic) NSString *effectFilterName; // @dynamic effectFilterName;
@property (copy, nonatomic) NSString *portraitEffectFilterName; // @dynamic portraitEffectFilterName;
@property (strong, nonatomic) AVApplePortraitMetadata *portraitMetadata; // @dynamic portraitMetadata;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
