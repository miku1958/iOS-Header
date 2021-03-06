//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatarPose, NSArray, NSString;

@interface AVTAvatarAttributeEditorSectionOptions : NSObject
{
    NSString *_framingMode;
    AVTAvatarPose *_poseOverride;
    NSArray *_presetOverrides;
    unsigned long long _displayMode;
}

@property (readonly, nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property (readonly, copy, nonatomic) NSString *framingMode; // @synthesize framingMode=_framingMode;
@property (readonly, copy, nonatomic) AVTAvatarPose *poseOverride; // @synthesize poseOverride=_poseOverride;
@property (readonly, copy, nonatomic) NSArray *presetOverrides; // @synthesize presetOverrides=_presetOverrides;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFramingMode:(id)arg1 poseOverride:(id)arg2 presetOverrides:(id)arg3 displayMode:(unsigned long long)arg4;
- (id)stringForDisplayMode;

@end

