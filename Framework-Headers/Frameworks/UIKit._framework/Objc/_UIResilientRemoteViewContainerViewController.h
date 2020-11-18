//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSExtension, _UIWaitingForRemoteViewContainerViewController;
@protocol NSCopying;

@interface _UIResilientRemoteViewContainerViewController : UIViewController
{
    UIViewController *_remoteViewController;
    BOOL _delayingDisplayOfRemoteView;
    NSExtension *_extension;
    id<NSCopying> _extensionRequestIdentifier;
    UIViewController *_containedViewController;
    _UIWaitingForRemoteViewContainerViewController *_waitingController;
    UIViewController *_errorViewController;
}

@property (strong, nonatomic) UIViewController *containedViewController; // @synthesize containedViewController=_containedViewController;
@property (nonatomic) BOOL delayingDisplayOfRemoteView; // @synthesize delayingDisplayOfRemoteView=_delayingDisplayOfRemoteView;
@property (strong, nonatomic) UIViewController *errorViewController; // @synthesize errorViewController=_errorViewController;
@property (strong, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property (readonly, nonatomic) id remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property (strong, nonatomic) _UIWaitingForRemoteViewContainerViewController *waitingController; // @synthesize waitingController=_waitingController;

+ (id)instantiateWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (struct CGRect)_defaultInitialViewFrame;
- (void)_displayError:(id)arg1;
- (void)_displayRemoteViewController;
- (void)dealloc;
- (void)delayDisplayOfRemoteController;
- (void)endDelayingDisplayOfRemoteController;
- (id)initWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end

