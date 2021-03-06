//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@protocol SFSearchSuggestion <NSObject>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSArray *duplicateSuggestions;
@property (copy, nonatomic) NSString *fbr;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL previouslyEngaged;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier;
@property (nonatomic) double score;
@property (copy, nonatomic) NSMutableDictionary *serverFeatures;
@property (copy, nonatomic) NSString *suggestion;
@property (copy, nonatomic) NSString *topicIdentifier;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *utteranceText;

@end

