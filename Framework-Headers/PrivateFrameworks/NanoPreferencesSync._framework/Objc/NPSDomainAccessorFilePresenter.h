//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPreferencesSync/NSFilePresenter-Protocol.h>

@class NSOperationQueue, NSSet, NSString, NSURL;
@protocol NPSDomainAccessorFilePresenterDelegate, OS_dispatch_queue;

@interface NPSDomainAccessorFilePresenter : NSObject <NSFilePresenter>
{
    BOOL _current;
    NSURL *_domainURL;
    id<NPSDomainAccessorFilePresenterDelegate> _delegate;
    NSOperationQueue *_presenterOperationQueue;
    NSObject<OS_dispatch_queue> *_presenterUnderlyingQueue;
}

@property (nonatomic, getter=isCurrent) BOOL current; // @synthesize current=_current;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<NPSDomainAccessorFilePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSURL *domainURL; // @synthesize domainURL=_domainURL;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, strong) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (strong, nonatomic) NSOperationQueue *presenterOperationQueue; // @synthesize presenterOperationQueue=_presenterOperationQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *presenterUnderlyingQueue; // @synthesize presenterUnderlyingQueue=_presenterUnderlyingQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 domainURL:(id)arg2;
- (BOOL)presentedItemNeedsWatching;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (id)synchronizeForReadingOnly:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;

@end
