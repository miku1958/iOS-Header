//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <WorkflowUI/WFModuleTitleViewDelegate-Protocol.h>

@class NSString, UIButton, UIViewController, WFAction, WFActionDrawerCoordinator, WFDragController, WFDragGestureRecognizer, WFModuleTitleView;

@interface WFActionDrawerActionTableViewCell : UITableViewCell <WFModuleTitleViewDelegate>
{
    WFAction *_action;
    WFActionDrawerCoordinator *_coordinator;
    UIViewController *_viewController;
    WFDragGestureRecognizer *_dragRecognizer;
    WFDragController *_dragController;
    WFModuleTitleView *_titleView;
    UIButton *_infoButton;
}

@property (strong, nonatomic) WFAction *action; // @synthesize action=_action;
@property (weak, nonatomic) WFActionDrawerCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) WFDragController *dragController; // @synthesize dragController=_dragController;
@property (strong, nonatomic) WFDragGestureRecognizer *dragRecognizer; // @synthesize dragRecognizer=_dragRecognizer;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) WFModuleTitleView *titleView; // @synthesize titleView=_titleView;
@property (weak, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)configureWithAction:(id)arg1 coordinator:(id)arg2 viewController:(id)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)infoButtonPressed;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isAccessibilityElement;

@end

