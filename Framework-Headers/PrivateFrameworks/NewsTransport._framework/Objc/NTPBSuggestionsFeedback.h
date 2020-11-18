//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBSuggestionsFeedback : PBCodable <NSCopying>
{
    NSString *_feedback;
    NSMutableArray *_grades;
}

@property (strong, nonatomic) NSString *feedback; // @synthesize feedback=_feedback;
@property (strong, nonatomic) NSMutableArray *grades; // @synthesize grades=_grades;
@property (readonly, nonatomic) BOOL hasFeedback;

+ (Class)gradesType;
- (void).cxx_destruct;
- (void)addGrades:(id)arg1;
- (void)clearGrades;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gradesAtIndex:(unsigned long long)arg1;
- (unsigned long long)gradesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
