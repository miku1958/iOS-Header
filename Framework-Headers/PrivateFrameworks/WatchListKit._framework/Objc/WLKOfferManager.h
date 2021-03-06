//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_offers;
}

@property (strong, nonatomic) NSArray *offers; // @synthesize offers=_offers;

+ (id)_offerFullPath;
+ (id)_offerPath;
+ (id)defaultOfferManager;
- (void).cxx_destruct;
- (void)_activeAccountChangedNotification:(id)arg1;
- (id)_connection;
- (id)_offers;
- (void)_setOffers:(id)arg1;
- (void)clearOffers:(CDUnknownBlockType)arg1;
- (void)fetchOffers:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)saveOffer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

