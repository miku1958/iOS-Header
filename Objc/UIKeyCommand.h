//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSSecureCoding-Protocol.h>

@class NSIndexSet, NSString, UIEvent, UIResponder, UIViewController;

@interface UIKeyCommand : NSObject <NSCopying, NSSecureCoding>
{
    NSIndexSet *_keyCodes;
    SEL _action;
    SEL _upAction;
    BOOL _repeatable;
    long long _buttonType;
    UIEvent *_triggeringEvent;
    UIResponder *_originatingResponder;
    NSString *_segueIdentifier;
    UIViewController *_controllerForSegue;
    NSString *_input;
    long long _modifierFlags;
    NSString *_discoverabilityTitle;
}

@property (copy, nonatomic) NSString *discoverabilityTitle; // @synthesize discoverabilityTitle=_discoverabilityTitle;
@property (readonly, nonatomic) NSString *input; // @synthesize input=_input;
@property (readonly, nonatomic) long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;

+ (id)keyCommandWithCompactInput:(id)arg1 action:(SEL)arg2 upAction:(SEL)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 upAction:(SEL)arg4;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3 discoverabilityTitle:(id)arg4;
+ (id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
+ (id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)_buttonType;
- (id)_controllerForSegue;
- (id)_initWithInput:(id)arg1 modifierFlags:(long long)arg2 keyCodes:(id)arg3 action:(SEL)arg4 upAction:(SEL)arg5 discoverabilityTitle:(id)arg6 buttonType:(long long)arg7 segueIdentifier:(id)arg8;
- (id)_keyCodes;
- (id)_nonRepeatableKeyCommand;
- (id)_segueIdentifier;
- (void)_setButtonType:(long long)arg1;
- (void)_setOriginatingResponder:(id)arg1;
- (void)_setTriggeringEvent:(id)arg1;
- (void)_setViewControllerForSegue:(id)arg1;
- (id)_triggeringEvent;
- (SEL)action;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyCommand:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)nextResponder;
- (BOOL)repeatable;
- (void)setAction:(SEL)arg1;
- (BOOL)triggerSegueIfPossible;
- (SEL)upAction;

@end
