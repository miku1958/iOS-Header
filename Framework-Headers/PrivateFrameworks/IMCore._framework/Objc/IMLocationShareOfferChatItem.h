//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

#import <IMCore/IMMessageChatItem-Protocol.h>

@class IMHandle, NSDate, NSString;

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem>
{
    IMHandle *_sender;
    BOOL _actionableEclipsed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL failed;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) long long offerState;
@property (readonly, strong, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) NSDate *time;

- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (BOOL)_isActionableEclipsed;
- (void)_setActionableEclipsed:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
