//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGSuggester-Protocol.h>

@class PGSuggestionOptions;
@protocol PGSuggestion;

@protocol PGCoordinatableSuggester <PGSuggester>
- (id<PGSuggestion>)nextSuggestion;
- (void)reset;
- (void)startSuggestingWithOptions:(PGSuggestionOptions *)arg1;
@end

