//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUMutableBufferProvider-Protocol.h>

@class NSDictionary, NUPixelFormat, NURegion;
@protocol NUImageStorage, NURenderer;

@protocol NUImageStorage <NUMutableBufferProvider>

@property (readonly) NUPixelFormat *format;
@property (readonly) CDStruct_912cb5d2 size;
@property (readonly) long long sizeInBytes;
@property (readonly) NURegion *validRegion;

- (void)assertIsValidInRect:(CDStruct_996ac03c)arg1;
- (void)assertIsValidInRegion:(NURegion *)arg1;
- (long long)copyFromStorage:(id<NUImageStorage>)arg1 region:(NURegion *)arg2;
- (long long)fillBufferWithPattern4:(unsigned int)arg1;
- (void)invalidate;
- (BOOL)isValidInRect:(CDStruct_996ac03c)arg1;
- (BOOL)isValidInRegion:(NURegion *)arg1;
- (long long)readBufferInRegion:(NURegion *)arg1 block:(void (^)(id<NUBuffer>))arg2;
- (long long)useAsCIImageWithOptions:(NSDictionary *)arg1 renderer:(id<NURenderer>)arg2 block:(void (^)(CIImage *))arg3;
- (long long)useAsCIRenderDestinationWithRenderer:(id<NURenderer>)arg1 block:(BOOL (^)(CIRenderDestination *))arg2;
- (void)validateRect:(CDStruct_996ac03c)arg1;
- (void)validateRegion:(NURegion *)arg1;
- (long long)writeBufferInRegion:(NURegion *)arg1 block:(void (^)(id<NUMutableBuffer>))arg2;
@end

