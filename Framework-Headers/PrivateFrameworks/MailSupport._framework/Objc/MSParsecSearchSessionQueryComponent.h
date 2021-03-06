//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSParsecSearchSessionQueryComponent : NSObject
{
    BOOL _cannedSuggestion;
    NSString *_category;
    NSString *_scope;
    NSString *_queryString;
}

@property (readonly, nonatomic) BOOL cannedSuggestion; // @synthesize cannedSuggestion=_cannedSuggestion;
@property (readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property (readonly, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property (readonly, nonatomic) NSString *scope; // @synthesize scope=_scope;

+ (id)_structuredQueryForComponents:(id)arg1 hasCurrentMailboxScope:(BOOL)arg2;
+ (id)freeTextQueryComponentWithString:(id)arg1;
+ (id)suggestionAtomQueryComponentWithCategory:(id)arg1 scope:(id)arg2 queryString:(id)arg3 cannedSuggestion:(BOOL)arg4;
- (void).cxx_destruct;
- (id)_structuredQueryComponent;
- (id)initWithCategory:(id)arg1 scope:(id)arg2 queryString:(id)arg3 cannedSuggestion:(BOOL)arg4;

@end

