//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFCanceler-Protocol.h>

@class NSString, PFAsyncDispatchMulticaster;
@protocol OS_dispatch_queue, PFCancelerObserverMulticaster;

@interface PFCanceler : NSObject <PFCanceler>
{
    NSObject<OS_dispatch_queue> *_serializer;
    BOOL _isCanceled;
    PFAsyncDispatchMulticaster<PFCancelerObserverMulticaster> *_multicaster;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsNotifyOnCancel;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)cancel;
- (id)init;
- (BOOL)isCanceled;
- (void)removeObserver:(id)arg1;

@end

