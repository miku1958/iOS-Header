//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UISettings.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardUISettings : _UISettings
{
    int _lastVolume;
    BOOL _nextPage;
    BOOL _didShowHUD;
}

+ (BOOL)enabled;
+ (void)hideViaNotification;
+ (void)loadSettings;
+ (id)sharedInstance;
- (BOOL)_isShowingHUD;
- (id)_sharedHUD;
- (void)cancel;
- (void)hide;
- (id)initWithDefaultValues;
- (void)next;
- (void)pressRingerButton;
- (void)previous;
- (void)saveSettings;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)settingsHUDConfiguration;
- (void)show;
- (void)show:(BOOL)arg1;
- (id)valueForKey:(id)arg1;

@end

