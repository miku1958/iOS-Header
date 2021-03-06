//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCompanionApp.h>

@class NSString, UIImage;

@interface NTKCompanion1stPartyApp : NTKCompanionApp
{
    UIImage *_icon;
    unsigned long long _complicationType;
    NSString *_iconName;
}

@property (nonatomic) unsigned long long complicationType; // @synthesize complicationType=_complicationType;
@property (copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;

+ (id)_allApps;
+ (id)allAppsForDevice:(id)arg1;
+ (id)appForBundleIdentifier:(id)arg1;
+ (id)companionAppWithAppInfo:(struct _NTKCompanion1stPartyInfo)arg1;
+ (BOOL)complicationType:(unsigned long long)arg1 mapsToRemovedSystemAppOnDevice:(id)arg2;
- (void).cxx_destruct;
- (id)complication;
- (id)icon;
- (id)initWithAppInfo:(struct _NTKCompanion1stPartyInfo)arg1;
- (void)setIcon:(id)arg1;

@end

