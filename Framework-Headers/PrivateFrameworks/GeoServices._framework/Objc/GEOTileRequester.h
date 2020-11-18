//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResourceManifestManager, GEOTileRequest, NSString, NSThread;
@protocol GEOTileRequesterDelegate, OS_dispatch_queue;

@interface GEOTileRequester : NSObject
{
    GEOTileRequest *_tileRequest;
    id<GEOTileRequesterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _context;
    NSThread *_thread;
    NSString *_deviceCountry;
    NSString *_deviceRegion;
}

@property (strong, nonatomic) id context; // @synthesize context=_context;
@property (readonly, weak, nonatomic) id<GEOTileRequesterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (strong, nonatomic) NSString *deviceCountry; // @synthesize deviceCountry=_deviceCountry;
@property (strong, nonatomic) NSString *deviceRegion; // @synthesize deviceRegion=_deviceRegion;
@property (readonly, nonatomic) GEOResourceManifestManager *resourceManifestManager;
@property (readonly, nonatomic) GEOTileRequest *tileRequest; // @synthesize tileRequest=_tileRequest;

+ (unsigned long long)expiringTilesetsCount;
+ (CDStruct_e4886f83 *)newExpiringTilesets;
+ (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (unsigned char)tileProviderIdentifier;
- (void).cxx_destruct;
- (void)cancel;
- (void)cancelKey:(const struct _GEOTileKey *)arg1;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (void)start;
- (void)tearDown;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;

@end

