//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseTitleFormatter.h>

#import <MapsSuggestions/MapsSuggestionsETATitleFormatter-Protocol.h>

@class NSString;

@interface MapsSuggestionsHomeWorkTitleFormatter : MapsSuggestionsBaseTitleFormatter <MapsSuggestionsETATitleFormatter>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

- (BOOL)formatTitlesForEntry:(id)arg1 eta:(double)arg2 trafficString:(id)arg3;

@end

