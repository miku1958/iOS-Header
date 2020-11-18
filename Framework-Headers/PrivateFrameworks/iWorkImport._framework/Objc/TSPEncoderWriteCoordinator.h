//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPArchiverManagerDelegate-Protocol.h>
#import <iWorkImport/TSPComponentWriterDelegate-Protocol.h>
#import <iWorkImport/TSPDataArchiver-Protocol.h>
#import <iWorkImport/TSPObjectModifyDelegate-Protocol.h>
#import <iWorkImport/TSPProxyObjectMapping-Protocol.h>
#import <iWorkImport/TSPProxyObjectWriting-Protocol.h>

@class NSMutableArray, NSString, NSURL, TSPArchiverManager, TSPObjectContext, TSPReferenceOrderedSet, TSURetainedPointerKeyDictionary;
@protocol OS_dispatch_queue, TSPEncoder, TSPEncoderWriteCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface TSPEncoderWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPObjectModifyDelegate, TSPProxyObjectWriting, TSPProxyObjectMapping>
{
    id<TSPEncoder> _encoder;
    TSPArchiverManager *_archiverManager;
    id<TSPEncoderWriteCoordinatorDelegate> _delegate;
    BOOL _didStopCapturingSnapshots;
    NSMutableArray *_dataFinalizeHandlers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPReferenceOrderedSet *_delayedObjects;
    BOOL _hasProxyObjects;
    TSURetainedPointerKeyDictionary *_proxyObjectMap;
    TSPObjectContext *_context;
}

@property (readonly, weak, nonatomic) TSPObjectContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSURL *relativeURLForExternalData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDataFinalizeHandlerForSuccessfulSave:(CDUnknownBlockType)arg1;
- (void)archiverManager:(id)arg1 didCreateArchiver:(id)arg2;
- (BOOL)archiverManager:(id)arg1 shouldDelayArchivingObject:(id)arg2;
- (void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)componentWriter:(id)arg1 shouldDelayWritingObject:(id)arg2;
- (void)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 archiverOrNil:(id)arg3 claimingComponent:(id)arg4 hasArchiverAccessLock:(BOOL)arg5;
- (void)componentWriterWantsDelayedObjects:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)delayArchivingOfObject:(id)arg1;
- (id)init;
- (id)initWithEncoder:(id)arg1 context:(id)arg2 archiverClass:(Class)arg3 delegate:(id)arg4;
- (unsigned long long)objectTargetType;
- (unsigned long long)objectTargetTypeForComponentWriter:(id)arg1;
- (id)proxyForReferencedObject:(id)arg1;
- (void)setProxy:(id)arg1 forReferencedObject:(id)arg2;
- (BOOL)shouldDelayArchivingObject:(id)arg1;
- (void)skipArchivingObject:(id)arg1;
- (void)stopCapturingSnapshots;
- (void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2 shouldCaptureSnapshot:(BOOL)arg3;
- (void)writeRootObject:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

