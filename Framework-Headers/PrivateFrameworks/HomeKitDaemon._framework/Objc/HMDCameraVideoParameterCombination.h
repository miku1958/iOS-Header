//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDCameraVideoTier, HMDH264Level, HMDH264Profile;

@interface HMDCameraVideoParameterCombination : NSObject
{
    HMDH264Profile *_profile;
    HMDH264Level *_level;
    HMDCameraVideoTier *_videoTier;
}

@property (readonly, nonatomic) HMDH264Level *level; // @synthesize level=_level;
@property (readonly, nonatomic) HMDH264Profile *profile; // @synthesize profile=_profile;
@property (readonly, nonatomic) HMDCameraVideoTier *videoTier; // @synthesize videoTier=_videoTier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProfile:(id)arg1 level:(id)arg2 videoTier:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end
