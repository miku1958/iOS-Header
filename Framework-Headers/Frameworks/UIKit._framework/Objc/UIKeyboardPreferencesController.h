//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UIKeyboardPreferencesController : NSObject
{
}

@property long long handBias;

+ (void)handleSpecificHardwareKeyboard;
+ (id)sharedPreferencesController;
- (BOOL)boolForKey:(int)arg1;
- (BOOL)costlyCapture;
- (void)dealloc;
- (id)init;
- (BOOL)isKeyLockedDown:(int)arg1;
- (void)preferencesControllerChanged:(id)arg1;
- (void)releaseDontSynchronizePreferences;
- (double)rivenSizeFactor:(double)arg1;
- (void)saveInputModes:(id)arg1;
- (void)setInputModeLastUsed:(id)arg1;
- (void)setLanguageAwareInputModeLastUsed:(id)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (BOOL)spaceConfirmationEnabled;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (BOOL)typologyEnabled;
- (id)valueForKey:(int)arg1;

@end
