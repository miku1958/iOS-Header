//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import <SpringBoardUI/BSDescriptionProviding-Protocol.h>

@class NSString, SBAlertItem;
@protocol UIAlertControllerVisualStyleProviding, _SBAlertControllerDelegate;

@interface _SBAlertController : UIAlertController <BSDescriptionProviding>
{
    SBAlertItem *_alertItem;
    id<_SBAlertControllerDelegate> _alertControllerDelegate;
    id<UIAlertControllerVisualStyleProviding> _styleProvider;
}

@property (weak, nonatomic) id<_SBAlertControllerDelegate> alertControllerDelegate; // @synthesize alertControllerDelegate=_alertControllerDelegate;
@property (weak, nonatomic) SBAlertItem *alertItem; // @synthesize alertItem=_alertItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)_styleProvider;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithStyleProvider:(id)arg1;
- (void)setHiddenOnClonedDisplay:(BOOL)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)viewDidDisappear:(BOOL)arg1;

@end
