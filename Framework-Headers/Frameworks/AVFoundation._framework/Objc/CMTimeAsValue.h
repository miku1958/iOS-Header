//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface CMTimeAsValue : NSValue
{
    CDStruct_1b6d18a9 _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)CMTimeValue;
- (BOOL)boolValue;
- (BOOL)charValue;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (void)getValue:(void *)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (int)intValue;
- (long long)integerValue;
- (BOOL)isEqualToValue:(id)arg1;
- (long long)longLongValue;
- (long long)longValue;
- (const char *)objCType;
- (short)shortValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

@end

