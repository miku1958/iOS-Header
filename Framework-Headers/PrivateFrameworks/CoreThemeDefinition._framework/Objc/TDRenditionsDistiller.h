//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreThemeDocument, NSConditionLock, NSMutableArray, TDLogger;
@protocol OS_dispatch_group;

@interface TDRenditionsDistiller : NSObject
{
    CoreThemeDocument *document;
    NSMutableArray *renditionInQueue;
    NSMutableArray *psiDataInfoOutQueue;
    NSConditionLock *inQueueLock;
    NSConditionLock *outQueueLock;
    BOOL shouldCompressCSIDataFlag;
    BOOL noMoreCSIDataInfo;
    BOOL noMoreRenditions;
    NSObject<OS_dispatch_group> *_group;
    TDLogger *_logger;
}

@property (strong) TDLogger *logger; // @synthesize logger=_logger;

- (void)_distill:(id)arg1;
- (void)_enqueueCSIDataInfo:(id)arg1;
- (void)_enqueueDistillingAbortedInfo;
- (void)_enqueueLastCSIDataInfoFlag;
- (void)_enqueueOnInQueueTheObject:(id)arg1;
- (void)_enqueueOnOutQueueTheObject:(id)arg1;
- (void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3;
- (id)_nextObjectFromInQueue;
- (void)dealloc;
- (void)detachDistillationThread;
- (void)enqueueAbortFlag;
- (void)enqueueLastRenditionFlag;
- (void)enqueueRenditionSpec:(id)arg1;
- (id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(BOOL)arg2;
- (id)nextCSIDataInfoFromQueue;
- (void)waitUntilFinished;

@end

