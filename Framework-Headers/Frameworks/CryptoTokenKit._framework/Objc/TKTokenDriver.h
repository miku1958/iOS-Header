//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, TKSharedResourceSlot, TKTokenDriverContext;
@protocol TKTokenDriverDelegate;

@interface TKTokenDriver : NSObject
{
    id _keepAlive;
    id<TKTokenDriverDelegate> _delegate;
    TKTokenDriverContext *_context;
    NSMutableDictionary *_tokenConnections;
    TKSharedResourceSlot *_keepAliveResourceSlot;
    NSDictionary *_extensionAttributes;
}

@property (readonly) NSString *classID;
@property (weak, nonatomic) TKTokenDriverContext *context; // @synthesize context=_context;
@property (weak) id<TKTokenDriverDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong) NSDictionary *extensionAttributes; // @synthesize extensionAttributes=_extensionAttributes;
@property (strong, nonatomic) id keepAlive;
@property (strong, nonatomic) TKSharedResourceSlot *keepAliveResourceSlot; // @synthesize keepAliveResourceSlot=_keepAliveResourceSlot;
@property (readonly, nonatomic) NSMutableDictionary *tokenConnections; // @synthesize tokenConnections=_tokenConnections;
@property (readonly, nonatomic) NSArray *tokenSessions;

+ (id)createDriver;
- (void).cxx_destruct;
- (void)acquireTokenWithInstanceID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)auditAuthOperation:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 success:(BOOL)arg3;
- (void)configureWithReply:(CDUnknownBlockType)arg1;
- (id)createTokenWithSlot:(id)arg1 AID:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)endpointForToken:(id)arg1;
- (void)getTokenWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;
- (void)releaseTokenWithInstanceID:(id)arg1;
- (void)terminate;

@end
