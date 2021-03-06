//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInterfaceActionGroupView.h>

@class UIAlertController;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView
{
    BOOL _scrollableHeaderViewHasRealContent;
    UIAlertController *_alertController;
}

@property (weak, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (nonatomic) BOOL scrollableHeaderViewHasRealContent; // @synthesize scrollableHeaderViewHasRealContent=_scrollableHeaderViewHasRealContent;

- (void).cxx_destruct;
- (id)_alertController;
- (BOOL)_shouldInstallContentGuideConstraints;
- (BOOL)_shouldShowSeparatorAboveActionsSequenceView;
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
- (id)initWithAlertController:(id)arg1 actionGroup:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;

@end

