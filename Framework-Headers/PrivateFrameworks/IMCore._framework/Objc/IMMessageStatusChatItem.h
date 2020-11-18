//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

#import <IMCore/IMChatTranscriptStatusItem-Protocol.h>

@class IMHandle, IMServiceImpl, NSAttributedString, NSDate, NSString;

@interface IMMessageStatusChatItem : IMTranscriptChatItem <IMChatTranscriptStatusItem>
{
    long long _statusType;
    NSDate *_time;
    long long _expireStatusType;
    NSDate *_timeAdded;
    NSDate *_timeStale;
    unsigned long long _count;
}

@property (readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property (readonly, nonatomic) NSDate *dateOfStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *errorText;
@property (readonly, nonatomic) long long expireStatusType; // @synthesize expireStatusType=_expireStatusType;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) IMHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) long long messageStatusType;
@property (readonly, nonatomic) IMServiceImpl *service;
@property (readonly, nonatomic) long long statusType; // @synthesize statusType=_statusType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *time; // @synthesize time=_time;
@property (readonly, nonatomic) NSDate *transcriptDate;
@property (readonly, copy, nonatomic) NSAttributedString *transcriptText;
@property (readonly, nonatomic) BOOL wantsTail;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 expireStatusType:(long long)arg2 count:(unsigned long long)arg3;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 expireStatusType:(long long)arg5;
- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
