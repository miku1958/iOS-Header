//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNResult-Protocol.h>

@class NSString, SNFileServerInfo;

@interface SNFileServerDiscoveryResult : NSObject <SNResult>
{
    SNFileServerInfo *_serverInfo;
    unsigned long long _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SNFileServerInfo *serverInfo; // @synthesize serverInfo=_serverInfo;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithServerInfo:(id)arg1 state:(unsigned long long)arg2;

@end

