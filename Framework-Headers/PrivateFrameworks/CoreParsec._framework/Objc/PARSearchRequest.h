//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/PARRequest.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, SFSearchSuggestion;

@interface PARSearchRequest : PARRequest <NSSecureCoding>
{
    NSString *_queryString;
    NSDictionary *_topics;
    long long _type;
    NSString *_l2version;
    NSString *_l3version;
    NSArray *_localContextualSuggestions;
    long long _exp;
    SFSearchSuggestion *_engagedSuggestion;
    NSArray *_completionCacheSuggestions;
    NSString *_previouslyEngagedQuery;
}

@property (strong, nonatomic) NSArray *completionCacheSuggestions; // @synthesize completionCacheSuggestions=_completionCacheSuggestions;
@property (strong, nonatomic) SFSearchSuggestion *engagedSuggestion; // @synthesize engagedSuggestion=_engagedSuggestion;
@property (nonatomic) long long exp; // @synthesize exp=_exp;
@property (copy, nonatomic) NSString *l2version; // @synthesize l2version=_l2version;
@property (copy, nonatomic) NSString *l3version; // @synthesize l3version=_l3version;
@property (copy, nonatomic) NSArray *localContextualSuggestions; // @synthesize localContextualSuggestions=_localContextualSuggestions;
@property (copy, nonatomic) NSString *previouslyEngagedQuery; // @synthesize previouslyEngagedQuery=_previouslyEngagedQuery;
@property (copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property (copy, nonatomic) NSDictionary *topics; // @synthesize topics=_topics;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)nwActivityLabel;

@end

