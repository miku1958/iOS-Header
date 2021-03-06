//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputView.h>

#import <WorkflowEditor/UINavigationControllerDelegate-Protocol.h>

@class NSString, UINavigationController, WFVariableConfigurationViewController;

@interface WFVariableConfigurationView : UIInputView <UINavigationControllerDelegate>
{
    WFVariableConfigurationViewController *_viewController;
    UINavigationController *_navigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFVariableConfigurationViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (id)initWithVariable:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (double)preferredHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

