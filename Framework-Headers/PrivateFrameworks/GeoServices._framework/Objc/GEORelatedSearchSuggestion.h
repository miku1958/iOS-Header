//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDRelatedSearchSuggestion, NSString;

@interface GEORelatedSearchSuggestion : NSObject
{
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;
}

@property (readonly, nonatomic) NSString *displayString;
@property (strong, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion; // @synthesize relatedSearchSuggestion=_relatedSearchSuggestion;
@property (readonly, nonatomic) NSString *searchBarDisplayToken;

- (void).cxx_destruct;
- (id)_suggestionEntryMetadata;
- (id)initWithPDRelatedSearchSuggestion:(id)arg1;

@end

