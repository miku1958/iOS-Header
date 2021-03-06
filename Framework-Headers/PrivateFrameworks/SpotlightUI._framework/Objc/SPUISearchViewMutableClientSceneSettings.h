//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIMutableApplicationSceneClientSettings.h>

#import <SpotlightUI/SPUISearchViewClientSceneSettings-Protocol.h>

@class NSString;

@interface SPUISearchViewMutableClientSceneSettings : UIMutableApplicationSceneClientSettings <SPUISearchViewClientSceneSettings>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double distanceToTopOfIcons;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int searchHeaderContextID;
@property (nonatomic) unsigned long long searchHeaderLayerRenderID;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyDescriptionForSetting:(long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3;

@end

