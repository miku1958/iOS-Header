//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUIUtilities/_DUIClientSessionAccessibility-Protocol.h>

@class NSXPCConnection;
@protocol AXDragSessionDelegate, AXDragSessionDragManager;

@interface AXDragSession : NSObject <_DUIClientSessionAccessibility>
{
    NSXPCConnection *_connection;
    id<AXDragSessionDragManager> _manager;
    BOOL _resumed;
    BOOL _aborted;
    id<AXDragSessionDelegate> _delegate;
}

@property (weak, nonatomic) id<AXDragSessionDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)_serverSession;
- (void)abort;
- (void)cancel;
- (oneway void)dragDidEndWithOperation:(unsigned long long)arg1;
- (oneway void)dragStatusDidChange:(id)arg1;
- (oneway void)dragWillBeginWithReply:(CDUnknownBlockType)arg1;
- (void)drop;
- (id)initWithDruidConnection:(id)arg1;
- (id)manager;
- (void)moveToPoint:(struct CGPoint)arg1 forRequestor:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resume;
- (void)setManager:(id)arg1;

@end
