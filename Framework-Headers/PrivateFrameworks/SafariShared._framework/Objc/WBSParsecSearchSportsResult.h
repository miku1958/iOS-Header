//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecSearchResult.h>

@class NSArray, NSString, WBSParsecSearchSportsAttributionExtraCompletionItem, WBSParsecSportsScoreSummary;

@interface WBSParsecSearchSportsResult : WBSParsecSearchResult
{
    WBSParsecSportsScoreSummary *_scoreSummary;
    WBSParsecSearchSportsAttributionExtraCompletionItem *_extraCompletionItem;
}

@property (readonly, nonatomic) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem; // @synthesize extraCompletionItem=_extraCompletionItem;
@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) NSString *subtitle;

+ (id)_specializedSchema;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

