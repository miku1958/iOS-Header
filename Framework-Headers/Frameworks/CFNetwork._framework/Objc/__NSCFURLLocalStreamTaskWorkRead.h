//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/__NSCFURLLocalStreamTaskWork.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface __NSCFURLLocalStreamTaskWorkRead : __NSCFURLLocalStreamTaskWork
{
    unsigned long long _minBytes;
    unsigned long long _maxBytes;
    CDUnknownBlockType _completion;
    NSData *_readData;
    BOOL _eof;
}

- (void)dealloc;

@end

