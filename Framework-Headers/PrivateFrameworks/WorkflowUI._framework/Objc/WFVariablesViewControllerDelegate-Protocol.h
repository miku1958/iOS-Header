//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFVariable, WFVariablesViewController;

@protocol WFVariablesViewControllerDelegate <NSObject>
- (void)variablesViewController:(WFVariablesViewController *)arg1 didSelectVariable:(WFVariable *)arg2;
- (void)variablesViewControllerDidSelectMagicVariable:(WFVariablesViewController *)arg1;
@end
