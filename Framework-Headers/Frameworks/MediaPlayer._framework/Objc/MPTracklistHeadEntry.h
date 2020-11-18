//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPTracklistEntry.h>

#import <MediaPlayer/MPTracklistEnumerationTrackingEntry-Protocol.h>

@class MPTracklistItemEntry, NSMutableDictionary, NSString;

@interface MPTracklistHeadEntry : MPTracklistEntry <MPTracklistEnumerationTrackingEntry>
{
    NSMutableDictionary *_identifiersItemEntryMap;
    MPTracklistItemEntry *_lastItemEntry;
}

@property (readonly, nonatomic) long long branchDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableDictionary *identifiersItemEntryMap; // @synthesize identifiersItemEntryMap=_identifiersItemEntryMap;
@property (strong, nonatomic) MPTracklistItemEntry *lastItemEntry; // @synthesize lastItemEntry=_lastItemEntry;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly) Class superclass;

+ (id)headEntryWithSectionIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;

@end

