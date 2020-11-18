//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/NSObject-Protocol.h>

@class NSString, VMUVMRegion, VMUVMRegionTracker;

@protocol VMUStackLogReader <NSObject>

@property (readonly) BOOL inspectingLiveProcess;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (readonly) BOOL usesLiteMode;

- (int)enumerateRecords:(void (^)(unsigned int, unsigned long long, unsigned long long, unsigned long long))arg1;
- (NSString *)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (NSString *)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (NSString *)sourcePathForPCaddress:(unsigned long long)arg1;
- (VMUVMRegion *)vmuVMRegionForAddress:(unsigned long long)arg1;

@optional
- (unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1;
@end

