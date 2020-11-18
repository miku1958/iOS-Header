//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPreferencesSync/NSFilePresenter-Protocol.h>

@class NSOperationQueue, NSString, NSURL;
@protocol NPSDomainAccessorFilePresenterDelegate;

@interface NPSDomainAccessorFilePresenter : NSObject <NSFilePresenter>
{
    NSURL *_domainURL;
    id<NPSDomainAccessorFilePresenterDelegate> _delegate;
    NSOperationQueue *_presenterOperationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<NPSDomainAccessorFilePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSURL *domainURL; // @synthesize domainURL=_domainURL;
@property (readonly) unsigned long long hash;
@property (readonly, strong) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (strong, nonatomic) NSOperationQueue *presenterOperationQueue; // @synthesize presenterOperationQueue=_presenterOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 domainURL:(id)arg2;
- (BOOL)presentedItemNeedsWatching;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (id)synchronizeForReadingOnly:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;

@end
