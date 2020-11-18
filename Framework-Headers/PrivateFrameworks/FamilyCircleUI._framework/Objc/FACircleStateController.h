//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/DevicePINControllerDelegate-Protocol.h>

@class FARequestConfigurator, NSString, UIViewController;

@interface FACircleStateController : NSObject <DevicePINControllerDelegate>
{
    FARequestConfigurator *_requestConfigurator;
    CDUnknownBlockType _performOperationCompletion;
    UIViewController *_presenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIViewController *presenter; // @synthesize presenter=_presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_contextRequiresRemoteService:(id)arg1;
- (void)_ensurePresenterWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performOperationWithContext:(id)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentViewServiceWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_restrictionsPINCompletionWithSuccess:(BOOL)arg1;
- (void)didAcceptEnteredPIN;
- (void)didCancelEnteringPIN;
- (id)init;
- (id)initWithPresenter:(id)arg1;
- (void)performOperationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showRestrictionsPINController;

@end

