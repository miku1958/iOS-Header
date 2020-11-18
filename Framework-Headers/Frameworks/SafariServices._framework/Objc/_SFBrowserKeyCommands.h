//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SFBrowserKeyCommands : NSObject
{
}

+ (BOOL)_boolForSelectorString:(id)arg1 modifierString:(id)arg2 bundle:(id)arg3 table:(id)arg4;
+ (id)_keyForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3;
+ (id)_localizedKeyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 webInterceptable:(BOOL)arg3;
+ (long long)_modifierFlagsForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3;
+ (id)_placeholderKeyCommandForCommand:(id)arg1;
+ (void)_setUpKeyCommandsIfNecessaryForPersona:(unsigned long long)arg1;
+ (id)browserKeyCommandsForPersona:(unsigned long long)arg1 shouldAddEditingCommands:(BOOL)arg2;
+ (id)localizedKeyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 bundle:(id)arg3 table:(id)arg4 webInterceptable:(BOOL)arg5;
+ (id)unlocalizedKeyCommandWithSelector:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(BOOL)arg5;
+ (id)unlocalizedKeyCommandWithSelector:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 webInterceptable:(BOOL)arg4;

@end
