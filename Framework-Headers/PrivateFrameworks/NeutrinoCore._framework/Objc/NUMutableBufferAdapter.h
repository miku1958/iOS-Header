//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUBufferAdapter.h>

#import <NeutrinoCore/NUMutableBuffer-Protocol.h>
#import <NeutrinoCore/NUMutableBufferProvider-Protocol.h>

@class NSString, NUPixelFormat;

@interface NUMutableBufferAdapter : NUBufferAdapter <NUMutableBuffer, NUMutableBufferProvider>
{
    void *_mutableBytes;
}

@property (readonly, nonatomic) const void *bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) void *mutableBytes;
@property (readonly, nonatomic) long long rowBytes;
@property (readonly, nonatomic) CDStruct_912cb5d2 size;
@property (readonly) Class superclass;

- (id)initWithMutableBuffer:(id)arg1;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 rowBytes:(long long)arg3 bytes:(const void *)arg4;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 rowBytes:(long long)arg3 mutableBytes:(void *)arg4;
- (void *)mutableBytesAtPoint:(CDStruct_912cb5d2)arg1;
- (id)newRenderDestination;
- (void)provideMutableBuffer:(CDUnknownBlockType)arg1;

@end

