//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUBufferImage-Protocol.h>
#import <NeutrinoCore/NUTextureImage-Protocol.h>

@class NURegion;

@protocol NUSurfaceImage <NUBufferImage, NUTextureImage>
- (void)readSurfaceRegion:(NURegion *)arg1 withBlock:(void (^)(id<NUSurfaceTile>, BOOL *))arg2;
@end

