//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNumber.h>

@interface ICSPredefinedValue : NSNumber
{
    long long _value;
}

+ (id)numberWithLong:(long long)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(void *)arg1;
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLong:(long long)arg1;
- (long long)longValue;
- (const char *)objCType;

@end
