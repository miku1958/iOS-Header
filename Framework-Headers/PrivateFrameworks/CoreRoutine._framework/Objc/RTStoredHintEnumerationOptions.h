//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRoutine/RTEnumerationOptions.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSDateInterval, NSNumber, RTLocation;

@interface RTStoredHintEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding>
{
    unsigned long long _batchSize;
    BOOL _ascending;
    RTLocation *_referenceLocation;
    NSNumber *_sourceFilter;
    NSDateInterval *_dateInterval;
    unsigned long long _limit;
}

@property (readonly, nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property (readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property (readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property (readonly, nonatomic) RTLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
@property (readonly, nonatomic) NSNumber *sourceFilter; // @synthesize sourceFilter=_sourceFilter;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferenceLocation:(id)arg1 ascending:(BOOL)arg2 dateInterval:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (id)initWithReferenceLocation:(id)arg1 sourceFilter:(id)arg2 ascending:(BOOL)arg3 dateInterval:(id)arg4 limit:(unsigned long long)arg5 batchSize:(unsigned long long)arg6;
- (BOOL)isEqual:(id)arg1;

@end

