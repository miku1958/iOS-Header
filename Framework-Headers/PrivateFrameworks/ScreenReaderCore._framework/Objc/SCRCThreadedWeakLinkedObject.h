//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject
{
    NSLock *_releaseLock;
    int _referenceCount;
    BOOL _calledDealloc;
}

- (void).cxx_destruct;
- (id)init;

@end

