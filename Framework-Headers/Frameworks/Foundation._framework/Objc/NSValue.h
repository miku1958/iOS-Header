//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSValue : NSObject <NSCopying, NSSecureCoding>
{
}

@property (readonly) const char *objCType;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)value:(const void *)arg1 withObjCType:(const char *)arg2;
+ (id)valueWithBytes:(const void *)arg1 objCType:(const char *)arg2;
+ (id)valueWithEdgeInsets:(struct NSEdgeInsets)arg1;
+ (id)valueWithNonretainedObject:(id)arg1;
+ (id)valueWithPoint:(struct CGPoint)arg1;
+ (id)valueWithPointer:(const void *)arg1;
+ (id)valueWithRange:(struct _NSRange)arg1;
+ (id)valueWithRect:(struct CGRect)arg1;
+ (id)valueWithSize:(struct CGSize)arg1;
+ (id)valueWithWeakObject:(id)arg1;
- (BOOL)_matchType:(const char *)arg1 size:(unsigned long long)arg2;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (struct NSEdgeInsets)edgeInsetsValue;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(void *)arg1;
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToValue:(id)arg1;
- (BOOL)isNSValue__;
- (id)nonretainedObjectValue;
- (struct CGPoint)pointValue;
- (void *)pointerValue;
- (struct _NSRange)rangeValue;
- (struct CGRect)rectValue;
- (id)replacementObjectForPortCoder:(id)arg1;
- (struct CGSize)sizeValue;
- (id)weakObjectValue;

@end

