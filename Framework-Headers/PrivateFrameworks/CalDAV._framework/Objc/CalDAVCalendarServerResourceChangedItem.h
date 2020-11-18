//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class ICSDateValue, NSMutableSet;

@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem
{
    NSMutableSet *_created;
    NSMutableSet *_updated;
    NSMutableSet *_deleted;
    NSMutableSet *_collectionChanges;
    NSMutableSet *_collectionUpdates;
    ICSDateValue *_dtstamp;
}

@property (strong, nonatomic) NSMutableSet *collectionChanges; // @synthesize collectionChanges=_collectionChanges;
@property (strong, nonatomic) NSMutableSet *collectionUpdates; // @synthesize collectionUpdates=_collectionUpdates;
@property (strong, nonatomic) NSMutableSet *created; // @synthesize created=_created;
@property (strong, nonatomic) NSMutableSet *deleted; // @synthesize deleted=_deleted;
@property (strong, nonatomic) ICSDateValue *dtstamp; // @synthesize dtstamp=_dtstamp;
@property (strong, nonatomic) NSMutableSet *updated; // @synthesize updated=_updated;

- (void).cxx_destruct;
- (void)addCollectionChanges:(id)arg1;
- (void)addCollectionUpdates:(id)arg1;
- (void)addCreated:(id)arg1;
- (void)addDeleted:(id)arg1;
- (void)addUpdated:(id)arg1;
- (id)copyParseRules;
- (id)init;
- (void)setDtstampItem:(id)arg1;

@end

