//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPSWorkloadStatistics : NSObject
{
    double _float32Ops;
    double _float16Ops;
    double _integerOps;
    double _deviceMemoryBytesRead;
    double _deviceMemoryBytesWrite;
    double _threadgroupMemoryBytesRead;
    double _threadgroupMemoryBytesWrite;
}

@property (nonatomic) double deviceMemoryBytesRead; // @synthesize deviceMemoryBytesRead=_deviceMemoryBytesRead;
@property (nonatomic) double deviceMemoryBytesWrite; // @synthesize deviceMemoryBytesWrite=_deviceMemoryBytesWrite;
@property (nonatomic) double float16Ops; // @synthesize float16Ops=_float16Ops;
@property (nonatomic) double float32Ops; // @synthesize float32Ops=_float32Ops;
@property (nonatomic) double integerOps; // @synthesize integerOps=_integerOps;
@property (nonatomic) double threadgroupMemoryBytesRead; // @synthesize threadgroupMemoryBytesRead=_threadgroupMemoryBytesRead;
@property (nonatomic) double threadgroupMemoryBytesWrite; // @synthesize threadgroupMemoryBytesWrite=_threadgroupMemoryBytesWrite;

+ (id)new;
- (void)dealloc;
- (id)init;

@end

