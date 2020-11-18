//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CIImageProcessorOutput : NSObject
{
    void *_priv;
}

@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) struct CGRect region;

- (void)dealloc;
- (void *)getBaseAddress;
- (id)initWithSurface:(struct __IOSurface *)arg1 texture:(struct Texture)arg2 bounds:(struct CGRect)arg3 context:(struct Context *)arg4;
- (id)metalCommandBuffer;
- (id)metalTexture;
- (struct __IOSurface *)surface;

@end
