//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, TKTokenDriverDelegate;

@interface TKTokenDriver : NSObject
{
    NSMutableDictionary *_contexts;
    id<TKTokenDriverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tokens;
    NSDictionary *_extensionAttributes;
}

@property (readonly) NSString *classID;
@property (weak) id<TKTokenDriverDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong) NSDictionary *extensionAttributes; // @synthesize extensionAttributes=_extensionAttributes;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong) NSMutableDictionary *tokens; // @synthesize tokens=_tokens;

+ (id)driver;
- (void).cxx_destruct;
- (void)addTokenDriverContext:(id)arg1;
- (void)getTokenEndpointWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getTokenWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;
- (void)invalidateToken:(id)arg1;
- (void)releaseTokenWithTokenID:(id)arg1;
- (id)tokenIDForInstanceID:(id)arg1;

@end

