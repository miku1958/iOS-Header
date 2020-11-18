//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, NoteContext;

@interface DALocalDBWatcher : NSObject
{
    int _lastSavedCalSequenceNumber;
    int _lastSavedABSequenceNumber;
    void *_abWatcher;
    struct CalDatabase *_calWatcher;
    NoteContext *_noteWatcher;
    NSMapTable *_concernedABPartyToBlockMap;
    NSMapTable *_concernedCalPartyToBlockMap;
    NSMapTable *_concernedNotePartyToBlockMap;
    BOOL _watchingBookmarks;
    NSMapTable *_concernedBookmarkPartyToBlockMap;
}

@property (nonatomic) int lastSavedABSequenceNumber; // @synthesize lastSavedABSequenceNumber=_lastSavedABSequenceNumber;
@property (nonatomic) int lastSavedCalSequenceNumber; // @synthesize lastSavedCalSequenceNumber=_lastSavedCalSequenceNumber;

+ (id)sharedDBWatcher;
- (void).cxx_destruct;
- (void)_handleABChangeNotificationWithInfo:(id)arg1;
- (void)_handleBookmarkChangeNotification;
- (void)_handleCalChangeNotification;
- (void)_notesChangedExternally;
- (void)dealloc;
- (void)didReceiveDarwinNotification:(id)arg1;
- (id)init;
- (void)noteABDBDirChanged;
- (void)noteCalDBDirChanged;
- (void)registerConcernedABParty:(id)arg1 withChangedBlock:(CDUnknownBlockType)arg2;
- (void)registerConcernedBookmarkParty:(id)arg1 withChangedBlock:(CDUnknownBlockType)arg2;
- (void)registerConcernedCalParty:(id)arg1 withChangedBlock:(CDUnknownBlockType)arg2;
- (void)registerConcernedNoteParty:(id)arg1 withChangedBlock:(CDUnknownBlockType)arg2;
- (void)removeConcernedABParty:(id)arg1;
- (void)removeConcernedBookmarkParty:(id)arg1;
- (void)removeConcernedCalParty:(id)arg1;
- (void)removeConcernedNoteParty:(id)arg1;

@end

