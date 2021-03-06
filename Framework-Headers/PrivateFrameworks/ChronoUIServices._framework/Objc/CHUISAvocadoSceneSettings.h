//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplicationSceneSettings.h>

@class CHSWidget, CHSWidgetMetrics, NSString;

@interface CHUISAvocadoSceneSettings : UIApplicationSceneSettings
{
    BOOL _visibleEntryShouldSnapshot;
}

@property (readonly, nonatomic, getter=areAnimationsDisabled) BOOL animationsDisabled;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic, getter=isPrivateModeEnabled) BOOL privateModeEnabled;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot; // @synthesize visibleEntryShouldSnapshot=_visibleEntryShouldSnapshot;
@property (readonly, nonatomic, getter=isVisiblySettled) BOOL visiblySettled;
@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end

