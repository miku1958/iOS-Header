//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricKit/MXDiagnostic.h>

@class MXCallStackTree, NSNumber, NSString;

@interface MXCrashDiagnostic : MXDiagnostic
{
    MXCallStackTree *_callStackTree;
    NSString *_terminationReason;
    NSString *_virtualMemoryRegionInfo;
    NSNumber *_exceptionType;
    NSNumber *_exceptionCode;
    NSNumber *_signal;
}

@property (readonly) MXCallStackTree *callStackTree; // @synthesize callStackTree=_callStackTree;
@property (readonly) NSNumber *exceptionCode; // @synthesize exceptionCode=_exceptionCode;
@property (readonly) NSNumber *exceptionType; // @synthesize exceptionType=_exceptionType;
@property (readonly) NSNumber *signal; // @synthesize signal=_signal;
@property (readonly) NSString *terminationReason; // @synthesize terminationReason=_terminationReason;
@property (readonly) NSString *virtualMemoryRegionInfo; // @synthesize virtualMemoryRegionInfo=_virtualMemoryRegionInfo;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 terminationReason:(id)arg3 applicationSpecificInfo:(id)arg4 virtualMemoryRegionInfo:(id)arg5 exceptionType:(id)arg6 exceptionCode:(id)arg7 signal:(id)arg8 stackTrace:(id)arg9;
- (id)toDictionary;

@end

