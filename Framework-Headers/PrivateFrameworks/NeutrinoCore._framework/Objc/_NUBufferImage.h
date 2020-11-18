//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NUImage.h>

#import <NeutrinoCore/NUBufferImage-Protocol.h>
#import <NeutrinoCore/NUMutableBufferImage-Protocol.h>
#import <NeutrinoCore/NUMutablePurgeableBufferImage-Protocol.h>
#import <NeutrinoCore/NUPurgeableBufferImage-Protocol.h>

@class NSString, NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;

@interface _NUBufferImage : _NUImage <NUBufferImage, NUMutableBufferImage, NUPurgeableBufferImage, NUMutablePurgeableBufferImage>
{
}

@property (readonly) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) NUImageLayout *layout;
@property (readonly) CDStruct_912cb5d2 size;
@property (readonly) Class superclass;
@property (readonly, copy) NURegion *validRegion;

- (BOOL)copyBufferStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3;
- (BOOL)copySurfaceStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3 device:(id)arg4;
- (id)debugQuickLookObject;
- (void)readBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)writeBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end

