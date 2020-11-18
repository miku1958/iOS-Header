//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPSecureKeyLoaderDelegate-Protocol.h>

@class NSData, NSMutableSet, NSString, TVPPlaybackReportingEventCollection, TVPSecureKeyLoader;
@protocol TVPSecureKeyDeliveryCoordinatorDelegate;

@interface TVPSecureKeyDeliveryCoordinator : NSObject <TVPSecureKeyLoaderDelegate>
{
    BOOL _certFetchInProgress;
    NSObject<TVPSecureKeyDeliveryCoordinatorDelegate> *_delegate;
    TVPPlaybackReportingEventCollection *_eventCollection;
    TVPSecureKeyLoader *_secureKeyLoader;
    NSData *_certificateData;
    NSMutableSet *_requestsAwaitingCertFetch;
}

@property (nonatomic) BOOL certFetchInProgress; // @synthesize certFetchInProgress=_certFetchInProgress;
@property (strong, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVPSecureKeyDeliveryCoordinatorDelegate> *delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // @synthesize eventCollection=_eventCollection;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableSet *requestsAwaitingCertFetch; // @synthesize requestsAwaitingCertFetch=_requestsAwaitingCertFetch;
@property (strong, nonatomic) TVPSecureKeyLoader *secureKeyLoader; // @synthesize secureKeyLoader=_secureKeyLoader;
@property (readonly) Class superclass;

+ (void)initialize;
+ (BOOL)isSecureKeyDeliveryRequest:(id)arg1;
- (void).cxx_destruct;
- (void)_finishLoadingWithError:(id)arg1 forRequest:(id)arg2;
- (void)_loadSecureKeyRequest:(id)arg1 sendStartReportingEvent:(BOOL)arg2;
- (id)init;
- (id)initWithSecureKeyLoader:(id)arg1;
- (void)loadSecureKeyRequest:(id)arg1;
- (void)secureKeyLoader:(id)arg1 didFailWithError:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didLoadCertificateData:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didLoadContentIdentifierData:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didLoadKeyResponseData:(id)arg2 renewalDate:(id)arg3 forRequest:(id)arg4;
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalPlaybackStartDate:(id)arg2;
- (void)sendStopRequest;

@end
