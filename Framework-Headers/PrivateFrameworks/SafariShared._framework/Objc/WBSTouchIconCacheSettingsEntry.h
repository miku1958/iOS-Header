//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSSiteMetadataImageCacheSettingsEntry-Protocol.h>

@class NSDate, NSString, UIColor;

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
    UIColor *_extractedColor;
    long long _transparencyAnalysisResult;
}

@property (copy, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property (nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long downloadStatusFlags;
@property (strong, nonatomic) UIColor *extractedColor; // @synthesize extractedColor=_extractedColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError; // @synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError;
@property (copy, nonatomic) NSString *host; // @synthesize host=_host;
@property (nonatomic, getter=isIconInCache) BOOL iconInCache; // @synthesize iconInCache=_iconInCache;
@property (strong, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property (nonatomic) BOOL lastRequestWasInUserLoadedWebpage; // @synthesize lastRequestWasInUserLoadedWebpage=_lastRequestWasInUserLoadedWebpage;
@property (nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property (nonatomic) BOOL requestDidSucceed; // @synthesize requestDidSucceed=_requestDidSucceed;
@property (readonly) Class superclass;
@property (nonatomic) long long transparencyAnalysisResult; // @synthesize transparencyAnalysisResult=_transparencyAnalysisResult;

+ (id)entryWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(long long)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg9 UUIDString:(id)arg10;
- (void).cxx_destruct;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(long long)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg9 UUIDString:(id)arg10;
- (id)initWithSQLiteRow:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

