//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogChunkStore : NSObject
{
    const void *_ptr;
    unsigned long long _sz;
}

- (void)enumerateChunksInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateChunksUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithBytes:(const void *)arg1 size:(unsigned long long)arg2;

@end
