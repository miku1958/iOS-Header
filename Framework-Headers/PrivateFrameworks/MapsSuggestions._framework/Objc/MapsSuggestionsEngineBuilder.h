//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol MapsSuggestionsLocationUpdater, MapsSuggestionsStrategy;

@interface MapsSuggestionsEngineBuilder : NSObject <MapsSuggestionsObject>
{
    BOOL _hasTracker;
    id<MapsSuggestionsStrategy> _strategy;
    long long _managerStyle;
    id<MapsSuggestionsLocationUpdater> _locationUpdater;
    NSMutableArray *_sourceClasses;
    NSMutableArray *_includeFilters;
    NSMutableArray *_includeImprovers;
    NSMutableArray *_includeDedupers;
    NSMutableArray *_excludeFilters;
    NSMutableArray *_excludeImprovers;
    NSMutableArray *_excludeDedupers;
    struct NSMutableDictionary *_titleFormatters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableArray *excludeDedupers; // @synthesize excludeDedupers=_excludeDedupers;
@property (strong, nonatomic) NSMutableArray *excludeFilters; // @synthesize excludeFilters=_excludeFilters;
@property (strong, nonatomic) NSMutableArray *excludeImprovers; // @synthesize excludeImprovers=_excludeImprovers;
@property (nonatomic) BOOL hasTracker; // @synthesize hasTracker=_hasTracker;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *includeDedupers; // @synthesize includeDedupers=_includeDedupers;
@property (strong, nonatomic) NSMutableArray *includeFilters; // @synthesize includeFilters=_includeFilters;
@property (strong, nonatomic) NSMutableArray *includeImprovers; // @synthesize includeImprovers=_includeImprovers;
@property (strong, nonatomic) id<MapsSuggestionsLocationUpdater> locationUpdater; // @synthesize locationUpdater=_locationUpdater;
@property (nonatomic) long long managerStyle; // @synthesize managerStyle=_managerStyle;
@property (strong, nonatomic) NSMutableArray *sourceClasses; // @synthesize sourceClasses=_sourceClasses;
@property (strong, nonatomic) id<MapsSuggestionsStrategy> strategy; // @synthesize strategy=_strategy;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableDictionary *titleFormatters; // @synthesize titleFormatters=_titleFormatters;
@property (readonly, nonatomic) NSString *uniqueName;

+ (id)_forPhone;
+ (id)currentEngine;
+ (id)forDevice;
+ (id)forEveryone;
+ (id)forSimulator;
+ (id)forTests;
+ (id)simpleStrategy;
- (void).cxx_destruct;
- (id)build;
- (id)withDedupers:(id)arg1;
- (id)withFilters:(id)arg1;
- (id)withImprovers:(id)arg1;
- (id)withLocationUpdater:(id)arg1;
- (id)withManagerStyle:(long long)arg1;
- (id)withSourceClasses:(id)arg1;
- (id)withTitleFormatter:(id)arg1 forType:(unsigned long long)arg2;
- (id)withoutDedupers:(id)arg1;
- (id)withoutFilters:(id)arg1;
- (id)withoutImprovers:(id)arg1;
- (id)withoutTracker;

@end

