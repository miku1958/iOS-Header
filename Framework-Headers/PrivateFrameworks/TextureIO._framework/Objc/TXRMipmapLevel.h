//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface TXRMipmapLevel : NSObject <NSCopying>
{
    NSMutableArray *_elements;
    unsigned long long _level;
}

@property (readonly) NSArray *elements;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initAsLevel:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(BOOL)arg3 dataSourceProvider:(id)arg4;
- (id)initAsLevel:(unsigned long long)arg1 dimensions:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 alphaInfo:(unsigned long long)arg4 arrayLength:(BOOL)arg5 cubemap:(id)arg6 bufferAllocator: /* Error: Ran out of types for this method. */;
- (void)setImage:(id)arg1 atElement:(unsigned long long)arg2 atFace:(unsigned long long)arg3;

@end

