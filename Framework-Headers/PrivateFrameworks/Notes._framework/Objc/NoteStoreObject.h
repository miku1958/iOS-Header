//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/NoteCollectionObject.h>

@class NSSet, NSString, NoteAccountObject;

@interface NoteStoreObject : NoteCollectionObject
{
}

@property (strong, nonatomic) NoteAccountObject *account; // @dynamic account;
@property (strong, nonatomic) NSSet *changes; // @dynamic changes;
@property (strong, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property (strong, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) NSString *syncAnchor; // @dynamic syncAnchor;

- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (unsigned int)maximumServerIntId;
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)notesForGUIDs:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)notesForServerIds:(id)arg1;
- (id)notesForServerIntIds:(id)arg1;
- (id)notesForServerIntIds:(id)arg1 ascending:(BOOL)arg2 limit:(unsigned long long)arg3;
- (id)notesForServerIntIdsInRange:(struct _NSRange)arg1;
- (id)notesForServerIntIdsInRange:(struct _NSRange)arg1 ascending:(BOOL)arg2 limit:(unsigned long long)arg3;
- (id)predicateForNotes;

@end

