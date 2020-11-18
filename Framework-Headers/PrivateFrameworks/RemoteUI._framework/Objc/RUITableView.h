//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import <RemoteUI/RUITableViewRowDelegate-Protocol.h>
#import <RemoteUI/RUITableViewSectionDelegate-Protocol.h>
#import <RemoteUI/RUIWebViewDelegate-Protocol.h>
#import <RemoteUI/UITableViewDataSource-Protocol.h>
#import <RemoteUI/UITableViewDelegate-Protocol.h>

@class NSDate, NSDictionary, NSIndexPath, NSMutableArray, NSString, RUIBarButtonItem, RUIHeaderView, RUIObjectModel, RUIPhotoPicker, RUITableViewRow, UIDatePicker, UIPickerView, UITableView, _UIBackdropView;
@protocol RUITableViewDelegate;

@interface RUITableView : RUIElement <UITableViewDataSource, UITableViewDelegate, RUIWebViewDelegate, RUITableViewRowDelegate, RUITableViewSectionDelegate>
{
    NSMutableArray *_sections;
    UITableView *_tableView;
    UIPickerView *_selectPicker;
    BOOL _showSelectPicker;
    UIDatePicker *_datePicker;
    RUIPhotoPicker *_photoPicker;
    BOOL _showDatePicker;
    _UIBackdropView *_pickerBackdrop;
    NSIndexPath *_pickerRowIndexPath;
    NSIndexPath *_embeddedPickerRowIndexPath;
    RUITableViewRow *_defaultFirstResponderRow;
    BOOL _registeredForNotifications;
    float _lastLayoutWidth;
    float _fullscreenCellHeight;
    BOOL _showingPickerNavBarButtons;
    RUIBarButtonItem *_oldLeftBarButtonItemForPicker;
    RUIBarButtonItem *_oldRightBarButtonItemForPicker;
    NSDate *_oldPickerDate;
    NSString *_headerText;
    NSDictionary *_headerAttributes;
    NSString *_subHeaderText;
    NSDictionary *_subHeaderAttributes;
    RUIObjectModel<RUITableViewDelegate> *_objectModel;
    NSDictionary *_footerViewAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) RUITableViewRow *defaultFirstResponderRow; // @synthesize defaultFirstResponderRow=_defaultFirstResponderRow;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDictionary *footerViewAttributes; // @synthesize footerViewAttributes=_footerViewAttributes;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *headerTitle;
@property (readonly, nonatomic) RUIHeaderView *headerView;
@property (readonly, nonatomic) NSDictionary *headerViewAttributes;
@property (weak, nonatomic) RUIObjectModel<RUITableViewDelegate> *objectModel; // @synthesize objectModel=_objectModel;
@property (readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property (readonly, nonatomic, getter=isShowingPicker) BOOL showingPicker;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_becomeFirstResponderAtIndexPath:(id)arg1;
- (void)_clearPickers;
- (void)_datePickerRevert;
- (void)_enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_hideDatePickerNavBarButtonsIfNeeded;
- (void)_loadHeaderView;
- (id)_objectModelIndexPathForIndexPath:(id)arg1;
- (void)_registerForNotifications:(BOOL)arg1;
- (struct CGRect)_selectPickerFrame;
- (void)_setBottomInset:(float)arg1;
- (void)_setHeaderText:(id)arg1 attributes:(id)arg2;
- (void)_setSubHeaderText:(id)arg1 attributes:(id)arg2;
- (void)_showDatePickerNavBarButtonsIfNeededForRow:(id)arg1;
- (void)_textChanged:(id)arg1;
- (void)activateRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)automaticKeyboardDidHide:(id)arg1;
- (void)automaticKeyboardDidShow:(id)arg1;
- (void)datePickerCancel:(id)arg1;
- (void)datePickerDone:(id)arg1;
- (void)dealloc;
- (void)hidePickerViewAnimated:(BOOL)arg1;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (id)indexPathForRow:(id)arg1;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)objectModelRowForIndexPath:(id)arg1;
- (void)populatePostbackDictionary:(id)arg1;
- (void)row:(id)arg1 activatedElement:(id)arg2;
- (void)rowDidChange:(id)arg1 action:(int)arg2;
- (void)rowDidEndEditing:(id)arg1;
- (void)rowIsFirstResponder:(id)arg1;
- (id)rowWithIdentifier:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)section:(id)arg1 activatedElement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAttributes:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setSelectedRadioGroupRow:(id)arg1;
- (void)showPickerViewForRow:(id)arg1 animated:(BOOL)arg2;
- (id)sourceURL;
- (id)sourceURLForRUITableViewRow;
- (id)sourceURLForRUITableViewSection;
- (id)subElementsWithName:(id)arg1;
- (Class)tableCellClassForTableViewRow:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)textFieldRow:(id)arg1 changeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldStartedEditing:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayout;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)webViewOM:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

@end
