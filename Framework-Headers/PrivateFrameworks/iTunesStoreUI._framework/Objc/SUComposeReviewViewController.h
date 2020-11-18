//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

#import <iTunesStoreUI/SKComposeReviewDelegate-Protocol.h>

@class NSString, NSURL, SKComposeReviewViewController;

@interface SUComposeReviewViewController : SUViewController <SKComposeReviewDelegate>
{
    NSURL *_compositionURL;
    SKComposeReviewViewController *_remoteViewController;
}

@property (readonly, nonatomic) NSURL *compositionURL; // @synthesize compositionURL=_compositionURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_showRemoteView;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)init;
- (id)initWithCompositionURL:(id)arg1;
- (void)loadView;
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reviewComposeViewControllerDidFinish:(id)arg1;

@end
