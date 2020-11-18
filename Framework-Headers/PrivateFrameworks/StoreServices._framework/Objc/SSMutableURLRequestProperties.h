//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSURLRequestProperties.h>

@class NSArray, NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface SSMutableURLRequestProperties : SSURLRequestProperties
{
}

@property (copy) NSData *HTTPBody; // @dynamic HTTPBody;
@property (strong) NSInputStream *HTTPBodyStream; // @dynamic HTTPBodyStream;
@property (copy) NSDictionary *HTTPHeaders; // @dynamic HTTPHeaders;
@property (copy) NSString *HTTPMethod; // @dynamic HTTPMethod;
@property (getter=isITunesStoreRequest) BOOL ITunesStoreRequest; // @dynamic ITunesStoreRequest;
@property long long KBSyncType; // @dynamic KBSyncType;
@property (strong) NSURL *URL; // @dynamic URL;
@property (copy) NSString *URLBagKey; // @dynamic URLBagKey;
@property long long URLBagType; // @dynamic URLBagType;
@property (copy) CDUnknownBlockType URLBagURLBlock; // @dynamic URLBagURLBlock;
@property (copy) NSArray *URLs; // @dynamic URLs;
@property (copy) NSDictionary *additionalMetrics; // @dynamic additionalMetrics;
@property long long allowedRetryCount; // @dynamic allowedRetryCount;
@property BOOL allowsBootstrapCellularData; // @dynamic allowsBootstrapCellularData;
@property unsigned long long cachePolicy; // @dynamic cachePolicy;
@property (copy) NSString *clientAuditBundleIdentifier; // @dynamic clientAuditBundleIdentifier;
@property (copy) NSData *clientAuditTokenData; // @dynamic clientAuditTokenData;
@property (copy) NSString *clientIdentifier; // @dynamic clientIdentifier;
@property long long expectedContentLength; // @dynamic expectedContentLength;
@property (getter=isLargeDownload) BOOL largeDownload; // @dynamic largeDownload;
@property long long machineDataStyle; // @dynamic machineDataStyle;
@property unsigned long long networkServiceType; // @dynamic networkServiceType;
@property (copy) NSDictionary *requestParameters; // @dynamic requestParameters;
@property BOOL requiresCellularDataNetwork; // @dynamic requiresCellularDataNetwork;
@property BOOL requiresExtendedValidationCertificates; // @dynamic requiresExtendedValidationCertificates;
@property BOOL requiresExternal; // @dynamic requiresExternal;
@property BOOL requiresHTTPS; // @dynamic requiresHTTPS;
@property BOOL shouldAddKBSyncData; // @dynamic shouldAddKBSyncData;
@property BOOL shouldDecodeResponse; // @dynamic shouldDecodeResponse;
@property BOOL shouldDisableCellular; // @dynamic shouldDisableCellular;
@property BOOL shouldDisableCellularFallback; // @dynamic shouldDisableCellularFallback;
@property BOOL shouldDisableReversePush; // @dynamic shouldDisableReversePush;
@property BOOL shouldDisableReversePushSampling; // @dynamic shouldDisableReversePushSampling;
@property BOOL shouldProcessProtocol; // @dynamic shouldProcessProtocol;
@property BOOL shouldSendSecureToken; // @dynamic shouldSendSecureToken;
@property BOOL shouldSetCookies; // @dynamic shouldSetCookies;
@property double timeoutInterval; // @dynamic timeoutInterval;
@property (copy) NSArray *userAgentComponents; // @dynamic userAgentComponents;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setMultiPartFormDataWithDictionary:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;

@end
