//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AXHARingBuffer : NSObject
{
    NSMutableArray *_bufferArray;
    long long _size;
    long long _head;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)content;
- (id)initWithCount:(unsigned long long)arg1;
- (void)reset;

@end

