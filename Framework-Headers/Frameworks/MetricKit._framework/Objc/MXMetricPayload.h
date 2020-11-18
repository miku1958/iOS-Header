//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricKit/NSSecureCoding-Protocol.h>

@class MXAppLaunchMetric, MXAppResponsivenessMetric, MXAppRunTimeMetric, MXCPUMetric, MXCellularConditionMetric, MXDiskIOMetric, MXDisplayMetric, MXGPUMetric, MXLocationActivityMetric, MXMemoryMetric, MXMetaData, MXNetworkTransferMetric, NSArray, NSDate, NSString;

@interface MXMetricPayload : NSObject <NSSecureCoding>
{
    BOOL _includesMultipleApplicationVersions;
    NSString *_latestApplicationVersion;
    NSDate *_timeStampBegin;
    NSDate *_timeStampEnd;
    MXCPUMetric *_cpuMetrics;
    MXGPUMetric *_gpuMetrics;
    MXCellularConditionMetric *_cellularConditionMetrics;
    MXAppRunTimeMetric *_applicationTimeMetrics;
    MXLocationActivityMetric *_locationActivityMetrics;
    MXNetworkTransferMetric *_networkTransferMetrics;
    MXAppLaunchMetric *_applicationLaunchMetrics;
    MXAppResponsivenessMetric *_applicationResponsivenessMetrics;
    MXDiskIOMetric *_diskIOMetrics;
    MXMemoryMetric *_memoryMetrics;
    MXDisplayMetric *_displayMetrics;
    NSArray *_signpostMetrics;
    MXMetaData *_metaData;
}

@property (strong) MXAppLaunchMetric *applicationLaunchMetrics; // @synthesize applicationLaunchMetrics=_applicationLaunchMetrics;
@property (strong) MXAppResponsivenessMetric *applicationResponsivenessMetrics; // @synthesize applicationResponsivenessMetrics=_applicationResponsivenessMetrics;
@property (strong) MXAppRunTimeMetric *applicationTimeMetrics; // @synthesize applicationTimeMetrics=_applicationTimeMetrics;
@property (strong) MXCellularConditionMetric *cellularConditionMetrics; // @synthesize cellularConditionMetrics=_cellularConditionMetrics;
@property (strong) MXCPUMetric *cpuMetrics; // @synthesize cpuMetrics=_cpuMetrics;
@property (strong) MXDiskIOMetric *diskIOMetrics; // @synthesize diskIOMetrics=_diskIOMetrics;
@property (strong) MXDisplayMetric *displayMetrics; // @synthesize displayMetrics=_displayMetrics;
@property (strong) MXGPUMetric *gpuMetrics; // @synthesize gpuMetrics=_gpuMetrics;
@property (readonly) BOOL includesMultipleApplicationVersions; // @synthesize includesMultipleApplicationVersions=_includesMultipleApplicationVersions;
@property (readonly) NSString *latestApplicationVersion; // @synthesize latestApplicationVersion=_latestApplicationVersion;
@property (strong) MXLocationActivityMetric *locationActivityMetrics; // @synthesize locationActivityMetrics=_locationActivityMetrics;
@property (strong) MXMemoryMetric *memoryMetrics; // @synthesize memoryMetrics=_memoryMetrics;
@property (strong) MXMetaData *metaData; // @synthesize metaData=_metaData;
@property (strong) MXNetworkTransferMetric *networkTransferMetrics; // @synthesize networkTransferMetrics=_networkTransferMetrics;
@property (strong) NSArray *signpostMetrics; // @synthesize signpostMetrics=_signpostMetrics;
@property (readonly) NSDate *timeStampBegin; // @synthesize timeStampBegin=_timeStampBegin;
@property (readonly) NSDate *timeStampEnd; // @synthesize timeStampEnd=_timeStampEnd;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)DictionaryRepresentation;
- (id)JSONRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppVersion:(id)arg1 withMutipleAppVersions:(BOOL)arg2 withTimeStampBegin:(id)arg3 withTimeStampEnd:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayloadData:(id)arg1 withMutipleAppVersions:(BOOL)arg2 withTimeStampBegin:(id)arg3 withTimeStampEnd:(id)arg4 withMetaData:(id)arg5 withMetrics:(id)arg6;
- (id)toDictionary;

@end
