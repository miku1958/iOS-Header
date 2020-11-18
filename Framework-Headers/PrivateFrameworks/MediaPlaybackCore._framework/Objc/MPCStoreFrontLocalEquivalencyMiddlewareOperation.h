//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

#import <MediaPlaybackCore/MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding-Protocol.h>
#import <MediaPlaybackCore/MPMiddlewareAutomaticDependencyOperation-Protocol.h>

@class MPCPlayerRequest, MPCStoreFrontLocalEquivalencyMiddleware, MPModelGenericObject, NSArray, NSError, NSIndexPath, NSMapTable, NSString;

@interface MPCStoreFrontLocalEquivalencyMiddlewareOperation : MPAsyncOperation <MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding, MPMiddlewareAutomaticDependencyOperation>
{
    struct NSMapTable *_inputOperations;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    MPCStoreFrontLocalEquivalencyMiddleware *_middleware;
    MPCPlayerRequest *_playerRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMapTable *inputOperations; // @synthesize inputOperations=_inputOperations;
@property (readonly, nonatomic) NSArray *inputProtocols;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property (strong, nonatomic) MPCStoreFrontLocalEquivalencyMiddleware *middleware; // @synthesize middleware=_middleware;
@property (readonly, nonatomic) NSArray *outputProtocols;
@property (readonly, nonatomic) MPModelGenericObject *overridePlayingItem;
@property (strong, nonatomic) MPCPlayerRequest *playerRequest; // @synthesize playerRequest=_playerRequest;
@property (readonly, nonatomic) NSIndexPath *playingItemIndexPath;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;

@end
