//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSDictionary, NSString, _MRNowPlayingPlayerPathProtobuf;

@interface MRNotificationMessage : MRProtocolMessage
{
}

@property (readonly, nonatomic) NSString *notification;
@property (readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (readonly, nonatomic) NSDictionary *userInfo;

- (id)initWithNotification:(id)arg1;
- (unsigned long long)type;

@end
