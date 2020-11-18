//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDResumable-Protocol.h>

@class EDRemoteClient, NSString;

@interface EDRemoteClientResumer : NSObject <EDResumable>
{
    EDRemoteClient *_remoteClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak) EDRemoteClient *remoteClient; // @synthesize remoteClient=_remoteClient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRemoteClient:(id)arg1;
- (void)resumeForUpdates;

@end
