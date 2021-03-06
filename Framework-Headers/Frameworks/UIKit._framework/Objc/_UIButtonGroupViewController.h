//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSArray, NSString, UIScrollView, _UIButtonBar;

__attribute__((visibility("hidden")))
@interface _UIButtonGroupViewController : UIViewController <UIPopoverPresentationControllerDelegate>
{
    _UIButtonBar *_originalOwner;
    _UIButtonBar *_buttonBar;
    UIScrollView *_scrollView;
    NSArray *_barButtonItemGroups;
    BOOL _overLightKeyboard;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_cleanupForDismissal;
- (void)dismissIfNecessary;
- (id)initWithBarButtonItemGroups:(id)arg1 fromButtonBar:(id)arg2 createsPopoverLayoutGuides:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

