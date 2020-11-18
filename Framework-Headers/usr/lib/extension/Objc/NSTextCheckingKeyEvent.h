//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <extension/NSCopying-Protocol.h>
#import <extension/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSTextCheckingKeyEvent : NSObject <NSCopying, NSSecureCoding>
{
    long long _layoutType;
    unsigned long long _keyboardType;
    NSString *_identifier;
    NSString *_primaryLanguage;
    unsigned long long _flags;
    double _time;
    NSString *_keys;
    NSString *_ukeys;
}

@property (readonly, copy) NSString *characters;
@property (readonly, copy) NSString *charactersIgnoringModifiers;
@property (readonly) unsigned long long flags;
@property (readonly, copy) NSString *keyboardLayoutIdentifier;
@property (readonly) long long keyboardLayoutType;
@property (readonly) unsigned long long keyboardType;
@property (readonly, copy) NSString *primaryLanguage;
@property (readonly) double timestamp;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardLayoutType:(long long)arg1 keyboardType:(unsigned long long)arg2 identifier:(id)arg3 primaryLanguage:(id)arg4 flags:(unsigned long long)arg5 timestamp:(double)arg6 characters:(id)arg7 charactersIgnoringModifiers:(id)arg8;
- (BOOL)isEqual:(id)arg1;

@end

