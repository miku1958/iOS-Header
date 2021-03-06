//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertySimpleCell.h>

#import <ContactsUI/CNPickerControllerDelegate-Protocol.h>

@class CNPropertyGroupAlertItem, NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyAlertCell : CNPropertySimpleCell <CNPickerControllerDelegate>
{
}

@property (readonly, nonatomic) CNPropertyGroupAlertItem *alertItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)shouldIndentWhileEditing;
+ (BOOL)wantsChevron;
- (id)alertGroup;
- (BOOL)allowsCellSelection;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)performDefaultAction;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (BOOL)shouldPerformDefaultAction;

@end

