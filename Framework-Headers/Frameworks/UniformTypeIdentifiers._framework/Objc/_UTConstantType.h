//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UniformTypeIdentifiers/UTType.h>

@interface _UTConstantType : UTType
{
    struct Fields _fields;
}

+ (void)_validateThisClass;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)supportsSecureCoding;
- (BOOL)_getEnclosureColor:(struct UTHardwareColor *)arg1;
- (BOOL)_isRealized;
- (id)_preferredTagOfClass:(id)arg1;
- (id)_typeRecord;
- (void)_unrealize;
- (Class)classForCoder;
- (BOOL)conformsToType:(id)arg1;
- (id)debugDescription;
- (id)identifier;
- (BOOL)isDeclared;
- (BOOL)isDynamic;
- (BOOL)isPublicType;
- (id)supertypes;
- (id)tags;

@end

