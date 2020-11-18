//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseDeduper.h>

#import <MapsSuggestions/MapsSuggestionsDeduper-Protocol.h>

@class NSString;

@interface MapsSuggestionsBlockDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper>
{
    CDUnknownBlockType _block;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

+ (id)deduperWithBlock:(CDUnknownBlockType)arg1;
+ (BOOL)isEnabled;
- (void).cxx_destruct;
- (BOOL)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

