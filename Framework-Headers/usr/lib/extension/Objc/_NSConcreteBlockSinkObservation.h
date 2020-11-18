//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObservation.h>

@class NSObject;
@protocol NSObservable;

__attribute__((visibility("hidden")))
@interface _NSConcreteBlockSinkObservation : NSObservation
{
    NSObject<NSObservable> *_LHSobservable;
    CDUnknownBlockType _block;
    int _tag;
}

- (id *)_observerStorage;
- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)finishObserving;
- (id)initWithObservable:(id)arg1 blockSink:(CDUnknownBlockType)arg2 tag:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)remove;

@end
