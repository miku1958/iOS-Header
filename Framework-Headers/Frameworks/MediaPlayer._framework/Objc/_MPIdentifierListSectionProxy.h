//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPMutableIdentifierListSection-Protocol.h>

@class MPSectionedIdentifierList, NSArray, NSMutableArray, NSString;

@interface _MPIdentifierListSectionProxy : NSObject <MPMutableIdentifierListSection>
{
    NSString *_sectionIdentifier;
    MPSectionedIdentifierList *_sectionedIdentifierList;
    NSMutableArray *_mutableItemIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (strong, nonatomic) NSMutableArray *mutableItemIdentifiers; // @synthesize mutableItemIdentifiers=_mutableItemIdentifiers;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property (readonly, weak, nonatomic) MPSectionedIdentifierList *sectionedIdentifierList; // @synthesize sectionedIdentifierList=_sectionedIdentifierList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyChanges:(id)arg1 itemLookupBlock:(CDUnknownBlockType)arg2;
- (id)initWithSection:(id)arg1 sectionedIdentifierList:(id)arg2 existingItemIdentifiers:(id)arg3;
- (void)insertItems:(id)arg1 afterItem:(id)arg2;
- (void)insertItemsAtHead:(id)arg1;
- (void)insertItemsAtTail:(id)arg1;
- (void)moveItem:(id)arg1 afterItem:(id)arg2;
- (void)moveItemToHead:(id)arg1;
- (void)moveItemToTail:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)updateItem:(id)arg1;

@end
