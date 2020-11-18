//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSError, NSNumber, NSString;

@interface HKHealthRecordsIngestionOutcome : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _taskSuccess;
    NSNumber *_taskRuntime;
    NSError *_taskError;
    NSArray *_perAccountOutcomes;
    NSString *_analyticsString;
}

@property (readonly, copy, nonatomic) NSString *analyticsString; // @synthesize analyticsString=_analyticsString;
@property (readonly, copy, nonatomic) NSArray *perAccountOutcomes; // @synthesize perAccountOutcomes=_perAccountOutcomes;
@property (readonly, copy, nonatomic) NSError *taskError; // @synthesize taskError=_taskError;
@property (readonly, copy, nonatomic) NSNumber *taskRuntime; // @synthesize taskRuntime=_taskRuntime;
@property (readonly, nonatomic) BOOL taskSuccess; // @synthesize taskSuccess=_taskSuccess;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskSuccess:(BOOL)arg1 taskError:(id)arg2 taskRuntime:(double)arg3 perAccountOutcomes:(id)arg4 analyticsString:(id)arg5;
- (BOOL)isEqual:(id)arg1;

@end
