//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Symbolication/VMUStackLogReader-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSSet, NSString, VMUVMRegionTracker;

@interface VMUStackLogReaderBase : NSObject <VMUStackLogReader>
{
    unsigned int _task;
    VMUVMRegionTracker *_regionTracker;
    NSMapTable *_addressToSymbolicationMap;
    NSSet *_excludedFrames;
    NSMutableDictionary *_binaryImagePathToIdentifierMap;
    BOOL _usesLiteMode;
    BOOL _coldestFrameIsNotThreadId;
}

@property (readonly) BOOL coldestFrameIsNotThreadId; // @synthesize coldestFrameIsNotThreadId=_coldestFrameIsNotThreadId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSSet *excludedFrames; // @synthesize excludedFrames=_excludedFrames;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL inspectingLiveProcess;
@property (readonly) BOOL is64bit;
@property (readonly) unsigned long long nodesInUniquingTable;
@property (readonly) VMUVMRegionTracker *regionTracker; // @synthesize regionTracker=_regionTracker;
@property (readonly) Class superclass;
@property (readonly) unsigned int task; // @synthesize task=_task;
@property (readonly) BOOL usesLiteMode; // @synthesize usesLiteMode=_usesLiteMode;

- (void).cxx_destruct;
- (id)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1;
- (int)enumerateMSLRecordsAndPayloads:(CDUnknownBlockType)arg1;
- (int)enumerateRecords:(CDUnknownBlockType)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (id)identifierForBinaryImagePath:(id)arg1;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(BOOL)arg2;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (id)symbolicatedBacktraceForFrames:(unsigned long long *)arg1 frameCount:(long long)arg2 options:(unsigned long long)arg3;
- (id)symbolicatedBacktraceForNode:(unsigned int)arg1 nodeDetails:(CDStruct_599faf0f)arg2 isLiteZone:(BOOL)arg3 options:(unsigned long long)arg4;
- (id)symbolicatedBacktraceForStackID:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;

@end

