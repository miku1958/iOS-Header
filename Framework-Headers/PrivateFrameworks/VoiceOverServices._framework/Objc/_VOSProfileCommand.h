//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceOverServices/NSSecureCoding-Protocol.h>

@class NSMutableSet, VOSCommand, _VOSProfileMode;

@interface _VOSProfileCommand : NSObject <NSSecureCoding>
{
    VOSCommand *_command;
    NSMutableSet *_gestures;
    NSMutableSet *_keyboardShortcuts;
    NSMutableSet *_quickNavShortcuts;
    NSMutableSet *_slaveCommands;
    _VOSProfileMode *_mode;
}

@property (strong, nonatomic) VOSCommand *command; // @synthesize command=_command;
@property (strong, nonatomic) NSMutableSet *gestures; // @synthesize gestures=_gestures;
@property (readonly, nonatomic) BOOL hasSlaveCommands;
@property (strong, nonatomic) NSMutableSet *keyboardShortcuts; // @synthesize keyboardShortcuts=_keyboardShortcuts;
@property (weak, nonatomic) _VOSProfileMode *mode; // @synthesize mode=_mode;
@property (strong, nonatomic) NSMutableSet *quickNavShortcuts; // @synthesize quickNavShortcuts=_quickNavShortcuts;
@property (strong, nonatomic) NSMutableSet *slaveCommands; // @synthesize slaveCommands=_slaveCommands;

+ (id)profileCommandWithCommand:(id)arg1;
+ (id)profileCommandWithStringValue:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithCommand:(id)arg1 gestures:(id)arg2 keyboardShortcuts:(id)arg3 quickNavShortcuts:(id)arg4 slaveCommands:(id)arg5;
- (void)addGesture:(id)arg1;
- (void)addKeyboardShortcut:(id)arg1;
- (void)addQuickNavShortcut:(id)arg1;
- (void)addSlaveCommand:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)profileGestureForGesture:(id)arg1;
- (id)profileKeyboardShortcutForKeyChord:(id)arg1;
- (id)profileQuickNavShortcutForKeyChord:(id)arg1;
- (void)removeGesture:(id)arg1;
- (void)removeKeyboardShortcut:(id)arg1;
- (void)removeQuickNavShortcut:(id)arg1;
- (void)removeSlaveCommand:(id)arg1;
- (id)slaveCommandsForPressCount:(long long)arg1;

@end
