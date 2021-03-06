//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilitySharedSupport/NSCopying-Protocol.h>
#import <AccessibilitySharedSupport/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSSet;

@interface AXSSKeyboardCommandMap : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_availableCommands;
    NSDictionary *_keyChordsToCommands;
    NSDictionary *_commandsToArraysOfKeyChords;
    NSDictionary *_userDefinedCommandsToKeyChords;
    NSMutableDictionary *_transientCommands;
}

@property (strong, nonatomic) NSSet *availableCommands; // @synthesize availableCommands=_availableCommands;
@property (readonly, nonatomic) NSDictionary *commandsToArraysOfKeyChords; // @synthesize commandsToArraysOfKeyChords=_commandsToArraysOfKeyChords;
@property (readonly, nonatomic) NSDictionary *keyChordsToCommands; // @synthesize keyChordsToCommands=_keyChordsToCommands;
@property (readonly, nonatomic) NSMutableDictionary *transientCommands; // @synthesize transientCommands=_transientCommands;
@property (readonly, nonatomic) NSDictionary *userDefinedCommandsToKeyChords; // @synthesize userDefinedCommandsToKeyChords=_userDefinedCommandsToKeyChords;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithCommandsToKeyChordsDictionary:(id)arg1;
- (void)_initializeDictionariesIfNeeded;
- (BOOL)_isAvailableCommand:(id)arg1;
- (BOOL)_validateCommandsToKeyChords:(id)arg1;
- (id)addCommandsForTransientKeyChords:(id)arg1;
- (id)commandForKeyChord:(id)arg1;
- (id)commandMapWithKeyChord:(id)arg1 forCommand:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCommandMap:(id)arg1;
- (id)keyChordForCommand:(id)arg1;
- (void)removeTransientKeyChordsForIdentifier:(id)arg1;

@end

