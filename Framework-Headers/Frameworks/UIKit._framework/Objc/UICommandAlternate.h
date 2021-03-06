//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIMenuLeafAlternate-Protocol.h>

@class NSString;

@interface UICommandAlternate : NSObject <_UIMenuLeafAlternate, NSCopying, NSSecureCoding>
{
    NSString *_title;
    SEL _action;
    long long _modifierFlags;
}

@property (readonly, nonatomic) SEL action; // @synthesize action=_action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)alternateWithTitle:(id)arg1 action:(SEL)arg2 modifierFlags:(long long)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)_leafKeyModifierFlags;
- (void)_performWithTarget:(id)arg1;
- (id)_resolvedTargetFromFirstTarget:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModifierFlags:(long long)arg1;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2 modifierFlags:(long long)arg3;
- (BOOL)isEqual:(id)arg1;

@end

