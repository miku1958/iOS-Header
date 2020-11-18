//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIActivityApplicationExtensionDiscovery : NSObject
{
    BOOL _sourceIsManaged;
    BOOL _matchesOnlyUserElectedExtensions;
    BOOL _performsInitialMatching;
    NSArray *_extensionPointIdentifiers;
    id _extensionMatchingContext;
}

@property (strong) id extensionMatchingContext; // @synthesize extensionMatchingContext=_extensionMatchingContext;
@property (copy, nonatomic) NSArray *extensionPointIdentifiers; // @synthesize extensionPointIdentifiers=_extensionPointIdentifiers;
@property (nonatomic) BOOL matchesOnlyUserElectedExtensions; // @synthesize matchesOnlyUserElectedExtensions=_matchesOnlyUserElectedExtensions;
@property BOOL performsInitialMatching; // @synthesize performsInitialMatching=_performsInitialMatching;
@property (nonatomic) BOOL sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;

- (void).cxx_destruct;
- (id)activitiesMatchingInputItems:(id)arg1 error:(id *)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (void)cancelUpdatesIfNeeded;
- (void)dealloc;
- (id)init;
- (id)initWithExtensionPointIdentifiers:(id)arg1;

@end

