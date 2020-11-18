//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSPlaylist-Protocol.h>

@class IKAppPlaylistBridge;

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist>
{
    IKAppPlaylistBridge *_bridge;
}

@property (readonly, nonatomic) IKAppPlaylistBridge *bridge; // @synthesize bridge=_bridge;
@property (nonatomic) long long endAction;
@property (readonly, nonatomic) unsigned long long length;
@property (nonatomic) long long repeatMode;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)item:(long long)arg1;
- (id)pop;
- (void)push:(id)arg1;
- (id)splice:(long long)arg1:(long long)arg2:(id)arg3;

@end

