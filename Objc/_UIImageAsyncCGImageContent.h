//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIImageCGImageContent.h>

@class _UICGImageDecompressor;

__attribute__((visibility("hidden")))
@interface _UIImageAsyncCGImageContent : _UIImageCGImageContent
{
    long long _orientation;
    BOOL _finishedDecompressing;
    _UICGImageDecompressor *_decompressor;
}

@property (strong, setter=_setDecompressor:) _UICGImageDecompressor *_decompressor; // @synthesize _decompressor;
@property BOOL finishedDecompressing; // @synthesize finishedDecompressing=_finishedDecompressing;
@property (readonly) long long orientation;

- (void).cxx_destruct;
- (struct CGImage *)CGImage;
- (id)description;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4 cache:(BOOL)arg5;
- (BOOL)isDecompressing;
- (BOOL)isEqual:(id)arg1;

@end

