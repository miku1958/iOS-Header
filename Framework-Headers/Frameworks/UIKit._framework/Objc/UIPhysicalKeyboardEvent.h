//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPressesEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIPhysicalKeyboardEvent : UIPressesEvent
{
    BOOL __externalEvent;
    int _inputFlags;
    NSString *_modifiedInput;
    NSString *_unmodifiedInput;
    NSString *_shiftModifiedInput;
    NSString *_commandModifiedInput;
    NSString *_markedInput;
    long long _modifierFlags;
    NSString *_privateInput;
    NSString *_hint;
}

@property (strong, nonatomic) NSString *_commandModifiedInput; // @synthesize _commandModifiedInput;
@property (nonatomic, getter=_isExternalEvent) BOOL _externalEvent; // @synthesize _externalEvent=__externalEvent;
@property (readonly, nonatomic) long long _gsModifierFlags;
@property (strong, nonatomic) NSString *_hint; // @synthesize _hint;
@property (nonatomic) int _inputFlags; // @synthesize _inputFlags;
@property (readonly, nonatomic) BOOL _isGlobeKey;
@property (readonly, nonatomic) BOOL _isKeyDown;
@property (readonly, nonatomic) long long _keyCode;
@property (strong, nonatomic) NSString *_markedInput; // @synthesize _markedInput;
@property (strong, nonatomic) NSString *_modifiedInput; // @synthesize _modifiedInput;
@property (nonatomic) long long _modifierFlags; // @synthesize _modifierFlags;
@property (strong, nonatomic) NSString *_privateInput; // @synthesize _privateInput;
@property (strong, nonatomic) NSString *_shiftModifiedInput; // @synthesize _shiftModifiedInput;
@property (strong, nonatomic) NSString *_unmodifiedInput; // @synthesize _unmodifiedInput;

+ (id)_eventWithInput:(id)arg1 inputFlags:(int)arg2;
- (void).cxx_destruct;
- (id)_cloneEvent;
- (BOOL)_matchesKeyCommand:(id)arg1;
- (void)_privatizeInput;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1 keyboard:(struct __GSKeyboard *)arg2;
- (BOOL)isEqual:(id)arg1;
- (long long)type;

@end

