//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMessagePartChatItem.h>

@class NSString;

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem
{
    NSString *_transferGUID;
    unsigned int _wantsAttachmentContiguous:1;
    BOOL _parentChatIsSpam;
}

@property (readonly, nonatomic) BOOL parentChatIsSpam; // @synthesize parentChatIsSpam=_parentChatIsSpam;
@property (readonly, copy, nonatomic) NSString *transferGUID; // @synthesize transferGUID=_transferGUID;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 transferGUID:(id)arg5 parentChatIsSpam:(BOOL)arg6;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 transferGUID:(id)arg5 parentChatIsSpam:(BOOL)arg6 visibleAssociatedMessageChatItems:(id)arg7;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isAttachmentContiguousWithChatItem:(id)arg1;

@end

