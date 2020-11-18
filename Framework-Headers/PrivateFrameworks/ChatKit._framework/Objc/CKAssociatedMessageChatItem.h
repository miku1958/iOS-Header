//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKChatItem.h>

@class IMHandle, NSDate, NSString;

@interface CKAssociatedMessageChatItem : CKChatItem
{
    NSString *_timestampString;
}

@property (readonly, nonatomic) NSString *associatedChatItemGUID;
@property (readonly, nonatomic) struct _NSRange associatedMessageRange;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) struct IMAssociatedMessageGeometryDescriptor geometryDescriptor;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL parentMessageIsFromMe;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) NSDate *time;
@property (copy, nonatomic) NSString *timestampString; // @synthesize timestampString=_timestampString;

- (void).cxx_destruct;
- (id)IMAssociatedMessageChatItem;
- (id)loadTimestampString;
- (id)loadTranscriptDrawerText;
- (BOOL)transcriptOrientation;
- (BOOL)wantsDrawerLayout;

@end
