//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFImage-Protocol.h>

@class NSData, NSDictionary;

@protocol SFLocalImage <SFImage>

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int localImageType;

@end
