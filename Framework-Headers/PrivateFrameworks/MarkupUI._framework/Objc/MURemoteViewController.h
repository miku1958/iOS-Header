//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <MarkupUI/MURemoteViewProtocol-Protocol.h>

@class NSString;

@interface MURemoteViewController : _UIRemoteViewController <MURemoteViewProtocol>
{
    BOOL _shouldResignFirstResponder;
    CDUnknownBlockType _finishedWithResultsCompletionBlock;
    long long _sandboxExtensionHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType finishedWithResultsCompletionBlock; // @synthesize finishedWithResultsCompletionBlock=_finishedWithResultsCompletionBlock;
@property (readonly) unsigned long long hash;
@property long long sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
@property BOOL shouldResignFirstResponder; // @synthesize shouldResignFirstResponder=_shouldResignFirstResponder;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)beginDismissWithInfo:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)serviceDidFinishwithResults:(id)arg1 andSandboxExtension:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

