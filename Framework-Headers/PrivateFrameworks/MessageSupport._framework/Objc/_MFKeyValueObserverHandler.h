//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageSupport/MFKVOObservation-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MFKeyValueObserverHandler : NSObject <MFKVOObservation>
{
    id _object;
    NSString *_keyPath;
    CDUnknownBlockType _block;
    BOOL _observing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObservingWithOptions:(unsigned long long)arg1;
- (void)stopObserving;

@end

