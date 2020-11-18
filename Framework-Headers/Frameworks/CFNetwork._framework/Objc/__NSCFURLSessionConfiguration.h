//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionConfiguration.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSHTTPCookieStorage, NSSet, NSString, NSURL, NSURLCache, NSURLCredentialStorage;
@protocol NSURLSessionAppleIDContext;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionConfiguration : NSURLSessionConfiguration <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    unsigned long long _requestCachePolicy;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    unsigned long long _networkServiceType;
    BOOL _allowsCellularAccess;
    BOOL _discretionary;
    NSString *_sharedContainerIdentifier;
    BOOL _sessionSendsLaunchEvents;
    id _connectionProxyDictionary;
    int _TLSMinimumSupportedProtocol;
    int _TLSMaximumSupportedProtocol;
    BOOL _HTTPShouldUsePipelining;
    BOOL _HTTPShouldSetCookies;
    unsigned long long _HTTPCookieAcceptPolicy;
    id _HTTPAdditionalHeaders;
    long long _HTTPMaximumConnectionsPerHost;
    BOOL _shouldUseExtendedBackgroundIdleMode;
    id _protocolClasses;
    BOOL _requiresPowerPluggedIn;
    NSURL *_directoryForDownloadedFiles;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSData *_sourceApplicationAuditTokenData;
    unsigned long long _TCPAdaptiveReadTimeout;
    unsigned long long _TCPAdaptiveWriteTimeout;
    BOOL _allowsExpensiveAccess;
    BOOL _allowsPowerNapScheduling;
    BOOL _preventsIdleSleepOnceConnected;
    BOOL _sessionSendsLaunchOnDemandEvents;
    BOOL _collectsTimingData;
    long long _timingDataOptions;
    BOOL _shouldSkipPreferredClientCertificateLookup;
    NSString *_ledBellyServiceIdentifier;
    id<NSURLSessionAppleIDContext> _appleIDContext;
    NSData *_atsContext;
    double _connectionCachePurgeTimeout;
    double _connectionCacheCellPurgeTimeout;
    double _longLivedConnectionCachePurgeTimeout;
    double _longLivedConnectionCacheCellPurgeTimeout;
    BOOL _allowsRetryForBackgroundDataTasks;
    BOOL _onBehalfOfPairedDevice;
    BOOL _respectsAllowsCellularAccessForDiscretionaryTasks;
    BOOL _overridesBackgroundSessionAutoRedirect;
    BOOL _performsEVCertCheck;
    BOOL _infersDiscretionaryFromOriginatingClient;
    NSString *_connectionPoolName;
    BOOL _prefersInfraWiFi;
    BOOL _allowsMultipathTCP;
    BOOL _allowsResponseMonitoringDuringBodyTranmission;
    BOOL _allowsIndefiniteConnections;
    NSString *_CTDataConnectionServiceType;
    BOOL _allowsTCPFastOpen;
    BOOL _allowsTLSSessionTickets;
    BOOL _preventsDirectWiFiAccess;
    BOOL _allowTCPIOConnectionStreamTask;
    BOOL _backgroundSession;
    NSString *_disposition;
    NSURLCredentialStorage *_phskip_credStorage;
    BOOL _phskip_credStorageSet;
    NSURLCache *_phskip_urlCache;
    BOOL _phskip_urlCacheSet;
    NSHTTPCookieStorage *_phskip_cookieStorage;
    BOOL _phskip_cookieStorageSet;
    struct _CFHSTSPolicy *_phskip_hstsStorage;
    BOOL _phskip_hstsStorageSet;
    long long _pipeliningHighWatermark;
    long long _pipeliningLowWatermark;
    long long _numPriorityLevels;
    long long _numFastLanes;
    long long _minimumFastLanePriority;
    BOOL _skip_download_unlink;
    BOOL _requiresClientToOpenFiles;
    NSString *_tcpConnectionPoolName;
    BOOL _forcesNewConnections;
    NSDictionary *_socketStreamProperties;
    BOOL _supportsAVAssetDownloads;
    BOOL _proxySession;
    NSSet *_authenticatorStatusCodes;
    BOOL _disallowsSPDY;
    BOOL _preventsIdleSleep;
    BOOL _usePipeliningHeuristics;
    NSArray *_contentDispHeadEncFallback;
    BOOL _shouldPreserveBackgroundSessionDisposition;
    BOOL _disablesOutOfProcessDirectWiFiUsage;
    BOOL _disablesUseOfProxySession;
    NSString *_companionAppBundleIdentifier;
    NSString *_watchAppBundleIdentifier;
    NSString *_watchExtensionBundleIdentifier;
    unsigned long long _forcedNetworkServiceType;
    NSDictionary *_overriddenDelegateOptions;
}

+ (BOOL)supportsSecureCoding;
- (id)HTTPAdditionalHeaders;
- (unsigned long long)HTTPCookieAcceptPolicy;
- (id)HTTPCookieStorage;
- (long long)HTTPMaximumConnectionsPerHost;
- (BOOL)HTTPShouldSetCookies;
- (BOOL)HTTPShouldUsePipelining;
- (int)TLSMaximumSupportedProtocol;
- (int)TLSMinimumSupportedProtocol;
- (id)URLCache;
- (id)URLCredentialStorage;
- (id)_CTDataConnectionServiceType;
- (unsigned long long)_TCPAdaptiveReadTimeout;
- (unsigned long long)_TCPAdaptiveWriteTimeout;
- (BOOL)_allowTCPIOConnectionStreamTask;
- (BOOL)_allowsExpensiveAccess;
- (BOOL)_allowsIndefiniteConnections;
- (BOOL)_allowsMultipathTCP;
- (BOOL)_allowsPowerNapScheduling;
- (BOOL)_allowsResponseMonitoringDuringBodyTranmission;
- (BOOL)_allowsRetryForBackgroundDataTasks;
- (BOOL)_allowsTCPFastOpen;
- (BOOL)_allowsTLSSessionTickets;
- (id)_appleIDContext;
- (id)_atsContext;
- (id)_authenticatorStatusCodes;
- (BOOL)_collectsTimingData;
- (id)_companionAppBundleIdentifier;
- (double)_connectionCacheCellPurgeTimeout;
- (double)_connectionCachePurgeTimeout;
- (id)_connectionPoolName;
- (id)_contentDispHeadEncFallback;
- (void *)_copyAttribute:(struct __CFString *)arg1;
- (struct OpaqueCFHTTPCookieStorage *)_copyCFCookieStorage;
- (id)_directoryForDownloadedFiles;
- (BOOL)_disablesOutOfProcessDirectWiFiUsage;
- (BOOL)_disablesUseOfProxySession;
- (BOOL)_disallowsSPDY;
- (unsigned long long)_forcedNetworkServiceType;
- (BOOL)_forcesNewConnections;
- (BOOL)_infersDiscretionaryFromOriginatingClient;
- (BOOL)_isProxySession;
- (id)_ledBellyServiceIdentifier;
- (double)_longLivedConnectionCacheCellPurgeTimeout;
- (double)_longLivedConnectionCachePurgeTimeout;
- (BOOL)_onBehalfOfPairedDevice;
- (id)_overriddenDelegateOptions;
- (BOOL)_overridesBackgroundSessionAutoRedirect;
- (BOOL)_performsEVCertCheck;
- (id)_phskip_cookieStorage;
- (BOOL)_phskip_cookieStorageSet;
- (id)_phskip_credStorage;
- (BOOL)_phskip_credStorageSet;
- (struct _CFHSTSPolicy *)_phskip_hstsStorage;
- (BOOL)_phskip_hstsStorageSet;
- (id)_phskip_urlCache;
- (BOOL)_phskip_urlCacheSet;
- (BOOL)_prefersInfraWiFi;
- (BOOL)_preventsDirectWiFiAccess;
- (BOOL)_preventsIdleSleep;
- (BOOL)_preventsIdleSleepOnceConnected;
- (BOOL)_requiresClientToOpenFiles;
- (BOOL)_requiresPowerPluggedIn;
- (BOOL)_respectsAllowsCellularAccessForDiscretionaryTasks;
- (BOOL)_sessionSendsLaunchOnDemandEvents;
- (BOOL)_shouldPreserveBackgroundSessionDisposition;
- (BOOL)_shouldSkipPreferredClientCertificateLookup;
- (id)_socketStreamProperties;
- (id)_sourceApplicationAuditTokenData;
- (id)_sourceApplicationBundleIdentifier;
- (id)_sourceApplicationSecondaryIdentifier;
- (BOOL)_supportsAVAssetDownloads;
- (id)_tcpConnectionPoolName;
- (long long)_timingDataOptions;
- (BOOL)_usePipeliningHeuristics;
- (id)_watchAppBundleIdentifier;
- (id)_watchExtensionBundleIdentifier;
- (BOOL)allowsCellularAccess;
- (id)connectionProxyDictionary;
- (struct _CFHSTSPolicy *)copyHSTSPolicy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)disposition;
- (void)encodeWithCoder:(id)arg1;
- (struct HTTPConnectionCacheLimits)getConnectionCacheLimits;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisposition:(id)arg1;
- (BOOL)isBackgroundSession;
- (BOOL)isDiscretionary;
- (BOOL)isEqual:(id)arg1;
- (long long)minimumFastLanePriority;
- (unsigned long long)networkServiceType;
- (long long)numFastLanes;
- (long long)numPriorityLevels;
- (long long)pipeliningHighWatermark;
- (long long)pipeliningLowWatermark;
- (id)protocolClasses;
- (unsigned long long)requestCachePolicy;
- (BOOL)sessionSendsLaunchEvents;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setBackgroundSession:(BOOL)arg1;
- (void)setConnectionProxyDictionary:(id)arg1;
- (void)setDiscretionary:(BOOL)arg1;
- (void)setDisposition:(id)arg1;
- (void)setHSTSPolicy:(struct _CFHSTSPolicy *)arg1;
- (void)setHTTPAdditionalHeaders:(id)arg1;
- (void)setHTTPCookieAcceptPolicy:(unsigned long long)arg1;
- (void)setHTTPCookieStorage:(id)arg1;
- (void)setHTTPMaximumConnectionsPerHost:(long long)arg1;
- (void)setHTTPShouldSetCookies:(BOOL)arg1;
- (void)setHTTPShouldUsePipelining:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMinimumFastLanePriority:(long long)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setNumFastLanes:(long long)arg1;
- (void)setNumPriorityLevels:(long long)arg1;
- (void)setPipeliningHighWatermark:(long long)arg1;
- (void)setPipeliningLowWatermark:(long long)arg1;
- (void)setProtocolClasses:(id)arg1;
- (void)setRequestCachePolicy:(unsigned long long)arg1;
- (void)setSessionSendsLaunchEvents:(BOOL)arg1;
- (void)setSharedContainerIdentifier:(id)arg1;
- (void)setShouldUseExtendedBackgroundIdleMode:(BOOL)arg1;
- (void)setSkip_download_unlink:(BOOL)arg1;
- (void)setTLSMaximumSupportedProtocol:(int)arg1;
- (void)setTLSMinimumSupportedProtocol:(int)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setURLCache:(id)arg1;
- (void)setURLCredentialStorage:(id)arg1;
- (void)set_CTDataConnectionServiceType:(id)arg1;
- (void)set_TCPAdaptiveReadTimeout:(unsigned long long)arg1;
- (void)set_TCPAdaptiveWriteTimeout:(unsigned long long)arg1;
- (void)set_allowTCPIOConnectionStreamTask:(BOOL)arg1;
- (void)set_allowsExpensiveAccess:(BOOL)arg1;
- (void)set_allowsIndefiniteConnections:(BOOL)arg1;
- (void)set_allowsMultipathTCP:(BOOL)arg1;
- (void)set_allowsPowerNapScheduling:(BOOL)arg1;
- (void)set_allowsResponseMonitoringDuringBodyTranmission:(BOOL)arg1;
- (void)set_allowsRetryForBackgroundDataTasks:(BOOL)arg1;
- (void)set_allowsTCPFastOpen:(BOOL)arg1;
- (void)set_allowsTLSSessionTickets:(BOOL)arg1;
- (void)set_appleIDContext:(id)arg1;
- (void)set_atsContext:(id)arg1;
- (void)set_authenticatorStatusCodes:(id)arg1;
- (void)set_collectsTimingData:(BOOL)arg1;
- (void)set_companionAppBundleIdentifier:(id)arg1;
- (void)set_connectionCacheCellPurgeTimeout:(double)arg1;
- (void)set_connectionCachePurgeTimeout:(double)arg1;
- (void)set_connectionPoolName:(id)arg1;
- (void)set_contentDispHeadEncFallback:(id)arg1;
- (void)set_directoryForDownloadedFiles:(id)arg1;
- (void)set_disablesOutOfProcessDirectWiFiUsage:(BOOL)arg1;
- (void)set_disablesUseOfProxySession:(BOOL)arg1;
- (void)set_disallowsSPDY:(BOOL)arg1;
- (void)set_forcedNetworkServiceType:(unsigned long long)arg1;
- (void)set_forcesNewConnections:(BOOL)arg1;
- (void)set_infersDiscretionaryFromOriginatingClient:(BOOL)arg1;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (void)set_longLivedConnectionCacheCellPurgeTimeout:(double)arg1;
- (void)set_longLivedConnectionCachePurgeTimeout:(double)arg1;
- (void)set_onBehalfOfPairedDevice:(BOOL)arg1;
- (void)set_overriddenDelegateOptions:(id)arg1;
- (void)set_overridesBackgroundSessionAutoRedirect:(BOOL)arg1;
- (void)set_performsEVCertCheck:(BOOL)arg1;
- (void)set_phskip_cookieStorage:(id)arg1;
- (void)set_phskip_cookieStorageSet:(BOOL)arg1;
- (void)set_phskip_credStorage:(id)arg1;
- (void)set_phskip_credStorageSet:(BOOL)arg1;
- (void)set_phskip_hstsStorage:(struct _CFHSTSPolicy *)arg1;
- (void)set_phskip_hstsStorageSet:(BOOL)arg1;
- (void)set_phskip_urlCache:(id)arg1;
- (void)set_phskip_urlCacheSet:(BOOL)arg1;
- (void)set_prefersInfraWiFi:(BOOL)arg1;
- (void)set_preventsDirectWiFiAccess:(BOOL)arg1;
- (void)set_preventsIdleSleep:(BOOL)arg1;
- (void)set_preventsIdleSleepOnceConnected:(BOOL)arg1;
- (void)set_proxySession:(BOOL)arg1;
- (void)set_requiresClientToOpenFiles:(BOOL)arg1;
- (void)set_requiresPowerPluggedIn:(BOOL)arg1;
- (void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(BOOL)arg1;
- (void)set_sessionSendsLaunchOnDemandEvents:(BOOL)arg1;
- (void)set_shouldPreserveBackgroundSessionDisposition:(BOOL)arg1;
- (void)set_shouldSkipPreferredClientCertificateLookup:(BOOL)arg1;
- (void)set_socketStreamProperties:(id)arg1;
- (void)set_sourceApplicationAuditTokenData:(id)arg1;
- (void)set_sourceApplicationBundleIdentifier:(id)arg1;
- (void)set_sourceApplicationSecondaryIdentifier:(id)arg1;
- (void)set_supportsAVAssetDownloads:(BOOL)arg1;
- (void)set_tcpConnectionPoolName:(id)arg1;
- (void)set_timingDataOptions:(long long)arg1;
- (void)set_usePipeliningHeuristics:(BOOL)arg1;
- (void)set_watchAppBundleIdentifier:(id)arg1;
- (void)set_watchExtensionBundleIdentifier:(id)arg1;
- (id)sharedContainerIdentifier;
- (BOOL)shouldUseExtendedBackgroundIdleMode;
- (BOOL)skip_download_unlink;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;

@end
