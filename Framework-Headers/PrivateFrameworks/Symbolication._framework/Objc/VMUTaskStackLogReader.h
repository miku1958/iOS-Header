//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUStackLogReaderBase.h>

#import <Symbolication/VMUStackLogReader-Protocol.h>

@class NSSet, NSString, VMUTaskMemoryScanner, VMUVMRegionTracker;

@interface VMUTaskStackLogReader : VMUStackLogReaderBase <VMUStackLogReader>
{
    VMUTaskMemoryScanner *_scanner;
    struct _CSTypeRef _symbolicator;
    unsigned long long _msl_payload_version;
}

@property (readonly) BOOL coldestFrameIsNotThreadId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSSet *excludedFrames;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL inspectingLiveProcess;
@property (readonly) BOOL is64bit;
@property (readonly) unsigned long long nodesInUniquingTable;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (weak, nonatomic) VMUTaskMemoryScanner *scanner; // @synthesize scanner=_scanner;
@property (readonly) Class superclass;
@property (readonly) unsigned int task;
@property (readonly) BOOL usesLiteMode;

- (void).cxx_destruct;
- (id)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1;
- (void)dealloc;
- (int)enumerateMSLRecordsAndPayloads:(CDUnknownBlockType)arg1;
- (int)enumerateRecords:(CDUnknownBlockType)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2;
- (CDStruct_69d7cc99)liteMSLPayloadforMallocAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (CDStruct_69d7cc99)liteMSLPayloadforVMregionAddress:(unsigned long long)arg1;
- (unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(BOOL)arg2;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;

@end

