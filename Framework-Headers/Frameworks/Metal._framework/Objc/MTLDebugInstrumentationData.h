//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;
@protocol OS_dispatch_data;

@interface MTLDebugInstrumentationData : NSObject
{
    NSObject<OS_dispatch_data> *_dataMap;
    const struct MTLSerializedDebugInstrumentationData *_data;
    struct vector<const __CFString *, std::__1::allocator<const __CFString *>> _strings;
    struct vector<MTLDebugLocation *, std::__1::allocator<MTLDebugLocation *>> _debugLocations;
    struct vector<MTLDebugSubProgram *, std::__1::allocator<MTLDebugSubProgram *>> _debugSubPrograms;
    NSData *_globalConstantsData;
    NSObject<OS_dispatch_data> *_userReflectionData;
}

@property (readonly, nonatomic) unsigned int activeThreadgroupMask;
@property (readonly, nonatomic) unsigned long long bufferAccessMask;
@property (readonly, nonatomic) BOOL hasArgumentBufferInstrumentationFailures;
@property (readonly, nonatomic) BOOL hasArgumentLimitsInstrumentationFailures;
@property (readonly, nonatomic) BOOL hasGlobalConstantsInstrumentationFailures;
@property (readonly, nonatomic) unsigned int threadgroupArgumentOffset;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)debugLocationForID:(unsigned int)arg1;
- (id)debugSubProgramForID:(unsigned int)arg1;
- (id)globalConstantsData;
- (id)initWithData:(id)arg1;
- (id)stringForID:(unsigned int)arg1;
- (id)userReflectionData;

@end
