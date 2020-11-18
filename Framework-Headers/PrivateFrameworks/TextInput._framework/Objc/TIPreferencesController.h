//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface TIPreferencesController : NSObject
{
    NSTimer *_synchronizePreferencesTimer;
    double _lastSynchronizePreferencesTime[5];
    BOOL isInternalInstall;
    BOOL _inhibitGlobalNotification;
}

@property (nonatomic) BOOL inhibitGlobalNotification; // @synthesize inhibitGlobalNotification=_inhibitGlobalNotification;
@property (nonatomic) BOOL isInternalInstall; // @synthesize isInternalInstall;

+ (id)sharedPreferencesController;
- (int)MCValueForManagedKey:(int)arg1;
- (BOOL)boolForKey:(int)arg1;
- (void)clearSynchronizePreferencesTimer;
- (void)dealloc;
- (id)defaultForKey:(int)arg1;
- (CDStruct_5072e809 *)domainForType:(int)arg1;
- (CDStruct_5072e809 *)domains;
- (id)init;
- (BOOL)isKeyLockedDown:(int)arg1;
- (void)managedKeyboardSettingDidChange:(id)arg1;
- (CDStruct_982099be *)preferences;
- (void)preferencesChangedCallback:(id)arg1;
- (void)setAutocorrectionEnabled:(BOOL)arg1;
- (void)setCheckSpellingEnabled:(BOOL)arg1;
- (void)setPredictionEnabled:(BOOL)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)setValue:(id)arg1 forManagedKey:(int)arg2;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (id)valueForKey:(int)arg1;
- (id)valueForManagedKey:(int)arg1;

@end
