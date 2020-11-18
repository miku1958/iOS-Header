//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteUsageMonitorProbe-Protocol.h>

@class CNAutocompleteAggdProbe, NSNumber, NSString;

@interface CNAutocompleteAggdUsageMonitorProbe : NSObject <CNAutocompleteUsageMonitorProbe>
{
    CNAutocompleteAggdProbe *_aggdProbe;
    NSNumber *_selectedIndex;
    NSNumber *_selectedPredictionIndex;
    NSNumber *_lengthOfSearchString;
    NSNumber *_sourceType;
    NSNumber *_returnedDuetResults;
}

@property (strong, nonatomic) CNAutocompleteAggdProbe *aggdProbe; // @synthesize aggdProbe=_aggdProbe;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSNumber *lengthOfSearchString; // @synthesize lengthOfSearchString=_lengthOfSearchString;
@property (strong, nonatomic) NSNumber *returnedDuetResults; // @synthesize returnedDuetResults=_returnedDuetResults;
@property (strong, nonatomic) NSNumber *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property (strong, nonatomic) NSNumber *selectedPredictionIndex; // @synthesize selectedPredictionIndex=_selectedPredictionIndex;
@property (strong, nonatomic) NSNumber *sourceType; // @synthesize sourceType=_sourceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAggdProbe:(id)arg1;
- (void)recordDuetReturnedResults:(BOOL)arg1;
- (void)recordUserIgnoredPredictionAfterDelay:(double)arg1;
- (void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2;
- (void)recordUserSawCuratedResults:(unsigned long long)arg1;
- (void)recordUserSawPredictions;
- (void)recordUserSawResultsConsideredSuggestion:(unsigned long long)arg1;
- (void)recordUserSelectedIndex:(unsigned long long)arg1;
- (void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1;
- (void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1;
- (void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1;
- (void)sendData;
- (id)sourceKeysForSourceType:(unsigned long long)arg1;

@end

