//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface MRMediaSuggestionRequest : NSObject
{
    BOOL _includeArtwork;
    unsigned long long _maxResults;
    NSUUID *_requestIdentifier;
}

@property (nonatomic) BOOL includeArtwork; // @synthesize includeArtwork=_includeArtwork;
@property (nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;
@property (copy, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;

+ (id)defaultRequest;
+ (id)defaultRequestWithArtwork;
- (void).cxx_destruct;
- (void)_artworkForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_bundleIdentifierIsSystemMediaApplication:(id)arg1;
- (BOOL)_intentIsValidSuggestion:(id)arg1 sourceBundleID:(id)arg2;
- (id)_proactiveSuggestion;
- (id)_queryEventsWithPredicate:(id)arg1 offset:(unsigned long long)arg2 error:(id *)arg3;
- (id)description;
- (void)performWithCompletion:(CDUnknownBlockType)arg1;
- (void)performWithPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

