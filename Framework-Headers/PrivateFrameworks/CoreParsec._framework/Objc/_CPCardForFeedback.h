//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCardForFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPCardForFeedback : PBCodable <_CPCardForFeedback, NSSecureCoding>
{
    NSArray *_cardSections;
    NSString *_fbr;
}

@property (copy, nonatomic) NSArray *cardSections; // @synthesize cardSections=_cardSections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property (readonly, nonatomic) BOOL hasFbr;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addCardSections:(id)arg1;
- (id)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)clearCardSections;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

