//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCommand-Protocol.h>

@class NSData, NSDictionary, NSURL;

@protocol SFPlayVideoCommand <SFCommand>

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSURL *url;

@end

