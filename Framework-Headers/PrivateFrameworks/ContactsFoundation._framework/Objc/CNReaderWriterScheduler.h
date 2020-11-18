//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNReaderWriterScheduler-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CNReaderWriterScheduler : NSObject <CNReaderWriterScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _suspended;
    NSMutableArray *_activeReaders;
    NSMutableArray *_pendingReaders;
    NSMutableArray *_activeWriters;
    NSMutableArray *_pendingWriters;
}

@property (readonly, nonatomic) NSMutableArray *activeReaders; // @synthesize activeReaders=_activeReaders;
@property (readonly, nonatomic) NSMutableArray *activeWriters; // @synthesize activeWriters=_activeWriters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableArray *pendingReaders; // @synthesize pendingReaders=_pendingReaders;
@property (readonly, nonatomic) NSMutableArray *pendingWriters; // @synthesize pendingWriters=_pendingWriters;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended;

- (void).cxx_destruct;
- (void)activateReader:(id)arg1;
- (void)activateWriter:(id)arg1;
- (void)addReaderWithIdentifier:(id)arg1;
- (void)addWriterWithIdentifier:(id)arg1;
- (void)appendDescriptionToBuilder:(id)arg1;
- (id)init;
- (id)performReaderBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousReaderBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousWriterBlock:(CDUnknownBlockType)arg1;
- (id)performWriterBlock:(CDUnknownBlockType)arg1;
- (void)removeReader:(id)arg1;
- (void)removeWriter:(id)arg1;
- (void)resume;
- (void)suspend;

@end

