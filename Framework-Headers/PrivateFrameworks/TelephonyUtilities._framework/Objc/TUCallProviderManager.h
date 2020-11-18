//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallProviderManagerDataSourceDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSString, TUCallProvider;
@protocol OS_dispatch_queue, TUCallProviderManagerDataSource;

@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate>
{
    unsigned long long _type;
    NSObject<OS_dispatch_queue> *_queue;
    id<TUCallProviderManagerDataSource> _dataSource;
    NSMapTable *_delegateToQueue;
}

@property (readonly, nonatomic) id<TUCallProviderManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TUCallProvider *defaultProvider;
@property (strong, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TUCallProvider *emergencyProvider;
@property (readonly, nonatomic) TUCallProvider *faceTimeProvider;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *providers;
@property (readonly, copy, nonatomic) NSDictionary *providersByIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TUCallProvider *telephonyProvider;
@property (readonly, nonatomic) TUCallProvider *tinCanProvider;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property (readonly, nonatomic) TUCallProvider *voicemailProvider;

+ (id)defaultProviders;
+ (int)serviceForProvider:(id)arg1 video:(BOOL)arg2;
- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1 type:(unsigned long long)arg2 queue:(id)arg3;
- (id)initWithLocalProviders;
- (id)initWithPairedHostDeviceProviders;
- (id)initWithType:(unsigned long long)arg1;
- (void)launchAppForDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)providerForFavoritesEntry:(id)arg1;
- (id)providerForFavoritesEntryActionBundleIdentifier:(id)arg1;
- (id)providerForRecentCall:(id)arg1;
- (id)providerWithIdentifier:(id)arg1;
- (id)providerWithService:(int)arg1 video:(BOOL *)arg2;
- (void)providersChangedForDataSource:(id)arg1;
- (id)providersPassingTest:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;

@end

