//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _SFPerSitePreferenceDisplayInformation : NSObject
{
    NSString *_localizedSiteSpecificSettingsTitle;
    NSString *_localizedAllWebsiteSettingsTitle;
    NSString *_localizedClearAllSettingsPrompt;
    unsigned long long _displayOption;
}

@property (readonly, nonatomic) unsigned long long displayOption; // @synthesize displayOption=_displayOption;
@property (readonly, copy, nonatomic) NSString *localizedAllWebsiteSettingsTitle; // @synthesize localizedAllWebsiteSettingsTitle=_localizedAllWebsiteSettingsTitle;
@property (readonly, copy, nonatomic) NSString *localizedClearAllSettingsPrompt; // @synthesize localizedClearAllSettingsPrompt=_localizedClearAllSettingsPrompt;
@property (readonly, copy, nonatomic) NSString *localizedSiteSpecificSettingsTitle; // @synthesize localizedSiteSpecificSettingsTitle=_localizedSiteSpecificSettingsTitle;

+ (void)_buildMapIfNeeded;
+ (id)displayInformationForPerSitePreference:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithLocalizedSiteSpecificSettingsTitle:(id)arg1 localizedAllWebsiteSettingsTitle:(id)arg2 localizedClearAllSettingsPrompt:(id)arg3 displayOption:(unsigned long long)arg4;

@end
