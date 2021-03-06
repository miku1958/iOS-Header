//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTLLoader : NSObject
{
    struct LoaderGlobalState *_global;
    NSObject<OS_dispatch_queue> *_claimQueue;
    struct unordered_map<MTLLoadedFile *, id, std::__1::hash<MTLLoadedFile *>, std::__1::equal_to<MTLLoadedFile *>, std::__1::allocator<std::__1::pair<MTLLoadedFile *const, id>>> _claims;
}

+ (id)canonicalURL:(id)arg1;
+ (BOOL)deserializeMachOContainerWithHandler:(CDUnknownBlockType)arg1 reader:(CDUnknownBlockType)arg2;
+ (BOOL)deserializeMachOWrapperWithType:(long long)arg1 payloadHandler:(CDUnknownBlockType)arg2 reader:(CDUnknownBlockType)arg3;
+ (BOOL)deserializeUniversalBinaryHeaderWithHandler:(CDUnknownBlockType)arg1 reader:(CDUnknownBlockType)arg2 bytes:(unsigned long long)arg3;
+ (BOOL)serializeMachOContainerWithSlice:(struct MTLLoaderSliceIdentifier)arg1 payload:(const struct MTLLoaderMachOPayload *)arg2 count:(unsigned int)arg3 writer:(CDUnknownBlockType)arg4;
+ (BOOL)serializeMachOWrapperWithType:(long long)arg1 slice:(struct MTLLoaderSliceIdentifier)arg2 payload:(const struct MTLLoaderMachOPayload *)arg3 writer:(CDUnknownBlockType)arg4;
+ (BOOL)serializePaddingForOffset:(unsigned long long)arg1 writer:(CDUnknownBlockType)arg2;
+ (BOOL)serializeUniversalBinaryHeaderWithSlice:(const struct MTLLoaderSliceIdentifier *)arg1 offset:(const unsigned long long *)arg2 length:(const unsigned long long *)arg3 count:(unsigned int)arg4 writer:(CDUnknownBlockType)arg5;
+ (struct MTLLoaderSliceIdentifier)sliceIDForAIR:(const struct MTLLibraryData *)arg1;
+ (struct MTLLoaderSliceIdentifier)sliceIDForDescriptors;
+ (struct MTLLoaderSliceIdentifier)sliceIDForDevice:(id)arg1 andDriverVersion:(unsigned long long *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)associateLoadedFile:(id)arg1 withObject:(id)arg2;
- (oneway void)dealloc;
- (void)disassociateLoadedFile:(id)arg1 withObject:(id)arg2;
- (void)executeBlockForLoadedFile:(id)arg1 withAssociatedObject:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;
- (id)loadFileWithURL:(id)arg1 error:(id *)arg2;
- (id)loadLibrariesWithDevice:(id)arg1 computeDescriptor:(id)arg2 error:(id *)arg3;
- (void)releaseLoadedFile:(id)arg1;

@end

