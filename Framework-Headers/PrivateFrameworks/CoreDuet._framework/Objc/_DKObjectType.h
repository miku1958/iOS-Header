//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>
#import <CoreDuet/NSSecureCoding-Protocol.h>

@interface _DKObjectType : NSObject <NSSecureCoding, NSCopying>
{
    long long _typeCode;
    Class _objectClass;
}

@property (readonly, nonatomic) Class objectClass;
@property (readonly, nonatomic) long long typeCode;

+ (Class)associatedObjectClass;
+ (id)objectTypeFromClass:(Class)arg1;
+ (id)objectTypeWithName:(id)arg1;
+ (id)objectTypeWithTypeCode:(long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (long long)typeCodeFromName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeCode:(long long)arg1 objectClass:(Class)arg2;
- (BOOL)isEqual:(id)arg1;

@end

