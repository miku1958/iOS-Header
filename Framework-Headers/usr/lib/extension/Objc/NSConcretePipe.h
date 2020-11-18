//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/NSPipe.h>

@class NSFileHandle;

__attribute__((visibility("hidden")))
@interface NSConcretePipe : NSPipe
{
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}

- (void)_closeOnDealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)fileHandleForReading;
- (id)fileHandleForWriting;
- (id)init;

@end
