//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSceneSettings.h>

@interface FBSMutableSceneSettings : FBSSceneSettings
{
}

@property (nonatomic, getter=isBackgrounded) BOOL backgrounded; // @dynamic backgrounded;
@property (nonatomic, getter=isForeground) BOOL foreground; // @dynamic foreground;
@property (nonatomic) struct CGRect frame; // @dynamic frame;
@property (nonatomic) long long interfaceOrientation; // @dynamic interfaceOrientation;
@property (nonatomic) long long interruptionPolicy; // @dynamic interruptionPolicy;
@property (nonatomic) double level; // @dynamic level;

+ (BOOL)_isMutable;
- (void)_setDisplayConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)ignoreOcclusionReasons;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)otherSettings;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setOccluded:(BOOL)arg1;
- (id)transientLocalSettings;

@end

