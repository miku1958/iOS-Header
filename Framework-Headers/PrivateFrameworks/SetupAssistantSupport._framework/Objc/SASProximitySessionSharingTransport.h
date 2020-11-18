//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantSupport/SASProximitySessionTransport.h>

@class CUMessageSession;

@interface SASProximitySessionSharingTransport : SASProximitySessionTransport
{
    CUMessageSession *_messageSession;
    CUMessageSession *_actionMessageSession;
}

@property (strong) CUMessageSession *actionMessageSession; // @synthesize actionMessageSession=_actionMessageSession;
@property (strong) CUMessageSession *messageSession; // @synthesize messageSession=_messageSession;

- (void).cxx_destruct;
- (void)activate;
- (id)initWithMessageSession:(id)arg1;
- (void)invalidate;
- (void)sendData:(id)arg1 response:(CDUnknownBlockType)arg2;

@end

