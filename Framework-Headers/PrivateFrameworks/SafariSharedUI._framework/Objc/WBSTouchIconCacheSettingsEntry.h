//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSSiteMetadataImageCacheSettingsEntry-Protocol.h>

@class NSDate, NSString;

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry>
{
    BOOL _lastRequestWasInUserLoadedWebpage;
    BOOL _iconInCache;
    BOOL _requestDidSucceed;
    BOOL _higherPriorityIconDownloadFailedDueToNetworkError;
    long long _databaseID;
    NSString *_host;
    NSString *_UUIDString;
    NSDate *_lastRequestDate;
    long long _requestCount;
    long long _transparencyAnalysisResult;
}

@property (readonly, copy, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property (readonly, nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long downloadStatusFlags;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError; // @synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError;
@property (readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
@property (readonly, nonatomic, getter=isIconInCache) BOOL iconInCache; // @synthesize iconInCache=_iconInCache;
@property (readonly, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property (readonly, nonatomic) BOOL lastRequestWasInUserLoadedWebpage; // @synthesize lastRequestWasInUserLoadedWebpage=_lastRequestWasInUserLoadedWebpage;
@property (readonly, nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property (readonly, nonatomic) BOOL requestDidSucceed; // @synthesize requestDidSucceed=_requestDidSucceed;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long transparencyAnalysisResult; // @synthesize transparencyAnalysisResult=_transparencyAnalysisResult;

+ (id)entryWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(long long)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 transparencyAnalysisResult:(long long)arg7 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg8 UUIDString:(id)arg9;
- (void).cxx_destruct;
- (id)entryByAddingRequestInUserLoadedWebPage:(BOOL)arg1 isIconInCache:(BOOL)arg2 requestDidSucceed:(BOOL)arg3 transparencyAnalysisResult:(long long)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 UUIDString:(id)arg6;
- (id)entryWithDatabaseID:(long long)arg1;
- (id)init;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(long long)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 transparencyAnalysisResult:(long long)arg7 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg8 UUIDString:(id)arg9;
- (id)initWithSQLiteRow:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

