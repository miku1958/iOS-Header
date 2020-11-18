//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOServerFormattedString-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying>
{
    NSMutableArray *_formatArguments;
    NSString *_formatString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableArray *formatArguments; // @synthesize formatArguments=_formatArguments;
@property (readonly, nonatomic) NSString *formatString;
@property (strong, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property (readonly, nonatomic) NSArray *formatTokens;
@property (readonly, nonatomic) BOOL hasFormatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addFormatArgument:(id)arg1;
- (void)clearFormatArguments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)formatArgumentAtIndex:(unsigned long long)arg1;
- (unsigned long long)formatArgumentsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
