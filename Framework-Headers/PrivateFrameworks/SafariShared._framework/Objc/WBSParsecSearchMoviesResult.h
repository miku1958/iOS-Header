//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecSearchResult.h>

@class NSMutableArray, NSString;

@interface WBSParsecSearchMoviesResult : WBSParsecSearchResult
{
    NSMutableArray *_posterRepresentations;
    NSString *_descriptionLeadInText;
}

@property (readonly, nonatomic) NSString *descriptionLeadInText; // @synthesize descriptionLeadInText=_descriptionLeadInText;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)postersWithSession:(id)arg1;

@end

