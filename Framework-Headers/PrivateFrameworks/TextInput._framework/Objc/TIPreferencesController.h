//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface TIPreferencesController : NSObject
{
    NSTimer *_synchronizePreferencesTimer;
    BOOL dontSynchronizePreferences;
    BOOL isInternalInstall;
}

@property (nonatomic) BOOL dontSynchronizePreferences; // @synthesize dontSynchronizePreferences;
@property (nonatomic) BOOL isInternalInstall; // @synthesize isInternalInstall;

+ (id)sharedPreferencesController;
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
- (void)releaseDontSynchronizePreferences;
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

