//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QLImageData : NSObject
{
    struct CGImageSource *_imageSource;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)durations;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)initWithImageSource:(struct CGImageSource *)arg1;
- (long long)orientation;
- (id)type;

@end

