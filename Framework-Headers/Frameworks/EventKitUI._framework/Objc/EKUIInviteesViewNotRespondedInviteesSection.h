//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/EKUIInviteesViewSection-Protocol.h>

@class EKEvent, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface EKUIInviteesViewNotRespondedInviteesSection : NSObject <EKUIInviteesViewSection>
{
    BOOL _canSeeAttendeeStatuses;
    BOOL _editable;
    CDUnknownBlockType _participantTapped;
    CDUnknownBlockType _participantRemoved;
    CDUnknownBlockType _addInviteesTapped;
    CDUnknownBlockType _participantSetRole;
    NSMutableArray *_participants;
    EKEvent *_event;
    NSString *_cachedInviteeCellReuseIdentifier;
    NSString *_cachedAddInviteeCellReuseIdentifier;
    unsigned long long _reuseIdentifierVersion;
    NSOperationQueue *_availabilityRequestsQueue;
    NSMutableDictionary *_participantAddressesToAvailabilityType;
    NSMutableDictionary *_participantAddressesToParticipantIndex;
    NSMutableSet *_participantAddressesForInFlightAvailabilityOperations;
    CDUnknownBlockType _tableViewCellHook;
}

@property (copy, nonatomic) CDUnknownBlockType addInviteesTapped; // @synthesize addInviteesTapped=_addInviteesTapped;
@property (strong, nonatomic) NSOperationQueue *availabilityRequestsQueue; // @synthesize availabilityRequestsQueue=_availabilityRequestsQueue;
@property (strong, nonatomic) NSString *cachedAddInviteeCellReuseIdentifier; // @synthesize cachedAddInviteeCellReuseIdentifier=_cachedAddInviteeCellReuseIdentifier;
@property (strong, nonatomic) NSString *cachedInviteeCellReuseIdentifier; // @synthesize cachedInviteeCellReuseIdentifier=_cachedInviteeCellReuseIdentifier;
@property (nonatomic) BOOL canSeeAttendeeStatuses; // @synthesize canSeeAttendeeStatuses=_canSeeAttendeeStatuses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editable; // @synthesize editable=_editable;
@property (strong, nonatomic) EKEvent *event; // @synthesize event=_event;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableSet *participantAddressesForInFlightAvailabilityOperations; // @synthesize participantAddressesForInFlightAvailabilityOperations=_participantAddressesForInFlightAvailabilityOperations;
@property (strong, nonatomic) NSMutableDictionary *participantAddressesToAvailabilityType; // @synthesize participantAddressesToAvailabilityType=_participantAddressesToAvailabilityType;
@property (strong, nonatomic) NSMutableDictionary *participantAddressesToParticipantIndex; // @synthesize participantAddressesToParticipantIndex=_participantAddressesToParticipantIndex;
@property (copy, nonatomic) CDUnknownBlockType participantRemoved; // @synthesize participantRemoved=_participantRemoved;
@property (copy, nonatomic) CDUnknownBlockType participantSetRole; // @synthesize participantSetRole=_participantSetRole;
@property (copy, nonatomic) CDUnknownBlockType participantTapped; // @synthesize participantTapped=_participantTapped;
@property (strong, nonatomic) NSMutableArray *participants; // @synthesize participants=_participants;
@property (nonatomic) unsigned long long reuseIdentifierVersion; // @synthesize reuseIdentifierVersion=_reuseIdentifierVersion;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType tableViewCellHook; // @synthesize tableViewCellHook=_tableViewCellHook;

+ (id)_participantAddressForParticipant:(id)arg1;
- (void).cxx_destruct;
- (void)_addAddressToSetOfAddressesToInflightOperations:(id)arg1;
- (BOOL)_isAddInviteesRow:(long long)arg1;
- (BOOL)_isValidRow:(long long)arg1;
- (id)_lookUpAvailabilityTypeForParticipantAddress:(id)arg1;
- (id)_lookUpParticipantIndexForParticipantAddress:(id)arg1;
- (void)_removeAddressFromDictionaryOfAddressesToAvailabilityType:(id)arg1;
- (void)_removeAddressFromDictionaryOfAddressesToParticipantIndex:(id)arg1;
- (void)_removeAddressFromSetOfAddressesToInflightOperations:(id)arg1;
- (void)_removeParticipantAtIndexPath:(id)arg1;
- (void)_setAvailabilityType:(id)arg1 forParticipantAddress:(id)arg2;
- (BOOL)_setOfAddressesToInflightOperationsContainsAddress:(id)arg1;
- (void)_setParticipantIndex:(id)arg1 forParticipantAddress:(id)arg2;
- (void)_updateCell:(id)arg1 forParticipantAtIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)_updateCellForParticipantWithAddress:(id)arg1;
- (id)actionsForRow:(id)arg1;
- (BOOL)canEditRow:(id)arg1;
- (BOOL)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (void)dealloc;
- (id)debugTitle;
- (long long)editingStyleForRow:(id)arg1;
- (double)estimatedHeightForRow:(id)arg1;
- (id)headerTitle;
- (id)init;
- (unsigned long long)numberOfRows;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (BOOL)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (void)updateWithEvent:(id)arg1 editable:(BOOL)arg2 fromDetail:(BOOL)arg3;

@end

