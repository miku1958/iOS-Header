//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, NSString;

@protocol CNContactViewHostProtocol <NSObject>
- (void)didChangePreferredContentSize:(struct CGSize)arg1;
- (void)didCompleteWithContact:(CNContact *)arg1;
- (void)didDeleteContact:(CNContact *)arg1;
- (void)didExecuteClearRecentsDataAction;
- (void)didExecuteDeleteFromDowntimeWhitelistAction;
- (void)isPresentingEditingController:(BOOL)arg1;
- (void)isPresentingFullscreen:(BOOL)arg1;
- (void)presentCancelConfirmationAlert;
- (BOOL)shouldPerformDefaultActionForContact:(CNContact *)arg1 propertyKey:(NSString *)arg2 propertyIdentifier:(NSString *)arg3;
- (void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(NSString *)arg3;
- (void)viewDidAppear;
@end

