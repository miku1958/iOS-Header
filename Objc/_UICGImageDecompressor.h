//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICGImageDecompressor : NSObject
{
    struct CGImage *_imageRef;
    long long _orientation;
}

@property (readonly, nonatomic) BOOL _isHardwareBased;

+ (void)flushCaches;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 renderingIntent:(unsigned long long)arg3 cache:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;
- (struct CGImage *)waitForImageRef;
- (long long)waitForOrientation;

@end

