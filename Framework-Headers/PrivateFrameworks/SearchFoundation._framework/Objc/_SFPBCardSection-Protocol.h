//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBAbstractCommand, _SFPBCard, _SFPBCardSectionValue, _SFPBUserReportRequest;

@protocol _SFPBCardSection <NSObject>

@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _SFPBCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) int type;
@property (strong, nonatomic) _SFPBUserReportRequest *userReportRequest;
@property (strong, nonatomic) _SFPBCardSectionValue *value;

- (void)addCommands:(_SFPBAbstractCommand *)arg1;
- (void)addParameterKeyPaths:(NSString *)arg1;
- (void)clearCommands;
- (void)clearParameterKeyPaths;
- (_SFPBAbstractCommand *)commandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)commandsCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)parameterKeyPathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterKeyPathsCount;
@end

