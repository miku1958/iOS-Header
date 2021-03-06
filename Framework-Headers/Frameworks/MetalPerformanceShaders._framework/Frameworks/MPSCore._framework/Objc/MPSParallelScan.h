//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@interface MPSParallelScan : MPSKernel
{
    unsigned int _kernelID;
    unsigned int _sourceDataType;
    unsigned int _destinationDataType;
    int _scanOp;
    unsigned long long _scanImpl;
}

@property (readonly, nonatomic) unsigned int destinationDataType; // @synthesize destinationDataType=_destinationDataType;
@property (nonatomic) unsigned long long scanImpl; // @synthesize scanImpl=_scanImpl;
@property (readonly, nonatomic) unsigned int sourceDataType; // @synthesize sourceDataType=_sourceDataType;

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceOffset:(unsigned long long)arg3 destinationBuffer:(id)arg4 destinationOffset:(unsigned long long)arg5 numEntries:(unsigned long long)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initPrivateWithDevice:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 sourceDataType:(unsigned int)arg2 destinationDataType:(unsigned int)arg3;
- (id)initWithDevice:(id)arg1 sourceDataType:(unsigned int)arg2 destinationDataType:(unsigned int)arg3 scanOp:(int)arg4;

@end

