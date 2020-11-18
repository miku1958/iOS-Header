//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMessageInfo, MFMessageInfoOrderedSet, NSArray;

@interface MFConversationInfo : NSObject
{
    MFMessageInfoOrderedSet *_messageInfoSet;
    long long _conversationID;
}

@property (readonly, nonatomic) NSArray *allMessageInfos;
@property (readonly, nonatomic) MFMessageInfo *firstMessage;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) MFMessageInfo *lastMessage;
@property (readonly, nonatomic) unsigned long long messageCountWithDuplicates;
@property (readonly, nonatomic) unsigned long long messagesCount;
@property (readonly, nonatomic) NSArray *uniqueMessageInfos;

- (unsigned long long)addMessageInfo:(id)arg1;
- (unsigned long long)conversationState;
- (void)dealloc;
- (id)duplicatesOfMessageInfo:(id)arg1;
- (unsigned long long)indexOfMessageInfo:(id)arg1;
- (unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)arg1;
- (id)initWithConversationID:(long long)arg1 comparator:(CDUnknownBlockType)arg2;
- (void)mergeWithConversation:(id)arg1;
- (id)messageInfoAtIndex:(unsigned long long)arg1;
- (id)messageInfoEquivalentToMessageInfo:(id)arg1;
- (unsigned long long)removeMessageInfo:(id)arg1;
- (id)visibleMessageInfo;

@end
