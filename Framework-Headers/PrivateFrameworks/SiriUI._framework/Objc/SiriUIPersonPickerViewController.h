//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIObjectPickerViewController.h>

#import <SiriUI/ABPeoplePickerNavigationControllerDelegate-Protocol.h>

@class NSString, UIViewController;

@interface SiriUIPersonPickerViewController : SiriUIObjectPickerViewController <ABPeoplePickerNavigationControllerDelegate>
{
    UIViewController *_presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_abAssistantManager;
- (void)_dismissPicker;
- (id)_pickerResponseForPerson:(void *)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)showPicker:(id)arg1;

@end
