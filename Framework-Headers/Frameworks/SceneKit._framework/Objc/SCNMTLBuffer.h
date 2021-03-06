//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLBuffer : NSObject
{
    long long _usedCount;
    id<MTLBuffer> _buffer;
    unsigned long long _offset;
    id _dataSource;
}

@property (strong, nonatomic) id<MTLBuffer> buffer; // @synthesize buffer=_buffer;
@property (readonly, nonatomic) void *contents;
@property (nonatomic) id dataSource; // @synthesize dataSource=_dataSource;
@property (nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property long long usedCount; // @synthesize usedCount=_usedCount;

- (void)dealloc;
- (long long)decrementUsedCount;
- (void)incrementUsedCount;

@end

