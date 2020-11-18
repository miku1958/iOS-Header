//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSIDate : NSObject
{
    long long _int64Representation;
    long long _int64RepresentationMask;
}

@property (readonly) long long day;
@property (readonly) long long int64Representation; // @synthesize int64Representation=_int64Representation;
@property (readonly) long long int64RepresentationMask; // @synthesize int64RepresentationMask=_int64RepresentationMask;
@property (readonly) long long month;
@property (readonly) long long year;

+ (id)descriptionWithInt64Representation:(long long)arg1;
+ (id)distantFuture;
+ (id)distantPast;
- (id)dateComponents;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDateComponents:(id)arg1;
- (id)initWithInt64Representation:(long long)arg1;
- (id)initWithUniversalDate:(id)arg1 calendar:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

