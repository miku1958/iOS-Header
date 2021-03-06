//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMessagePartChatItem.h>

#import <IMCore/IMPluginChatItemProtocol-Protocol.h>

@class IMBalloonPluginDataSource, IMPluginPayload, NSString;

@interface IMTranscriptPluginChatItem : IMMessagePartChatItem <IMPluginChatItemProtocol>
{
    BOOL _isLastChatItemOfPluginType;
    BOOL _hasSetIsLastChatItemOfPluginType;
    BOOL _parentChatHasKnownParticipants;
    IMPluginPayload *_initialPayload;
    NSString *_bundleIdentifier;
    IMBalloonPluginDataSource *_dataSource;
}

@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSetIsLastChatItemOfPluginType; // @synthesize hasSetIsLastChatItemOfPluginType=_hasSetIsLastChatItemOfPluginType;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IMPluginPayload *initialPayload; // @synthesize initialPayload=_initialPayload;
@property (readonly, nonatomic) BOOL isDataSourceInitialized;
@property (readonly, nonatomic) BOOL isFromMe;
@property (nonatomic, setter=setLastChatItemOfPluginType:) BOOL isLastChatItemOfPluginType; // @synthesize isLastChatItemOfPluginType=_isLastChatItemOfPluginType;
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isSaved;
@property (readonly, nonatomic) BOOL parentChatHasKnownParticipants; // @synthesize parentChatHasKnownParticipants=_parentChatHasKnownParticipants;
@property (readonly, nonatomic) unsigned long long playbackType;
@property (readonly, nonatomic) NSString *pluginSessionGUID;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 initialPayload:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 parentChatHasKnownParticipants:(BOOL)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)replyContextPreviewChatItemForReply:(id)arg1;
- (BOOL)wantsAutoPlayback;

@end

