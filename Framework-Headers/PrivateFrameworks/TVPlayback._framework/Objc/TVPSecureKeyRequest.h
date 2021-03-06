//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPResourceLoadingRequest.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString, TVPPlaybackReportingEventCollection;

@interface TVPSecureKeyRequest : TVPResourceLoadingRequest
{
    BOOL _retrievesOfflineKeys;
    unsigned long long _requestID;
    NSData *_certificateData;
    NSData *_contentIdentifierData;
    NSData *_keyRequestData;
    NSDate *_startDate;
    NSNumber *_rentalID;
    NSDictionary *_requestOptions;
    unsigned long long _retryCount;
    NSString *_reportingID;
    TVPPlaybackReportingEventCollection *_eventCollection;
    NSNumber *_requestCompletionTime;
    NSDate *_requestEndDate;
    NSDate *_requestStartDate;
}

@property (copy, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property (copy, nonatomic) NSData *contentIdentifierData; // @synthesize contentIdentifierData=_contentIdentifierData;
@property (strong, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // @synthesize eventCollection=_eventCollection;
@property (readonly, nonatomic) BOOL isRenewal;
@property (copy, nonatomic) NSData *keyRequestData; // @synthesize keyRequestData=_keyRequestData;
@property (readonly, nonatomic) BOOL offlineKeyUsageAllowed;
@property (copy, nonatomic) NSNumber *rentalID; // @synthesize rentalID=_rentalID;
@property (readonly, nonatomic) NSString *reportingID; // @synthesize reportingID=_reportingID;
@property (strong, nonatomic) NSNumber *requestCompletionTime; // @synthesize requestCompletionTime=_requestCompletionTime;
@property (copy, nonatomic) NSDate *requestEndDate; // @synthesize requestEndDate=_requestEndDate;
@property (readonly, nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
@property (copy, nonatomic) NSDictionary *requestOptions; // @synthesize requestOptions=_requestOptions;
@property (copy, nonatomic) NSDate *requestStartDate; // @synthesize requestStartDate=_requestStartDate;
@property (nonatomic) BOOL retrievesOfflineKeys; // @synthesize retrievesOfflineKeys=_retrievesOfflineKeys;
@property (nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property (copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;
- (void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3;
- (id)initWithAssetResourceLoadingRequest:(id)arg1;
- (void)loadKeyRequestDataAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)loadKeyRequestDataWithError:(id *)arg1;
- (id)offlineKeyDataForResponseData:(id)arg1 error:(id *)arg2;

@end

