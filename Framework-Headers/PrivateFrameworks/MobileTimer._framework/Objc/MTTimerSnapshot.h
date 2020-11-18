//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTSnapshotScheduler.h>

#import <MobileTimer/MTTimerObserver-Protocol.h>

@class MTTimerStorage, NSString;

@interface MTTimerSnapshot : MTSnapshotScheduler <MTTimerObserver>
{
    MTTimerStorage *_storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MTTimerStorage *storage; // @synthesize storage=_storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithStorage:(id)arg1;
- (void)nextTimerDidChange:(id)arg1;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;

@end

