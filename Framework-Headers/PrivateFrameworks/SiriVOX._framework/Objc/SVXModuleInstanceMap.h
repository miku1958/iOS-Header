//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXModuleInstanceProviding-Protocol.h>

@class NSDictionary, NSString, SVXClientServiceServer, SVXDeviceSetupManager, SVXNowPlayingObserver, SVXServiceCommandHandler, SVXSessionManager, SVXSpeechSynthesizer, SVXSystemObserver;

__attribute__((visibility("hidden")))
@interface SVXModuleInstanceMap : NSObject <SVXModuleInstanceProviding>
{
    NSDictionary *_dictionaryRepresentation;
}

@property (readonly, nonatomic) SVXClientServiceServer *clientServiceServer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SVXDeviceSetupManager *deviceSetupManager;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SVXNowPlayingObserver *nowPlayingObserver;
@property (readonly, nonatomic) SVXServiceCommandHandler *serviceCommandHandler;
@property (readonly, nonatomic) SVXSessionManager *sessionManager;
@property (readonly, nonatomic) SVXSpeechSynthesizer *speechSynthesizer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SVXSystemObserver *systemObserver;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)moduleInstanceWithIdentifier:(id)arg1;

@end

