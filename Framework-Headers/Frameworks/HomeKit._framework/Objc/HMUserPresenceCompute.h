//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMUserPresenceCompute : NSObject
{
    unsigned long long _value;
}

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) unsigned long long value; // @synthesize value=_value;

+ (id)computeWithCoder:(id)arg1;
+ (id)computeWithDict:(id)arg1;
+ (id)computeWithMessage:(id)arg1;
+ (id)computeWithNumber:(id)arg1;
+ (id)computeWithValue:(unsigned long long)arg1;
- (void)addToCoder:(id)arg1;
- (void)addToPayload:(id)arg1;
- (id)description;
- (id)initWithNumber:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

