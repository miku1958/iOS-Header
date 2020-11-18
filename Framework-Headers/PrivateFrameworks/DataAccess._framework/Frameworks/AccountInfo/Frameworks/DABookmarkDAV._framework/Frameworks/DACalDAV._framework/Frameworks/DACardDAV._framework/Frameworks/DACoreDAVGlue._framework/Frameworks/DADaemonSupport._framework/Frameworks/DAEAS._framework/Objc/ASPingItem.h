//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber;

@interface ASPingItem : ASItem
{
    NSArray *_folders;
    NSNumber *_heartBeatInterval;
    NSNumber *_maxFolders;
    NSNumber *_status;
}

@property (strong, nonatomic) NSArray *folders; // @synthesize folders=_folders;
@property (strong, nonatomic) NSNumber *heartBeatInterval; // @synthesize heartBeatInterval=_heartBeatInterval;
@property (strong, nonatomic) NSNumber *maxFolders; // @synthesize maxFolders=_maxFolders;
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
