//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEORelatedSearchSuggestion, NSString;

@interface GEOMapItemChildActionSearch : NSObject
{
    GEORelatedSearchSuggestion *_relatedSearchSuggestion;
}

@property (readonly, nonatomic) NSString *displayString;
@property (strong, nonatomic) GEORelatedSearchSuggestion *relatedSearchSuggestion; // @synthesize relatedSearchSuggestion=_relatedSearchSuggestion;

- (void).cxx_destruct;
- (id)initWithChildActionSearch:(id)arg1;

@end
