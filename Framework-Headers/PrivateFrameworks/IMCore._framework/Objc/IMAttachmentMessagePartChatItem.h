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
}

@property (readonly, copy, nonatomic) NSString *transferGUID; // @synthesize transferGUID=_transferGUID;

- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 transferGUID:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isAttachmentContiguousWithChatItem:(id)arg1;

@end

