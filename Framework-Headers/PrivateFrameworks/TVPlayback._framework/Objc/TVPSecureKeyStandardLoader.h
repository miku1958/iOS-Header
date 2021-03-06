//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPSecureKeyLoader.h>

@class NSDate, NSMutableArray, NSNumber, NSString, NSURL, TVPSecureKeyRequest;
@protocol TVPSecureKeyStandardLoaderConnectionHandling, TVPSecureKeyStandardLoaderRequestGenerating;

@interface TVPSecureKeyStandardLoader : TVPSecureKeyLoader
{
    BOOL _holdKeyResponses;
    BOOL _didSkipRentalCheckout;
    BOOL _includeGUID;
    BOOL _requiresExternalEntitlementCheck;
    id<TVPSecureKeyStandardLoaderRequestGenerating> _requestGenerator;
    id<TVPSecureKeyStandardLoaderConnectionHandling> _connectionHandler;
    NSString *_serviceProviderID;
    NSNumber *_rentalID;
    NSURL *_certificateDataURL;
    NSURL *_keyDataURL;
    TVPSecureKeyRequest *_savedRequestToUseForStopping;
    NSMutableArray *_pendingKeyResponses;
    NSDate *_rentalExpirationDate;
    NSDate *_rentalPlaybackStartDate;
}

@property (strong, nonatomic) NSURL *certificateDataURL; // @synthesize certificateDataURL=_certificateDataURL;
@property (strong, nonatomic) id<TVPSecureKeyStandardLoaderConnectionHandling> connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property (nonatomic) BOOL didSkipRentalCheckout; // @synthesize didSkipRentalCheckout=_didSkipRentalCheckout;
@property (nonatomic) BOOL holdKeyResponses; // @synthesize holdKeyResponses=_holdKeyResponses;
@property (nonatomic) BOOL includeGUID; // @synthesize includeGUID=_includeGUID;
@property (strong, nonatomic) NSURL *keyDataURL; // @synthesize keyDataURL=_keyDataURL;
@property (strong, nonatomic) NSMutableArray *pendingKeyResponses; // @synthesize pendingKeyResponses=_pendingKeyResponses;
@property (strong, nonatomic) NSDate *rentalExpirationDate; // @synthesize rentalExpirationDate=_rentalExpirationDate;
@property (strong, nonatomic) NSNumber *rentalID; // @synthesize rentalID=_rentalID;
@property (strong, nonatomic) NSDate *rentalPlaybackStartDate; // @synthesize rentalPlaybackStartDate=_rentalPlaybackStartDate;
@property (strong, nonatomic) id<TVPSecureKeyStandardLoaderRequestGenerating> requestGenerator; // @synthesize requestGenerator=_requestGenerator;
@property (nonatomic) BOOL requiresExternalEntitlementCheck; // @synthesize requiresExternalEntitlementCheck=_requiresExternalEntitlementCheck;
@property (strong, nonatomic) TVPSecureKeyRequest *savedRequestToUseForStopping; // @synthesize savedRequestToUseForStopping=_savedRequestToUseForStopping;
@property (strong, nonatomic) NSString *serviceProviderID; // @synthesize serviceProviderID=_serviceProviderID;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_assetIdentifierForKeyRequest:(id)arg1;
- (id)_bodyJSONDataForRequest:(id)arg1 forceStop:(BOOL)arg2;
- (id)init;
- (id)initWithCertificateDataURL:(id)arg1 keyDataURL:(id)arg2;
- (void)sendStopRequest;
- (void)startLoadingCertificateDataForRequest:(id)arg1;
- (void)startLoadingContentIdentifierDataForRequest:(id)arg1;
- (void)startLoadingKeyResponseDataForRequest:(id)arg1;

@end

