//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASMeetingResponseSingularResponse : ASItem
{
    NSString *_requestId;
    NSNumber *_status;
    NSString *_eventId;
    NSString *_instanceId;
}

@property (strong, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property (strong, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property (strong, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property (strong, nonatomic) NSNumber *status; // @synthesize status=_status;

+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
- (void).cxx_destruct;
- (id)description;

@end
