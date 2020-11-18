//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFSearchSuggestion : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_suggestion;
    NSString *_query;
    double _score;
    unsigned long long _type;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *query; // @synthesize query=_query;
@property (nonatomic) double score; // @synthesize score=_score;
@property (copy, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 type:(unsigned long long)arg5;
- (id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 type:(unsigned long long)arg4;

@end
