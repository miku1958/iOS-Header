//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValue.h>

@interface CMTimeMappingAsValue : NSValue
{
    CDStruct_82206317 _timeMapping;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTimeMapping:(CDStruct_82206317)arg1;
- (CDStruct_82206317)CMTimeMappingValue;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(void *)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToValue:(id)arg1;
- (const char *)objCType;

@end
