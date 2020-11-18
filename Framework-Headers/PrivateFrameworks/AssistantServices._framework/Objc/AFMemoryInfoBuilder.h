//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFMemoryInfo;

@interface AFMemoryInfoBuilder : NSObject
{
    AFMemoryInfo *_baseObject;
    unsigned long long _virtualMemorySizeInBytes;
    int _numberOfRegions;
    int _pageSizeInBytes;
    unsigned long long _residentMemorySizeInBytes;
    unsigned long long _peakResidentMemorySizeInBytes;
    unsigned long long _physicalMemoryFootprintInBytes;
    struct _builderFlags {
        unsigned int isDirty:1;
        unsigned int hasVirtualMemorySizeInBytes:1;
        unsigned int hasNumberOfRegions:1;
        unsigned int hasPageSizeInBytes:1;
        unsigned int hasResidentMemorySizeInBytes:1;
        unsigned int hasPeakResidentMemorySizeInBytes:1;
        unsigned int hasPhysicalMemoryFootprintInBytes:1;
    } _builderFlags;
}

- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)initWithBaseObject:(id)arg1;
- (id)setNumberOfRegions:(int)arg1;
- (id)setPageSizeInBytes:(int)arg1;
- (id)setPeakResidentMemorySizeInBytes:(unsigned long long)arg1;
- (id)setPhysicalMemoryFootprintInBytes:(unsigned long long)arg1;
- (id)setResidentMemorySizeInBytes:(unsigned long long)arg1;
- (id)setVirtualMemorySizeInBytes:(unsigned long long)arg1;

@end

