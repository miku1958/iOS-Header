//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMessagePartChatItem.h>

@class NSAttributedString;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem
{
}

@property (readonly, nonatomic) BOOL containsHyperlink;
@property (readonly, copy, nonatomic) NSAttributedString *subject;
@property (readonly, copy, nonatomic) NSAttributedString *text;

- (id)_time;
- (Class)balloonViewClass;
- (id)composition;
- (id)loadTranscriptText;
- (id)pasteboardItems;

@end

