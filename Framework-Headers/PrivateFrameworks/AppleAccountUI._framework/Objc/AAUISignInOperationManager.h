//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/ACUIAccountOperationsDelegate-Protocol.h>

@class ACUIAccountOperationsHelper, NSString, UIViewController;
@protocol AAUISignInOperationDelegate;

@interface AAUISignInOperationManager : NSObject <ACUIAccountOperationsDelegate>
{
    ACUIAccountOperationsHelper *_accountOperationsHelper;
    id<AAUISignInOperationDelegate> _delegate;
    UIViewController *_presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUISignInOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertControllerForPicker:(id)arg1;
- (id)_dataclassMergeActionPickerFromPicker:(id)arg1;
- (void)_delegate_signInOperationManagerDidSaveAccount:(id)arg1 error:(id)arg2;
- (void)_disableDataclasses:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_mainQueue_dataclassActionsForPicker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_refreshEnabledDataclassesForAccount:(id)arg1;
- (id)init;
- (id)initWithPresentingViewController:(id)arg1;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (void)signInAccount:(id)arg1 enablingDataclasses:(BOOL)arg2;

@end

