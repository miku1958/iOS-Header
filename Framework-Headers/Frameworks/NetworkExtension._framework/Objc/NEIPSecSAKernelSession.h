//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIPSecSASession.h>

@interface NEIPSecSAKernelSession : NEIPSecSASession
{
    struct NEIPSecDB_s *_internalSession;
}

@property (nonatomic) struct NEIPSecDB_s *internalSession; // @synthesize internalSession=_internalSession;

- (BOOL)addLarvalSA:(id)arg1;
- (BOOL)addSA:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)initWithName:(id)arg1 delegate:(id)arg2 pfkeySocket:(int)arg3;
- (void)invalidate;
- (BOOL)migrateSA:(id)arg1;
- (void)removeAllSAs;
- (BOOL)removeSA:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)startBlackholeDetection:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (void)startIdleTimeout:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (BOOL)updateSA:(id)arg1;

@end

