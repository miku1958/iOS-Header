//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SRMemoryMapping : NSObject
{
    int _protection;
    int _advice;
    void *_start;
    void *_currentPosition;
    long long _offset;
    void *_mappedAddress;
    unsigned long long _size;
    unsigned long long _pageAlignedSize;
}

+ (void)initialize;
- (void)dealloc;

@end
