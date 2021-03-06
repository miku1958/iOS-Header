//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBAnnouncement, _INPBHomeFilter, _INPBIntentMetadata;

@protocol _INPBSendAnnouncementIntent <NSObject>

@property (strong, nonatomic) _INPBAnnouncement *announcement;
@property (readonly, nonatomic) BOOL hasAnnouncement;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasIsReply;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) BOOL isReply;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;

+ (Class)recipientsType;
- (void)addRecipients:(_INPBHomeFilter *)arg1;
- (void)clearRecipients;
- (_INPBHomeFilter *)recipientsAtIndex:(unsigned long long)arg1;
@end

