//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class SBAlertItem;
@protocol _SBAlertControllerDelegate;

@interface _SBAlertController : UIAlertController
{
    SBAlertItem *_alertItem;
    id<_SBAlertControllerDelegate> _alertControllerDelegate;
}

@property (weak, nonatomic) id<_SBAlertControllerDelegate> alertControllerDelegate; // @synthesize alertControllerDelegate=_alertControllerDelegate;
@property (weak, nonatomic) SBAlertItem *alertItem; // @synthesize alertItem=_alertItem;

- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;

@end
