//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/PSSettingsBoolDetail-Protocol.h>

@class NSString;

@interface PSWiFiSettingsDetail : NSObject <PSSettingsBoolDetail>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)iconImage;
+ (BOOL)isEnabled;
+ (id)preferencesURL;
+ (void)setEnabled:(BOOL)arg1;

@end

