//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/__NSCFType.h>

__attribute__((visibility("hidden")))
@interface __NSCFNumber : __NSCFType
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (long long)_cfNumberType;
- (unsigned long long)_cfTypeID;
- (unsigned char)_getValue:(void *)arg1 forType:(long long)arg2;
- (BOOL)_isDeallocating;
- (long long)_reverseCompare:(id)arg1;
- (BOOL)_tryRetain;
- (BOOL)boolValue;
- (BOOL)charValue;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (double)doubleValue;
- (void)finalize;
- (float)floatValue;
- (void)getValue:(void *)arg1;
- (unsigned long long)hash;
- (int)intValue;
- (long long)integerValue;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNumber:(id)arg1;
- (BOOL)isNSNumber__;
- (long long)longLongValue;
- (long long)longValue;
- (const char *)objCType;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (short)shortValue;
- (id)stringValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

@end

