//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, STIntroductionModel, UINavigationController, UIViewController;

__attribute__((visibility("hidden")))
@interface STIntroductionController : NSObject
{
    BOOL _allowParentalControls;
    BOOL _forceParentalControls;
    BOOL _askForRecoveryAppleID;
    BOOL _childOrNotSignedIntoiCloud;
    BOOL _skipWelcome;
    BOOL _isModalPresentation;
    NSString *_childName;
    NSString *_altDSID;
    CDUnknownBlockType _completionBlock;
    STIntroductionModel *_introductionModel;
    UINavigationController *_navigationController;
}

@property BOOL allowParentalControls; // @synthesize allowParentalControls=_allowParentalControls;
@property (copy) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property BOOL askForRecoveryAppleID; // @synthesize askForRecoveryAppleID=_askForRecoveryAppleID;
@property (copy) NSString *childName; // @synthesize childName=_childName;
@property (getter=isChildOrNotSignedIntoiCloud) BOOL childOrNotSignedIntoiCloud; // @synthesize childOrNotSignedIntoiCloud=_childOrNotSignedIntoiCloud;
@property (copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property BOOL forceParentalControls; // @synthesize forceParentalControls=_forceParentalControls;
@property (readonly) UIViewController *initialViewController;
@property (readonly) STIntroductionModel *introductionModel; // @synthesize introductionModel=_introductionModel;
@property (nonatomic) BOOL isModalPresentation; // @synthesize isModalPresentation=_isModalPresentation;
@property (strong) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property BOOL skipWelcome; // @synthesize skipWelcome=_skipWelcome;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_viewControllerCompleted:(id)arg1;
- (id)_viewControllerFollowingViewController:(id)arg1;
- (id)init;
- (void)presentOverViewController:(id)arg1;

@end

