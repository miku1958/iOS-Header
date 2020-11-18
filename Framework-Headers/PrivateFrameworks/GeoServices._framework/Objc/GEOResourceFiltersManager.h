//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOActiveResourceFilters, GEOResourceManifestConfiguration, NSLock, NSSet;
@protocol GEOResourceFiltersManagerDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceFiltersManager : NSObject
{
    GEOResourceManifestConfiguration *_configuration;
    GEOActiveResourceFilters *_activeFilters;
    NSLock *_lock;
    id<GEOResourceFiltersManagerDelegate> _delegate;
}

@property (readonly, nonatomic) NSSet *activeScales;
@property (readonly, nonatomic) NSSet *activeScenarios;
@property (nonatomic) id<GEOResourceFiltersManagerDelegate> delegate; // @synthesize delegate=_delegate;

- (void)_activateFilters:(CDUnknownBlockType)arg1 setValueBlock:(CDUnknownBlockType)arg2;
- (void)_deactivateFilters:(CDUnknownBlockType)arg1;
- (void)_writeToDisk;
- (void)activateScale:(int)arg1;
- (void)activateScenario:(int)arg1;
- (void)deactivateScale:(int)arg1;
- (void)deactivateScenario:(int)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end

