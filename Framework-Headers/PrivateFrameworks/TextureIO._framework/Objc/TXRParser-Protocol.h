//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextureIO/NSObject-Protocol.h>

@class NSData, TXRImageInfo, TXROptions, TXRTextureInfo;
@protocol TXRBufferAllocator;

@protocol TXRParser <NSObject>

@property (readonly, nonatomic) TXRTextureInfo *textureInfo;

+ (BOOL)handlesData:(NSData *)arg1;
- (BOOL)parseData:(NSData *)arg1 bufferAllocator:(id<TXRBufferAllocator>)arg2 options:(TXROptions *)arg3 error:(id *)arg4;
- (TXRImageInfo *)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
@end

