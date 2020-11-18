//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NoteContext;

@interface DALocalDBWatcher : NSObject
{
    int _lastSavedCalSequenceNumber;
    struct CalDatabase *_calWatcher;
    NoteContext *_noteWatcher;
    NSMapTable *_concernedABPartyToBlockMap;
    NSMapTable *_concernedCalPartyToBlockMap;
    NSMapTable *_concernedNotePartyToBlockMap;
}

@property (nonatomic) int lastSavedCalSequenceNumber; // @synthesize lastSavedCalSequenceNumber=_lastSavedCalSequenceNumber;

+ (id)sharedDBWatcher;
- (void).cxx_destruct;
- (void)_handleCalChangeNotification;
- (void)_notesChangedExternally;
- (void)dealloc;
- (void)didReceiveDarwinNotification:(id)arg1;
- (id)init;
- (void)noteCalDBDirChanged;
- (void)registerConcernedCalParty:(id)arg1 withChangedBlock:(CDUnknownBlockType)arg2;
- (void)registerConcernedNoteParty:(id)arg1 withChangedBlock:(CDUnknownBlockType)arg2;
- (void)removeConcernedCalParty:(id)arg1;
- (void)removeConcernedNoteParty:(id)arg1;

@end
