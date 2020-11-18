//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebInspector/_RWIRelayToClientMessageProxy-Protocol.h>

@class NSString;
@protocol _RWIRelayClientConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _RWIRelayClientConnection : NSObject <_RWIRelayToClientMessageProxy>
{
    BOOL _closed;
    BOOL _sleeping;
    id<_RWIRelayClientConnectionDelegate> _delegate;
    NSString *_tag;
}

@property (readonly, nonatomic) id<_RWIRelayClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL sleeping; // @synthesize sleeping=_sleeping;
@property (copy, nonatomic) NSString *tag; // @synthesize tag=_tag;

- (void)_closeAndNotifyDelegate:(BOOL)arg1;
- (void)close;
- (void)closeFromConnection;
- (void)closeInternal;
- (void)dealloc;
- (void)dispatchRelayMessage:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)sendMessage:(id)arg1;

@end

