//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRoutine/RTEnumerationOptions.h>

#import <CoreRoutine/NSCopying-Protocol.h>

@class CLLocation, NSDateInterval;

@interface RTStoredLocationEnumerationOptions : RTEnumerationOptions <NSCopying>
{
    NSDateInterval *_dateInterval;
    double _horizontalAccuracy;
    unsigned long long _batchSize;
    CLLocation *_boundingBoxLocation;
}

@property (nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property (copy, nonatomic) CLLocation *boundingBoxLocation; // @synthesize boundingBoxLocation=_boundingBoxLocation;
@property (copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property (nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3;
- (id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3 boundingBoxLocation:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOptions:(id)arg1;
- (CDUnknownBlockType)processingBlock;

@end
