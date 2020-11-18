//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, WFAction;
@protocol WFActionSettingsViewControllerDelegate;

@interface WFActionSettingsViewController : UIViewController
{
    id<WFActionSettingsViewControllerDelegate> _delegate;
    WFAction *_action;
    NSDictionary *_definition;
}

@property (readonly, nonatomic) WFAction *action; // @synthesize action=_action;
@property (readonly, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property (weak, nonatomic) id<WFActionSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (BOOL)accessibilityPerformEscape;
- (void)donePressed:(id)arg1;
- (id)initWithAction:(id)arg1 definition:(id)arg2;

@end
