//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLRecordChange, CPLRecordStatus, NSDate;

@interface _CPLTransientStatus : NSObject
{
    NSDate *_date;
    CPLRecordChange *_record;
    unsigned long long _generation;
}

@property (readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property (readonly, nonatomic) CPLRecordChange *record; // @synthesize record=_record;
@property (readonly, nonatomic) CPLRecordStatus *status;

- (void).cxx_destruct;
- (id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 date:(id)arg3;

@end

