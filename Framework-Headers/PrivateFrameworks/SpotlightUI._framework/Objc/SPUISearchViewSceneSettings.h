//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightUI/SPUILegibilitySceneSettings.h>

#import <SpotlightUI/SPUISearchViewSceneSettings-Protocol.h>

@class NSString;

@interface SPUISearchViewSceneSettings : SPUILegibilitySceneSettings <SPUISearchViewSceneSettings>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long presentationIntent;
@property (readonly, nonatomic) unsigned long long presentationSource;
@property (readonly, nonatomic) double revealProgress;
@property (readonly) Class superclass;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end

