//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatarPose, NSString;

@interface AVTStickerPoseAdjustment : NSObject
{
    long long _presetCategory;
    NSString *_presetIdentifier;
    AVTAvatarPose *_pose;
}

@property (strong, nonatomic) AVTAvatarPose *pose; // @synthesize pose=_pose;
@property (nonatomic) long long presetCategory; // @synthesize presetCategory=_presetCategory;
@property (strong, nonatomic) NSString *presetIdentifier; // @synthesize presetIdentifier=_presetIdentifier;

- (void).cxx_destruct;
- (id)poseByApplyingToPose:(id)arg1 forAvatar:(id)arg2;

@end

