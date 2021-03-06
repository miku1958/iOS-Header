//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCPhysicalInputProfile.h>

@class NSArray, NSSet;

@interface GCKeyboardInput : GCPhysicalInputProfile
{
    NSArray *_keys;
    NSSet *_allCodes;
    BOOL _isActive;
    int _numberOfKeysPressed;
    CDUnknownBlockType _keyChangedHandler;
}

@property (readonly, nonatomic, getter=isAnyKeyPressed) BOOL anyKeyPressed;
@property (copy, nonatomic) CDUnknownBlockType keyChangedHandler; // @synthesize keyChangedHandler=_keyChangedHandler;

- (void).cxx_destruct;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (id)buttonForKeyCode:(long long)arg1;
- (void)commonInit;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (id)handlerQueue;
- (BOOL)hasButton:(long long)arg1;
- (id)init;
- (id)initWithController:(id)arg1;
- (id)name;
- (id)productCategory;
- (id)setElementValuesFromKeyboardInput:(id)arg1;
- (void)setKeyValue:(long long)arg1 down:(BOOL)arg2;
- (void)setStateFromKeyboardInput:(id)arg1;
- (BOOL)shouldFilterInternalEvent:(struct __IOHIDEvent *)arg1;

@end

