//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFDialogViewDelegate-Protocol.h>

@class NSString, _SFDialogView;
@protocol _SFDialogControllerDelegate, _SFDialogPresenting;

@interface _SFDialogController : NSObject <_SFDialogViewDelegate>
{
    _SFDialogView *_dialogView;
    int _webProcessIdentifier;
    id<_SFDialogControllerDelegate> _delegate;
    id<_SFDialogPresenting> _dialogPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_SFDialogControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<_SFDialogPresenting> dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (int)_currentWebProcessIdentifier;
- (void)_dismissDialog;
- (BOOL)_isPresentingDialog;
- (void)_presentDialog:(id)arg1 forWebProcessIdentifier:(int)arg2;
- (void)dialogView:(id)arg1 didSelectPrimaryAction:(BOOL)arg2 withPromptText:(id)arg3;
- (void)dismissAllDialogsIfNeeded;
- (void)owningWebViewWillBecomeActive;
- (void)showDialog:(id)arg1;

@end

