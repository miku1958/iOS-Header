//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMMessageActionChatItem : IMTranscriptChatItem
{
    IMHandle *_sender;
    IMHandle *_otherHandle;
}

@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) IMHandle *otherHandle; // @synthesize otherHandle=_otherHandle;
@property (readonly, nonatomic) IMHandle *sender; // @synthesize sender=_sender;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

