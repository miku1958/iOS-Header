//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/_MDExtensionContext.h>

#import <CoreSpotlight/_MDRemoteExtensionContextProtocol-Protocol.h>

@class NSString;

@interface _MDRemoteExtensionContext : _MDExtensionContext <_MDRemoteExtensionContextProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_extensionRequestHandler;
- (void)dealloc;
- (void)getLastUpdateTimeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)hostContext;
- (void)performJob:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;

@end
