//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLCountersTraceCommandEncoder : NSObject
{
    struct BinaryBuffer *_stream;
    unsigned long long _flags;
    struct _NSRange _segment;
}

@property (readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property (readonly, nonatomic) struct _NSRange segment; // @synthesize segment=_segment;

- (void)endEncoding;
- (id)init:(struct BinaryBuffer *)arg1 flags:(unsigned long long)arg2;
- (void)insertDebugSignpost:(id)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setLabel:(id)arg1;

@end

