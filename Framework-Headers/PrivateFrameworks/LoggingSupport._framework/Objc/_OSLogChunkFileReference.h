//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _OSLogCollectionReference;

__attribute__((visibility("hidden")))
@interface _OSLogChunkFileReference : NSObject
{
    _OSLogCollectionReference *_oslcr;
    const char *_path;
}

- (void).cxx_destruct;
- (id)copyMappedChunkFile:(id *)arg1;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 subpath:(const char *)arg2;

@end
