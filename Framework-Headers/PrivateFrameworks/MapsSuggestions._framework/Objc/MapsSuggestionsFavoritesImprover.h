//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseImprover.h>

#import <MapsSuggestions/MapsSuggestionsImprover-Protocol.h>

@class NSString;

@interface MapsSuggestionsFavoritesImprover : MapsSuggestionsBaseImprover <MapsSuggestionsImprover>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

+ (BOOL)isEnabled;
- (BOOL)improveEntry:(id)arg1;

@end

