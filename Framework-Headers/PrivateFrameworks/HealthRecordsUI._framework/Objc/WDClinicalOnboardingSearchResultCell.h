//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/WDMedicalRecordBrandCell.h>

@class HKClinicalProviderSearchResult, NSArray;

__attribute__((visibility("hidden")))
@interface WDClinicalOnboardingSearchResultCell : WDMedicalRecordBrandCell
{
    HKClinicalProviderSearchResult *_searchResult;
    NSArray *_searchTerms;
}

@property (copy, nonatomic) HKClinicalProviderSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property (copy, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;

- (void).cxx_destruct;
- (void)_updateContentWithSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateLabelVisibility;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3;

@end

