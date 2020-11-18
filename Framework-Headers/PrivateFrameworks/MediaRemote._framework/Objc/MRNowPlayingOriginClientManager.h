//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class NSMutableDictionary;

@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState>
{
    NSMutableDictionary *_originClients;
    NSMutableDictionary *_originClientRequests;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)clientForPlayerPath:(id)arg1;
- (id)clientRequestsForPlayerPath:(id)arg1;
- (id)debugDescription;
- (id)existingClientRequestsForPlayerPath:(id)arg1;
- (id)existingOriginClientRequestsForPlayerPath:(id)arg1;
- (id)existingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id)init;
- (id)localOriginClient;
- (id)originClientForOrigin:(id)arg1;
- (id)originClientForPlayerPath:(id)arg1;
- (id)originClientRequestsForPlayerPath:(id)arg1;
- (id)playerClientForPlayerPath:(id)arg1;
- (id)playerClientRequestsForPlayerPath:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)removeOrigin:(id)arg1;
- (void)removeOriginRequests:(id)arg1;
- (void)removePlayer:(id)arg1;
- (void)restoreNowPlayingClientState;

@end
