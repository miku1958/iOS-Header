//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/PKAddPassesViewControllerDelegate-Protocol.h>

@class NSOperationQueue, NSString, SKUIClientContext;
@protocol SKUIPassbookLoaderDelegate;

@interface SKUIPassbookLoader : NSObject <PKAddPassesViewControllerDelegate>
{
    SKUIClientContext *_clientContext;
    id<SKUIPassbookLoaderDelegate> _delegate;
    long long _loadCount;
    NSOperationQueue *_operationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIPassbookLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didLoadWithPass:(id)arg1 error:(id)arg2;
- (void)_loadPassWithURL:(id)arg1;
- (void)_sendDidFinishIfFinished;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (id)initWithClientContext:(id)arg1;
- (void)loadPassWithURL:(id)arg1;

@end

