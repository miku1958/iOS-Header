//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UISettings.h>

@interface SBFWallpaperSettings : _UISettings
{
    BOOL _replaceBlurs;
    long long _blurReplacementMode;
}

@property (nonatomic) long long blurReplacementMode; // @synthesize blurReplacementMode=_blurReplacementMode;
@property (nonatomic) BOOL replaceBlurs; // @synthesize replaceBlurs=_replaceBlurs;

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

