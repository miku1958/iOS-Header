//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCommand-Protocol.h>

@class NSData, NSDictionary, SFCard;

@protocol SFShowSFCardCommand <SFCommand>

@property (strong, nonatomic) SFCard *card;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

