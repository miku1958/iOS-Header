//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, SearchUIWatchListUtilities, WLKCanonicalPlayablesResponse;

@interface SearchUIWatchListCardsManager : NSObject
{
    BOOL _isInUpNext;
    NSHashTable *_rowModels;
    NSString *_watchListIdentifier;
    WLKCanonicalPlayablesResponse *_response;
    SearchUIWatchListUtilities *_watchListUtility;
}

@property BOOL isInUpNext; // @synthesize isInUpNext=_isInUpNext;
@property (strong) WLKCanonicalPlayablesResponse *response; // @synthesize response=_response;
@property (strong) NSHashTable *rowModels; // @synthesize rowModels=_rowModels;
@property (strong) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
@property (strong) SearchUIWatchListUtilities *watchListUtility; // @synthesize watchListUtility=_watchListUtility;

+ (BOOL)isUpNextCardSection:(id)arg1;
- (void).cxx_destruct;
- (void)addWatchListRowModelObserver:(id)arg1;
- (long long)currentUpNextButtonState;
- (id)currentUpNextTextForRowModel:(id)arg1;
- (id)initWithWatchListIdentifier:(id)arg1;
- (BOOL)isTappable;
- (void)toggleUpNextWithDelegate:(id)arg1;

@end

