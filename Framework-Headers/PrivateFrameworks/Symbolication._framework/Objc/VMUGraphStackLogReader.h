//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUStackLogReaderBase.h>

#import <Symbolication/NSSecureCoding-Protocol.h>
#import <Symbolication/VMUStackLogReader-Protocol.h>

@class NSSet, NSString, VMUDebugTimer, VMUProcessObjectGraph, VMURangeToStringMap, VMUVMRegionTracker;

@interface VMUGraphStackLogReader : VMUStackLogReaderBase <NSSecureCoding, VMUStackLogReader>
{
    struct _CSTypeRef _symbolicator;
    VMUProcessObjectGraph *_graph;
    VMUDebugTimer *_debugTimer;
    unsigned int _nodeNamespaceSize;
    unsigned int *_nodeToStackIdTable;
    struct vmu_backtrace_uniquing_table_t *_backtraceUniquingTable;
    VMURangeToStringMap *_functionNameRanges;
    VMURangeToStringMap *_sourceInfoRanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSSet *excludedFrames;
@property (weak, nonatomic) VMUProcessObjectGraph *graph; // @synthesize graph=_graph;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL inspectingLiveProcess;
@property (readonly) BOOL is64bit;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (readonly) Class superclass;
@property (readonly) unsigned int task;
@property (readonly) BOOL usesLiteMode;

+ (void)_claimUnarchivingOfClass:(id)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_parseSourceInfoString:(id)arg1 intoComponents:(unsigned int *)arg2;
- (void)_setFunctionName:(id)arg1 forPCAddressRange:(struct _VMURange)arg2;
- (void)_setSourcePath:(id)arg1 lineNumber:(unsigned int)arg2 forPCAddressRange:(struct _VMURange)arg3;
- (id)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (int)enumerateRecords:(CDUnknownBlockType)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2 graph:(id)arg3 debugTimer:(id)arg4;
- (void)populateBacktraceUniquingTableWithStackLogs:(id)arg1;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(BOOL)arg2;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)sourceLineRangeContainingPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (void)symbolicateBacktraceUniquingTable;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;

@end

