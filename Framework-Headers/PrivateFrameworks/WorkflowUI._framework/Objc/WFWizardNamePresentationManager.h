//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UINavigationController, WFWorkflowWizardNameViewController;

@interface WFWizardNamePresentationManager : NSObject
{
    BOOL _presentsModally;
    UINavigationController *_navigationController;
    WFWorkflowWizardNameViewController *_wizardNameViewController;
}

@property (readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (readonly, nonatomic) BOOL presentsModally; // @synthesize presentsModally=_presentsModally;
@property (readonly, nonatomic) WFWorkflowWizardNameViewController *wizardNameViewController; // @synthesize wizardNameViewController=_wizardNameViewController;

- (void).cxx_destruct;
- (void)dismiss;
- (id)initWithNavigationController:(id)arg1 wizardNameViewController:(id)arg2;
- (void)present;
- (void)presentModal;

@end

