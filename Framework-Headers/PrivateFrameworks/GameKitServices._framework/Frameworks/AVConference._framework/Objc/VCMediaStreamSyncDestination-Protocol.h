//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@protocol VCMediaStreamSyncSource;

@protocol VCMediaStreamSyncDestination <NSObject>
- (BOOL)startSynchronization:(id<VCMediaStreamSyncSource>)arg1;
- (void)stopSynchronization;
@end

