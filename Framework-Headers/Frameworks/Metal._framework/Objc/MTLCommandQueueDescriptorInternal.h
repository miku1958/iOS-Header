//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLCommandQueueDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor
{
    unsigned long long _maxCommandBufferCount;
    unsigned long long _qosClass;
    long long _qosRelativePriority;
    BOOL _openGLQueue;
}

@property BOOL isOpenGLQueue; // @synthesize isOpenGLQueue=_openGLQueue;

- (id)description;
- (id)init;
- (unsigned long long)maxCommandBufferCount;
- (unsigned long long)qosClass;
- (long long)qosRelativePriority;
- (void)setMaxCommandBufferCount:(unsigned long long)arg1;
- (void)setQosClass:(unsigned long long)arg1;
- (void)setQosRelativePriority:(long long)arg1;

@end

