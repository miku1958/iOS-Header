//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNResourceCoordinatorProtocol-Protocol.h>
#import <SoundAnalysis/SNResourceCoordinatorXPCProtocol-Protocol.h>

@class NSString;
@protocol SNResourceCoordinatorProtocol;

__attribute__((visibility("hidden")))
@interface SNResourceCoordinatorXPCSubscriber : NSObject <SNResourceCoordinatorProtocol, SNResourceCoordinatorXPCProtocol>
{
    id<SNResourceCoordinatorProtocol> _receiver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createSystemAudioAnalyzer;
- (id)init;
- (id)initWithReceiver:(id)arg1;
- (void)xpcCreateSystemAudioAnalyzerWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

