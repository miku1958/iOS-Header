//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMGroupActionChatItem : IMTranscriptChatItem
{
    IMHandle *_sender;
}

@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) IMHandle *sender; // @synthesize sender=_sender;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
