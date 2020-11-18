//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFWeakReferenceHolder;
@protocol MFContentProtectionObserver, OS_dispatch_queue;

@interface _MFContentProtectionObserverWrapper : NSObject
{
    MFWeakReferenceHolder *_observerReference;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) id<MFContentProtectionObserver> observer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void)dealloc;
- (id)initWithObserver:(id)arg1 queue:(id)arg2;

@end

