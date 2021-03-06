//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <EventKitUI/EKCalendarItemEditItemDelegate-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>
#import <EventKitUI/EKEventDateEditItemDelegate-Protocol.h>
#import <EventKitUI/EKUIEventStatusButtonsViewDelegate-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class EKEvent, EKEventDateEditItem, EKInviteeAlternativeTimeSearcher, EKUIEventStatusButtonsView, EKUIInviteesViewAllInviteesCanAttendSection, EKUIInviteesViewMessageSendingManager, EKUIInviteesViewOriginalConflictSection, EKUIInviteesViewSomeInviteesCanAttendSection, NSArray, NSDate, NSString, SingleToolbarItemContainerView;
@protocol EKEditItemViewControllerDelegate;

@interface EKEventProposeNewTimeViewController : UITableViewController <EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKCalendarItemEditItemDelegate, EKEventDateEditItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEditItemViewControllerProtocol>
{
    BOOL _resetConflictResolutionSections;
    BOOL _viewIsVisible;
    NSDate *_selectedStartDate;
    NSDate *_selectedEndDate;
    NSDate *_originalDate;
    EKEvent *_event;
    EKUIEventStatusButtonsView *_statusButtonsView;
    SingleToolbarItemContainerView *_statusButtonsContainerView;
    double _statusButtonsViewCachedFontSize;
    NSDate *_proposedStartDate;
    NSArray *_sections;
    EKEventDateEditItem *_proposeTimeItem;
    EKUIInviteesViewOriginalConflictSection *_originalConflictSection;
    EKUIInviteesViewSomeInviteesCanAttendSection *_someInviteesCanAttendSection;
    EKUIInviteesViewAllInviteesCanAttendSection *_allInviteesCanAttendSection;
    EKInviteeAlternativeTimeSearcher *_availabilitySearcher;
    EKUIInviteesViewMessageSendingManager *_messageSendingManager;
}

@property (strong, nonatomic) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection; // @synthesize allInviteesCanAttendSection=_allInviteesCanAttendSection;
@property (strong, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // @synthesize availabilitySearcher=_availabilitySearcher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (strong, nonatomic) EKEvent *event; // @synthesize event=_event;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) EKUIInviteesViewMessageSendingManager *messageSendingManager; // @synthesize messageSendingManager=_messageSendingManager;
@property (strong, nonatomic) EKUIInviteesViewOriginalConflictSection *originalConflictSection; // @synthesize originalConflictSection=_originalConflictSection;
@property (strong, nonatomic) NSDate *originalDate; // @synthesize originalDate=_originalDate;
@property (nonatomic) BOOL presentModally;
@property (strong, nonatomic) EKEventDateEditItem *proposeTimeItem; // @synthesize proposeTimeItem=_proposeTimeItem;
@property (strong, nonatomic) NSDate *proposedStartDate; // @synthesize proposedStartDate=_proposedStartDate;
@property (nonatomic) BOOL resetConflictResolutionSections; // @synthesize resetConflictResolutionSections=_resetConflictResolutionSections;
@property (strong, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property (readonly, nonatomic) NSDate *selectedEndDate; // @synthesize selectedEndDate=_selectedEndDate;
@property (readonly, nonatomic) NSDate *selectedStartDate; // @synthesize selectedStartDate=_selectedStartDate;
@property (strong, nonatomic) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection; // @synthesize someInviteesCanAttendSection=_someInviteesCanAttendSection;
@property (strong, nonatomic) SingleToolbarItemContainerView *statusButtonsContainerView; // @synthesize statusButtonsContainerView=_statusButtonsContainerView;
@property (strong, nonatomic) EKUIEventStatusButtonsView *statusButtonsView; // @synthesize statusButtonsView=_statusButtonsView;
@property (nonatomic) double statusButtonsViewCachedFontSize; // @synthesize statusButtonsViewCachedFontSize=_statusButtonsViewCachedFontSize;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCustomBackButton;
@property (nonatomic) BOOL viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;

+ (id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2;
- (void).cxx_destruct;
- (void)_dismiss:(id)arg1;
- (void)_dismissPresentedViewControllerAnimated:(BOOL)arg1;
- (void)_eventModified:(id)arg1;
- (void)_fontSizeDefinitionsChanged:(id)arg1;
- (long long)_indexForSection:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_refreshIfNeeded;
- (void)_searcherStateChanged:(long long)arg1;
- (id)_sectionForIndex:(unsigned long long)arg1;
- (id)_statusButtons;
- (void)_updateStatusButtons;
- (id)_viewControllerForPresentingViewControllers;
- (void)dateChangedTo:(id)arg1;
- (void)dealloc;
- (id)defaultAlertTitleForEditItem:(id)arg1;
- (void)editItem:(id)arg1 wantsDoneButtonDisabled:(BOOL)arg2;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)editItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2;
- (id)editItemEventToDetach;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2;
- (void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ifCancelled:(CDUnknownBlockType)arg3;
- (double)eventStatusButtonsViewButtonFontSize:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (BOOL)proposedTimeChanged;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCheckmark;
- (void)updateCustomBackButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

