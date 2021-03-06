//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPVisibleSuggestionsFeedback-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface _CPVisibleSuggestionsFeedback : PBCodable <_CPProcessableFeedback, _CPVisibleSuggestionsFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;
    NSArray *_suggestions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addSuggestions:(id)arg1;
- (void)clearSuggestions;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (void)writeTo:(id)arg1;

@end

