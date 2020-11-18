//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNSaveRequest.h>

@class NSMutableSet, NSSet;

@interface CNSuggestedSaveRequest : CNSaveRequest
{
    NSMutableSet *_mutableConfirmedSuggestions;
    NSMutableSet *_mutableRejectedSuggestions;
}

@property (readonly, copy, nonatomic) NSSet *confirmedSuggestions;
@property (strong, nonatomic) NSMutableSet *mutableConfirmedSuggestions; // @synthesize mutableConfirmedSuggestions=_mutableConfirmedSuggestions;
@property (strong, nonatomic) NSMutableSet *mutableRejectedSuggestions; // @synthesize mutableRejectedSuggestions=_mutableRejectedSuggestions;
@property (readonly, copy, nonatomic) NSSet *rejectedSuggestions;

- (void).cxx_destruct;
- (void)confirmSuggestion:(id)arg1;
- (void)rejectSuggestion:(id)arg1;
- (id)storeIdentifier;

@end

