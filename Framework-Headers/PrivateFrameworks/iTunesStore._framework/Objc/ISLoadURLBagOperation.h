//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStore/ISStoreURLOperationDelegate-Protocol.h>

@class ISURLBag, NSString, SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate>
{
    SSURLBagContext *_context;
    ISURLBag *_outputBag;
}

@property (readonly) ISURLBag *URLBag;
@property (readonly) SSURLBagContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_addStoreFrontHeaderSuffix:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)storeFrontHeaderSuffixForBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)_addHeadersToRequestProperties:(id)arg1;
- (void)_analyzeBagForActiveSystemApps:(id)arg1;
- (void)_postBagDidLoadNotificationWithURLBag:(id)arg1;
- (void)_sendPingsForURLBag:(id)arg1;
- (void)_setOutputURLBag:(id)arg1;
- (BOOL)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithBagContext:(id)arg1;
- (BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (void)run;
- (id)uniqueKey;

@end

