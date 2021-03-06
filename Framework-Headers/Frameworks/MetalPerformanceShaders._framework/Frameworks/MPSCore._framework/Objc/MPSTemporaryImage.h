//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSImage.h>

@interface MPSTemporaryImage : MPSImage
{
    unsigned long long _readCount;
}

@property (nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;

+ (id)defaultAllocator;
+ (void)prefetchStorageWithCommandBuffer:(id)arg1 imageDescriptorList:(id)arg2;
+ (id)temporaryImageWithCommandBuffer:(id)arg1 imageDescriptor:(id)arg2;
+ (id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2;
+ (id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 featureChannels:(unsigned long long)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithParentImage:(id)arg1 sliceRange:(struct _NSRange)arg2 featureChannels:(unsigned long long)arg3;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(CDStruct_4c83c94d)arg5 featureChannelInfo:(CDStruct_328d5c87)arg6 imageIndex:(unsigned long long)arg7;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(CDStruct_4c83c94d)arg5 featureChannelInfo:(CDStruct_328d5c87)arg6 imageIndex:(unsigned long long)arg7;

@end

