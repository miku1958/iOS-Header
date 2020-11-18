//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSFilePresenter-Protocol.h>

@class NSData, NSError, NSOperationQueue, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, TSUURLTrackerDelegate;

__attribute__((visibility("hidden")))
@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasStarted;
    NSData *_bookmarkDataIfAvailable;
    NSError *_latestError;
    id<TSUURLTrackerDelegate> _delegate;
    NSOperationQueue *_presentedItemOperationQueue;
    NSURL *_URLIfAvailable;
}

@property (copy) NSURL *URLIfAvailable; // @synthesize URLIfAvailable=_URLIfAvailable;
@property (readonly) NSData *bookmarkData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, strong) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLAndReturnError:(id *)arg1;
- (id)_URLAndReturnError:(id *)arg1;
- (id)_bookmarkData;
- (id)_bookmarkDataAndReturnError:(id *)arg1;
- (id)_description;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)bookmarkDataAndReturnError:(id *)arg1;
- (id)init;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3;
- (void)pause;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (void)startOrResume;
- (void)stop;

@end

