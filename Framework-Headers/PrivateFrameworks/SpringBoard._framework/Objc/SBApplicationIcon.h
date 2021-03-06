//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBLeafIcon.h>

@class SBApplication;

@interface SBApplicationIcon : SBLeafIcon
{
    SBApplication *_application;
}

+ (BOOL)canGenerateIconsInBackground;
- (void).cxx_destruct;
- (void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)arg1;
- (id)application;
- (id)automationID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)iTunesCategoriesOrderedByRelevancy;
- (id)initWithApplication:(id)arg1;
- (BOOL)isApplicationIcon;
- (BOOL)isEqual:(id)arg1;
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;
- (void)possibleUserTapDidCancel;
- (void)setBadge:(id)arg1;
- (id)tags;

@end

