//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PFLNetworkHandler;

@interface PFLNetworkResourceManager : NSObject
{
    id<PFLNetworkHandler> _networkHandler;
}

@property (readonly, nonatomic) id<PFLNetworkHandler> networkHandler; // @synthesize networkHandler=_networkHandler;

- (void).cxx_destruct;
- (id)_saveModel:(id)arg1 fromLocation:(id)arg2;
- (void)fetchConfigurationWithHandler:(CDUnknownBlockType)arg1;
- (void)handleResultsForIdentifier:(id)arg1 results:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithNetworkHandler:(id)arg1;
- (void)prepareModelResourceForTask:(id)arg1 modelIdentifier:(id)arg2 fromTemporaryLocation:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

