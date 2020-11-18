//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSError, NSMutableDictionary, NSString;
@protocol CDXClientDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CDXClient : NSObject
{
    id<CDXClientDelegate> delegate_;
    long long holePunchAttemptCount_;
    NSData *preblob_;
    NSMutableDictionary *sessionLookup_;
    NSError *error_;
    int fd_;
    unsigned long long holePunchSID_;
    unsigned long long prevHolePunchSID_;
    NSString *server_;
    unsigned short port_;
    unsigned short localPort_;
    long long restartCount_;
    struct sockaddr_in cdxaddr_ipv4;
    double holePunchInterval_;
    BOOL preblobIsUpToDate_;
    BOOL willReconfigureShortly_;
    struct __SCDynamicStore *scDynamicStore_;
    struct __CFRunLoopSource *scDynamicStoreRunLoopSource_;
    NSObject<OS_dispatch_queue> *queue_;
    NSObject<OS_dispatch_source> *source_;
    NSObject<OS_dispatch_source> *holePunchTimer_;
    CDUnknownBlockType preblobCallback_;
    void *padding_[10];
}

@property (nonatomic) id<CDXClientDelegate> delegate; // @synthesize delegate=delegate_;
@property (readonly, nonatomic) NSError *error; // @synthesize error=error_;
@property (readonly) NSData *preblob; // @synthesize preblob=preblob_;
@property (copy, nonatomic) CDUnknownBlockType preblobCallback; // @synthesize preblobCallback=preblobCallback_;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=queue_;

+ (id)sharedClient;
- (id)createSessionWithTicket:(id)arg1 sessionKey:(id)arg2;
- (void)dealloc;
- (void)handleFDEvent;
- (BOOL)handleHolePunchEvent;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)invalidateSession:(id)arg1;
- (void)networkDidChange;
- (void)resetHolepunchTimer;
- (void)restart;
- (void)sendHolePunch;
- (BOOL)sendRaw:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPreblob:(id)arg1;
- (void)start;
- (void)startListeningOnSockets;
- (void)stopHolePunchTimer;
- (void)stopListeningOnSockets;

@end

