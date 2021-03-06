//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCardSectionFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString, _CPCardSectionForFeedback;

@interface _CPCardSectionFeedback : PBCodable <_CPProcessableFeedback, _CPCardSectionFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;
    _CPCardSectionForFeedback *_cardSection;
    NSString *_cardSectionId;
    NSString *_resultId;
}

@property (strong, nonatomic) _CPCardSectionForFeedback *cardSection; // @synthesize cardSection=_cardSection;
@property (copy, nonatomic) NSString *cardSectionId; // @synthesize cardSectionId=_cardSectionId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *resultId; // @synthesize resultId=_resultId;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

