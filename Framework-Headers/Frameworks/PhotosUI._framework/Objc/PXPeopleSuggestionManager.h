//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, PXPeoplePagingSuggestionProvider, PXSuggestionToken;
@protocol PXPeopleSuggestionManagerDataSource, PXPeopleSuggestionManagerDelegate, PXPerson;

@interface PXPeopleSuggestionManager : NSObject
{
    BOOL _mute;
    BOOL _didReachEnd;
    unsigned int _confirmYesSoundID;
    unsigned int _confirmNoSoundID;
    id<PXPeopleSuggestionManagerDelegate> _delegate;
    id<PXPeopleSuggestionManagerDataSource> _dataSource;
    id<PXPerson> _person;
    unsigned long long _userConfirmationsCount;
    unsigned long long _autoConfirmationsCount;
    NSMutableSet *_skippedSuggestions;
    PXSuggestionToken *_suggestionToken;
    PXPeoplePagingSuggestionProvider *_suggestionProvider;
    NSMutableSet *_confirmedSuggestions;
    NSMutableSet *_rejectedSuggestions;
}

@property (nonatomic) unsigned long long autoConfirmationsCount; // @synthesize autoConfirmationsCount=_autoConfirmationsCount;
@property (readonly, nonatomic) BOOL canUndo;
@property (nonatomic) unsigned int confirmNoSoundID; // @synthesize confirmNoSoundID=_confirmNoSoundID;
@property (nonatomic) unsigned int confirmYesSoundID; // @synthesize confirmYesSoundID=_confirmYesSoundID;
@property (strong, nonatomic) NSMutableSet *confirmedSuggestions; // @synthesize confirmedSuggestions=_confirmedSuggestions;
@property (readonly, nonatomic) NSArray *currentSuggestions;
@property (strong, nonatomic) id<PXPeopleSuggestionManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (weak, nonatomic) id<PXPeopleSuggestionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL didReachEnd; // @synthesize didReachEnd=_didReachEnd;
@property (readonly, nonatomic) BOOL isLoading;
@property (nonatomic) BOOL mute; // @synthesize mute=_mute;
@property (strong, nonatomic) id<PXPerson> person; // @synthesize person=_person;
@property (strong, nonatomic) NSMutableSet *rejectedSuggestions; // @synthesize rejectedSuggestions=_rejectedSuggestions;
@property (strong, nonatomic) NSMutableSet *skippedSuggestions; // @synthesize skippedSuggestions=_skippedSuggestions;
@property (strong, nonatomic) PXPeoplePagingSuggestionProvider *suggestionProvider; // @synthesize suggestionProvider=_suggestionProvider;
@property (strong, nonatomic) PXSuggestionToken *suggestionToken; // @synthesize suggestionToken=_suggestionToken;
@property (nonatomic) unsigned long long userConfirmationsCount; // @synthesize userConfirmationsCount=_userConfirmationsCount;

- (void).cxx_destruct;
- (BOOL)_fetchingSuggestions;
- (void)_loadMoreSuggestionsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_nonSkippedSuggestionsForSuggestions:(id)arg1;
- (void)_notifyDelegateWeHaveMoreSuggestions:(BOOL)arg1;
- (void)_playConfirmNoSound;
- (void)_playConfirmYesSound;
- (unsigned int)_soundIdWithFilename:(id)arg1;
- (void)cancelPendingSuggestionLoading;
- (void)commitUserResponses;
- (id)commitUserResponsesToPerson:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPerson:(id)arg1;
- (BOOL)isSuggestionConfirmed:(id)arg1;
- (void)markSuggestions:(id)arg1 confirmed:(BOOL)arg2;
- (void)markSuggestionsAsSkipped:(id)arg1;
- (void)preloadSounds;
- (void)requestNextSuggestion;
- (void)requestNextSuggestionsWithPageLimit:(unsigned long long)arg1;
- (void)undo;

@end

