//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class EKEvent, EKUIEventInviteesEditViewController, EKUIEventInviteesView, EKUIInviteeAlternativeTimeSearcher, EKUIInviteesViewAllInviteesCanAttendSection, EKUIInviteesViewInvisibleInviteeStatusSection, EKUIInviteesViewNotRespondedInviteesSection, EKUIInviteesViewOriginalConflictSection, EKUIInviteesViewRespondedInviteesSection, EKUIInviteesViewSomeInviteesCanAttendSection, NSArray, NSDate, NSString;
@protocol EKEditItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EKUIEventInviteesViewController : UITableViewController <EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKEditItemViewControllerProtocol>
{
    BOOL _resetAttendeesSections;
    BOOL _resetConflictResolutionSections;
    BOOL _viewIsVisible;
    BOOL _editable;
    EKUIEventInviteesEditViewController *_parentController;
    NSDate *_selectedStartDate;
    NSDate *_selectedEndDate;
    EKUIEventInviteesView *_inviteesView;
    EKEvent *_event;
    NSArray *_sections;
    EKUIInviteesViewRespondedInviteesSection *_respondedSection;
    EKUIInviteesViewNotRespondedInviteesSection *_notRespondedSection;
    EKUIInviteesViewInvisibleInviteeStatusSection *_invisibleInviteeStatusSection;
    EKUIInviteesViewOriginalConflictSection *_originalConflictSection;
    EKUIInviteesViewSomeInviteesCanAttendSection *_someInviteesCanAttendSection;
    EKUIInviteesViewAllInviteesCanAttendSection *_allInviteesCanAttendSection;
    EKUIInviteeAlternativeTimeSearcher *_availabilitySearcher;
}

@property (strong, nonatomic) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection; // @synthesize allInviteesCanAttendSection=_allInviteesCanAttendSection;
@property (strong, nonatomic) EKUIInviteeAlternativeTimeSearcher *availabilitySearcher; // @synthesize availabilitySearcher=_availabilitySearcher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL editable; // @synthesize editable=_editable;
@property (strong, nonatomic) EKEvent *event; // @synthesize event=_event;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) EKUIInviteesViewInvisibleInviteeStatusSection *invisibleInviteeStatusSection; // @synthesize invisibleInviteeStatusSection=_invisibleInviteeStatusSection;
@property (strong, nonatomic) EKUIEventInviteesView *inviteesView; // @synthesize inviteesView=_inviteesView;
@property (strong, nonatomic) EKUIInviteesViewNotRespondedInviteesSection *notRespondedSection; // @synthesize notRespondedSection=_notRespondedSection;
@property (strong, nonatomic) EKUIInviteesViewOriginalConflictSection *originalConflictSection; // @synthesize originalConflictSection=_originalConflictSection;
@property (weak, nonatomic) EKUIEventInviteesEditViewController *parentController; // @synthesize parentController=_parentController;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL resetAttendeesSections; // @synthesize resetAttendeesSections=_resetAttendeesSections;
@property (nonatomic) BOOL resetConflictResolutionSections; // @synthesize resetConflictResolutionSections=_resetConflictResolutionSections;
@property (strong, nonatomic) EKUIInviteesViewRespondedInviteesSection *respondedSection; // @synthesize respondedSection=_respondedSection;
@property (strong, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property (strong, nonatomic) NSDate *selectedEndDate; // @synthesize selectedEndDate=_selectedEndDate;
@property (strong, nonatomic) NSDate *selectedStartDate; // @synthesize selectedStartDate=_selectedStartDate;
@property (strong, nonatomic) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection; // @synthesize someInviteesCanAttendSection=_someInviteesCanAttendSection;
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;

+ (id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2;
- (void).cxx_destruct;
- (id)_attendeesWithoutOrganizerAndLocations;
- (void)_dismissPresentedViewControllerAnimated:(BOOL)arg1;
- (void)_eventModified:(id)arg1;
- (void)_fontSizeDefinitionsChanged:(id)arg1;
- (long long)_indexForSection:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_refreshIfNeeded;
- (void)_requestDismissal;
- (void)_searcherStateChanged:(long long)arg1;
- (id)_sectionForIndex:(unsigned long long)arg1;
- (void)_sendMessageToParticipants:(id)arg1;
- (id)_viewControllerForPresentingViewControllers;
- (void)dealloc;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

