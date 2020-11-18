//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthStoreEndpoint.h>

@class NSError;

@interface HDHealthStoreErrorEndpoint : HDHealthStoreEndpoint
{
    NSError *_error;
}

@property (strong, nonatomic) NSError *error; // @synthesize error=_error;

- (void).cxx_destruct;
- (id)initWithClient:(id)arg1 daemon:(id)arg2 error:(id)arg3;
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_serverForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

