//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <Notes/ICNoteVisibilityTesting-Protocol.h>

@class NSString;

@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (readonly) Class superclass;

- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (BOOL)supportsVisibilityTestingType:(long long)arg1;

@end
