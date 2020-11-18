//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/__NSCFType.h>

#import <CoreFoundation/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface __NSCFCharacterSet : __NSCFType <NSSecureCoding>
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)addCharactersInRange:(struct _NSRange)arg1;
- (void)addCharactersInString:(id)arg1;
- (id)bitmapRepresentation;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)invert;
- (id)invertedSet;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (BOOL)longCharacterIsMember:(unsigned int)arg1;
- (void)makeCharacterSetCompact;
- (void)makeCharacterSetFast;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (oneway void)release;
- (void)removeCharactersInRange:(struct _NSRange)arg1;
- (void)removeCharactersInString:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;

@end

