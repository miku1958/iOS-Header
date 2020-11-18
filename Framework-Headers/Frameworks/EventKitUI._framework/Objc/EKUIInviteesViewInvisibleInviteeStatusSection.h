//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/EKUIInviteesViewSection-Protocol.h>

@class EKEvent, NSMutableArray, NSString;

@interface EKUIInviteesViewInvisibleInviteeStatusSection : NSObject <EKUIInviteesViewSection>
{
    BOOL _editable;
    CDUnknownBlockType _participantTapped;
    CDUnknownBlockType _participantRemoved;
    NSMutableArray *_participants;
    EKEvent *_event;
    NSString *_cachedCellReuseIdentifier;
    unsigned long long _reuseIdentifierVersion;
    CDUnknownBlockType _tableViewCellHook;
}

@property (strong, nonatomic) NSString *cachedCellReuseIdentifier; // @synthesize cachedCellReuseIdentifier=_cachedCellReuseIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editable; // @synthesize editable=_editable;
@property (strong, nonatomic) EKEvent *event; // @synthesize event=_event;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType participantRemoved; // @synthesize participantRemoved=_participantRemoved;
@property (copy, nonatomic) CDUnknownBlockType participantTapped; // @synthesize participantTapped=_participantTapped;
@property (strong, nonatomic) NSMutableArray *participants; // @synthesize participants=_participants;
@property (nonatomic) unsigned long long reuseIdentifierVersion; // @synthesize reuseIdentifierVersion=_reuseIdentifierVersion;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType tableViewCellHook; // @synthesize tableViewCellHook=_tableViewCellHook;

- (void).cxx_destruct;
- (BOOL)_isValidRow:(long long)arg1;
- (BOOL)canEditRow:(id)arg1;
- (BOOL)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (id)debugTitle;
- (long long)editingStyleForRow:(id)arg1;
- (double)estimatedHeightForRow:(id)arg1;
- (id)headerTitle;
- (unsigned long long)numberOfRows;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (BOOL)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (void)updateWithEvent:(id)arg1 editable:(BOOL)arg2 fromDetail:(BOOL)arg3;

@end

