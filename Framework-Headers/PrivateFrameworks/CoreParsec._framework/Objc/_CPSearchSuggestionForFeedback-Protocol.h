//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _CPSearchSuggestionForFeedback <NSObject>

@property (copy, nonatomic) NSString *fbr;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) double score;
@property (copy, nonatomic) NSString *suggestion;
@property (nonatomic) int type;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

