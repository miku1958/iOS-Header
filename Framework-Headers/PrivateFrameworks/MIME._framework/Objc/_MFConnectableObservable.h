//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFObservable.h>

#import <MIME/MFConnectableObservable-Protocol.h>

@class MFCancelationToken, NSLock, NSMapTable, NSString;
@protocol MFObservable;

__attribute__((visibility("hidden")))
@interface _MFConnectableObservable : MFObservable <MFConnectableObservable>
{
    id<MFObservable> _observable;
    MFCancelationToken *_cancelable;
    NSLock *_lock;
    NSMapTable *_observersToCancelable;
    BOOL _connected;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)connect;
- (void)dealloc;
- (id)initWithObservable:(id)arg1;
- (id)subscribe:(id)arg1;

@end

