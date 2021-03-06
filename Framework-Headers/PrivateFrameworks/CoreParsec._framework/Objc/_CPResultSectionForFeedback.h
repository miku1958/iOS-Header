//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPResultSectionForFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPResultSectionForFeedback : PBCodable <_CPResultSectionForFeedback, NSSecureCoding>
{
    BOOL _isInitiallyHidden;
    int _knownBundleIdentifier;
    NSArray *_results;
    NSString *_identifier;
    double _rankingScore;
    NSData *_fallbackResultSection;
    NSString *_bundleIdentifier;
    unsigned long long _whichBundleid;
}

@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSData *fallbackResultSection; // @synthesize fallbackResultSection=_fallbackResultSection;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isInitiallyHidden; // @synthesize isInitiallyHidden=_isInitiallyHidden;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int knownBundleIdentifier; // @synthesize knownBundleIdentifier=_knownBundleIdentifier;
@property (nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property (copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long whichBundleid; // @synthesize whichBundleid=_whichBundleid;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (void)clearBundleid;
- (void)clearResults;
- (id)dictionaryRepresentation;
- (id)feedbackJSON;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)writeTo:(id)arg1;

@end

