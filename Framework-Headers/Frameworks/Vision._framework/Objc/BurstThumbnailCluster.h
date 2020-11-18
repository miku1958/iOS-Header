//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BurstThumbnailCluster : NSObject
{
    struct __CVBuffer *_imagePixelBuffer;
    CDUnknownBlockType _completionBlock;
    NSMutableArray *_burstImages;
    NSMutableDictionary *_imageProps;
}

@property (strong) NSMutableArray *burstImages; // @synthesize burstImages=_burstImages;
@property (copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property struct __CVBuffer *imagePixelBuffer; // @synthesize imagePixelBuffer=_imagePixelBuffer;
@property (strong) NSMutableDictionary *imageProps; // @synthesize imageProps=_imageProps;

- (void).cxx_destruct;
- (void)addItemsFromCluster:(id)arg1;
- (float)computeMergeCost:(id)arg1:(int *)arg2:(int)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithImageData:(struct __CVBuffer *)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

