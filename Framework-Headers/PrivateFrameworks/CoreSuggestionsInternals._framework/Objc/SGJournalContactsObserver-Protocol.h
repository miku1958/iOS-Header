//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGJournalBaseObserver-Protocol.h>

@class SGStorageContact;

@protocol SGJournalContactsObserver <SGJournalBaseObserver>
- (void)addContact:(SGStorageContact *)arg1;
- (void)confirmContact:(SGStorageContact *)arg1;
- (void)rejectContact:(SGStorageContact *)arg1;
- (void)removeAllStoredPseudoContacts;
@end

