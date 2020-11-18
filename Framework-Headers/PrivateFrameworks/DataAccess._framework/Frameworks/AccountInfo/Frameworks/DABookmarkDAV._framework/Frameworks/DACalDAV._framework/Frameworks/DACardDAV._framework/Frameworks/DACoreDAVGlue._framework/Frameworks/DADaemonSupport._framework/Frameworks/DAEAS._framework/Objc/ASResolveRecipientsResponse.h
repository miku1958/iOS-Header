//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber;

@interface ASResolveRecipientsResponse : ASItem
{
    NSArray *_responses;
    NSNumber *_easStatus;
    NSMutableArray *_mResponses;
}

@property (strong, nonatomic) NSNumber *easStatus; // @synthesize easStatus=_easStatus;
@property (strong, nonatomic) NSMutableArray *mResponses; // @synthesize mResponses=_mResponses;
@property (strong, nonatomic) NSArray *responses; // @synthesize responses=_responses;

+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
- (void).cxx_destruct;
- (void)addResponse:(id)arg1;
- (id)description;
- (void)setEASStatus:(id)arg1;

@end

