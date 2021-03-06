//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DOCKeyCommandRegistry : NSObject
{
    BOOL _singleCharKeyCommandsEnabled;
}

@property (getter=areSingleCharKeyCommandsEnabled) BOOL singleCharKeyCommandsEnabled; // @synthesize singleCharKeyCommandsEnabled=_singleCharKeyCommandsEnabled;

+ (id)_defaultIdentifiersAndKeyCommands;
+ (id)_inputsOfAlwaysEnabledSingleCharKeyCommands;
+ (id)_reversedDefaultIdentifiersAndKeyCommands;
+ (id)sharedInstance;
- (void)_postNotificationForKeyCommandIdentifier:(id)arg1 modifierFlags:(long long)arg2;
- (void)_registerForKeyCommandWithIdentifier:(id)arg1 viewController:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (BOOL)_shouldOfferKeyCommand:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 defaultBehavior:(BOOL)arg3;
- (id)defaultKeyCommandsByExcludingKeyCommandsWithIdentifiers:(id)arg1;
- (id)dismissingKeyCommands;
- (id)dismissingKeyCommandsWithAction:(SEL)arg1;
- (id)init;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)registerForKeyCommandWithIdentifiers:(id)arg1 viewController:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

