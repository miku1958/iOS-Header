//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFResultSection.h>

#import <Search/NSCopying-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString;

@interface SFMutableResultSection : SFResultSection <NSCopying>
{
    BOOL _serialized;
    BOOL _isGlanceCategory;
    int _source;
    unsigned int _domain;
    NSArray *_hiddenExtResults;
    NSMutableOrderedSet *_resultSet;
    NSString *_sourceDomain;
    NSString *_resultSetIdentifier;
}

@property (nonatomic) unsigned int domain; // @synthesize domain=_domain;
@property (strong, nonatomic) NSArray *hiddenExtResults; // @synthesize hiddenExtResults=_hiddenExtResults;
@property (nonatomic) BOOL isGlanceCategory; // @synthesize isGlanceCategory=_isGlanceCategory;
@property (strong, nonatomic) NSMutableOrderedSet *resultSet; // @synthesize resultSet=_resultSet;
@property (strong, nonatomic) NSString *resultSetIdentifier; // @synthesize resultSetIdentifier=_resultSetIdentifier;
@property (nonatomic) BOOL serialized; // @synthesize serialized=_serialized;
@property int source; // @synthesize source=_source;
@property (strong, nonatomic) NSString *sourceDomain; // @synthesize sourceDomain=_sourceDomain;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addHiddenExtResult:(id)arg1;
- (void)addResults:(id)arg1;
- (void)addResults:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addResultsFromArray:(id)arg1;
- (void)clearResults;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)indexOfResult:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResultSection:(id)arg1;
- (id)objectForFeedback;
- (id)objectForFeedbackWithResultsArray:(id)arg1;
- (void)removeResults:(id)arg1;
- (void)removeResultsAtIndex:(unsigned long long)arg1;
- (void)removeResultsInArray:(id)arg1;
- (void)replaceResultsAtIndex:(unsigned long long)arg1 withResults:(id)arg2;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setResults:(id)arg1;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;

@end
