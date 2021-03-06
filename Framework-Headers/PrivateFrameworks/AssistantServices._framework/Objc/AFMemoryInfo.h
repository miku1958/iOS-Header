//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@interface AFMemoryInfo : NSObject <NSCopying, NSSecureCoding>
{
    int _numberOfRegions;
    int _pageSizeInBytes;
    unsigned long long _virtualMemorySizeInBytes;
    unsigned long long _residentMemorySizeInBytes;
    unsigned long long _peakResidentMemorySizeInBytes;
    unsigned long long _physicalMemoryFootprintInBytes;
}

@property (readonly, nonatomic) int numberOfRegions; // @synthesize numberOfRegions=_numberOfRegions;
@property (readonly, nonatomic) int pageSizeInBytes; // @synthesize pageSizeInBytes=_pageSizeInBytes;
@property (readonly, nonatomic) unsigned long long peakResidentMemorySizeInBytes; // @synthesize peakResidentMemorySizeInBytes=_peakResidentMemorySizeInBytes;
@property (readonly, nonatomic) unsigned long long physicalMemoryFootprintInBytes; // @synthesize physicalMemoryFootprintInBytes=_physicalMemoryFootprintInBytes;
@property (readonly, nonatomic) unsigned long long residentMemorySizeInBytes; // @synthesize residentMemorySizeInBytes=_residentMemorySizeInBytes;
@property (readonly, nonatomic) unsigned long long virtualMemorySizeInBytes; // @synthesize virtualMemorySizeInBytes=_virtualMemorySizeInBytes;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVirtualMemorySizeInBytes:(unsigned long long)arg1 numberOfRegions:(int)arg2 pageSizeInBytes:(int)arg3 residentMemorySizeInBytes:(unsigned long long)arg4 peakResidentMemorySizeInBytes:(unsigned long long)arg5 physicalMemoryFootprintInBytes:(unsigned long long)arg6;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

