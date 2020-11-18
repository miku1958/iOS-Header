//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SFBrowserConfiguration : NSObject
{
    long long _configuration;
}

@property (readonly, nonatomic) BOOL allowsAutoFill;
@property (readonly, nonatomic) BOOL allowsClosingLastTab;
@property (readonly, nonatomic) BOOL allowsKeyboardCorrectionLearning;
@property (readonly, nonatomic) BOOL allowsPersistingTabState;
@property (readonly, nonatomic) BOOL allowsReopeningClosedTabs;
@property (readonly, nonatomic) BOOL allowsRestoringEducationTabs;
@property (readonly, nonatomic) BOOL allowsSearchFeedback;
@property (readonly, nonatomic) BOOL allowsSearchSuggestions;
@property (readonly, nonatomic) BOOL allowsSiteSpecificSearch;
@property (readonly, nonatomic) BOOL allowsSpeculativeLoading;
@property (readonly, nonatomic) BOOL allowsUserActivityFeedback;
@property (readonly, nonatomic) BOOL forcesDoNotTrack;
@property (readonly, nonatomic) unsigned long long navigationBarTintStyle;
@property (readonly, nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled;
@property (readonly, nonatomic) unsigned long long toolbarTintStyle;
@property (readonly, nonatomic) BOOL usesDarkTheme;
@property (readonly, nonatomic) BOOL usesExtraBarGradients;
@property (readonly, nonatomic) BOOL usesPersistentDataStore;

- (id)description;
- (unsigned long long)hash;
- (id)initWithPrivateBrowsingEnabled:(BOOL)arg1;
- (BOOL)isEqual:(id)arg1;

@end
