//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKWidgetNode.h>

@class SCNCapsule;

@interface OKWidgetCapsuleNode : OKWidgetNode
{
    SCNCapsule *_capsule;
}

+ (id)supportedSettings;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)initWithWidget:(id)arg1;
- (void)setSettingCapRadius:(double)arg1;
- (void)setSettingCapSegmentCount:(long long)arg1;
- (void)setSettingHeight:(double)arg1;
- (void)setSettingHeightSegmentCount:(long long)arg1;
- (void)setSettingRadialSegmentCount:(long long)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (double)settingCapRadius;
- (long long)settingCapSegmentCount;
- (double)settingHeight;
- (long long)settingHeightSegmentCount;
- (id)settingObjectForKey:(id)arg1;
- (long long)settingRadialSegmentCount;

@end

