//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMessageChatItem.h>

@class NSAttributedString;

@interface IMMessagePartChatItem : IMMessageChatItem
{
    NSAttributedString *_text;
    long long _index;
}

@property (nonatomic) long long index; // @synthesize index=_index;
@property (readonly, copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;

+ (id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2;
+ (id)_newMessagePartsForMessageItem:(id)arg1;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3;
- (BOOL)canDelete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;

@end
