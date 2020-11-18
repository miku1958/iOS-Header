//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class MRClient, MRPlayer, MRPlayerPath, NSArray, NSMutableArray;

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState>
{
    MRPlayer *_activePlayer;
    NSMutableArray *_playerClients;
    BOOL _isForeground;
    BOOL _useMediaRemoteActivePlayerHeuristic;
    MRPlayerPath *_playerPath;
}

@property (readonly, nonatomic) MRPlayerPath *activePlayerPath;
@property (strong, nonatomic) MRClient *client;
@property (readonly, nonatomic) NSArray *playerClients;
@property (strong, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property (nonatomic) BOOL useMediaRemoteActivePlayerHeuristic; // @synthesize useMediaRemoteActivePlayerHeuristic=_useMediaRemoteActivePlayerHeuristic;

- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithPlayerPath:(id)arg1;
- (void)mergeClient:(id)arg1;
- (id)nowPlayingPlayerClientForPlayerPath:(id)arg1;
- (void)reevaluateActivePlayerWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePlayer:(id)arg1;
- (void)requestActiveForPlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restoreNowPlayingClientState;
- (void)setActivePlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateActivePlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
