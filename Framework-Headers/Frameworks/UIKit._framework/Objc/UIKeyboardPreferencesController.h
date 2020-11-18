//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol TIPreferencesControllerActions;

@interface UIKeyboardPreferencesController : NSObject
{
}

@property long long handBias;
@property (readonly, nonatomic) UIKeyboardPreferencesController<TIPreferencesControllerActions> *preferencesActions;

+ (id)sharedPreferencesController;
- (void)_configurePreferences;
- (BOOL)allEnabledInputModesAreValid;
- (BOOL)boolForKey:(int)arg1;
- (BOOL)boolForPreferenceKey:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (BOOL)isPreferenceKeyLockedDown:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)preferencesControllerChanged:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (double)rivenSizeFactor:(double)arg1;
- (void)saveInputModes:(id)arg1;
- (void)setLanguageAwareInputModeLastUsed:(id)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (BOOL)spaceConfirmationEnabled;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (BOOL)typologyEnabled;
- (id)valueForKey:(int)arg1;
- (id)valueForPreferenceKey:(id)arg1;

@end

