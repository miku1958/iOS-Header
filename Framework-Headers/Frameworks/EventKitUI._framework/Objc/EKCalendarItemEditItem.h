//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>

@class EKCalendarItem, EKEventStore, NSString, UIResponder, UIViewController;
@protocol EKCalendarItemEditItemDelegate, EKEditItemViewControllerProtocol, EKStyleProvider;

__attribute__((visibility("hidden")))
@interface EKCalendarItemEditItem : NSObject <EKEditItemViewControllerDelegate>
{
    EKEventStore *_store;
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;
    EKCalendarItem *_calendarItem;
    id<EKCalendarItemEditItemDelegate> _delegate;
    id<EKStyleProvider> _styleProvider;
    UIResponder *_selectedResponder;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EKCalendarItemEditItemDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIResponder *selectedResponder; // @synthesize selectedResponder=_selectedResponder;
@property (strong, nonatomic) id<EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)applicationDidResume;
- (id)calendarItem;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inEditor:(id)arg2;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)editItemEventToDetach;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)editItemViewControllerSave:(id)arg1;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (void)editItemViewControllerWantsKeyboardPinned:(BOOL)arg1;
- (BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didDeselectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (void)editor:(id)arg1 requestsInjectableViewControllerToBeShownForSubitem:(unsigned long long)arg2;
- (BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2;
- (void)editorDidScroll:(id)arg1;
- (void)endInlineEditing;
- (double)footerHeightForWidth:(double)arg1;
- (id)footerTitle;
- (id)footerView;
- (BOOL)forceRefreshInviteesItemOnSave;
- (BOOL)forceRefreshLocationItemOnSave;
- (BOOL)forceRefreshStartAndEndDatesOnSave;
- (BOOL)forceTableReloadOnSave;
- (id)headerTitle;
- (id)injectableViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (BOOL)isInline;
- (void)notifyDidEndEditing;
- (void)notifyDidStartEditing;
- (void)notifyRequiresHeightChange;
- (void)notifySubitemDidSave:(unsigned long long)arg1;
- (void)notifyTextChanged;
- (unsigned long long)numberOfSubitems;
- (BOOL)prefersTargettedTableReloadOnSave;
- (void)prepareForReload;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)requiresReconfigurationOnSave;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (BOOL)shouldAppearWithVisibility:(int)arg1;
- (BOOL)shouldPinKeyboard;
- (void)showViewController:(id)arg1 editor:(id)arg2 animated:(BOOL)arg3;
- (void)tableViewDidScroll;
- (id)trailingSwipeActionsConfigurationForRowAtIndex:(long long)arg1;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (id)viewForActionSheet;

@end
