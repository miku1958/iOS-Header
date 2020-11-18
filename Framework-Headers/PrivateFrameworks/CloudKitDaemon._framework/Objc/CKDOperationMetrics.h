//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/MMCSOperationMetric-Protocol.h>
#import <CloudKitDaemon/NSCopying-Protocol.h>
#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface CKDOperationMetrics : NSObject <MMCSOperationMetric, NSCopying, NSSecureCoding>
{
    NSDate *_startDate;
    double _duration;
    double _queueing;
    double _executing;
    unsigned long long _bytesUploaded;
    unsigned long long _bytesDownloaded;
    unsigned long long _connections;
    unsigned long long _connectionsCreated;
    unsigned long long _recordsUploaded;
    unsigned long long _recordsDownloaded;
    unsigned long long _recordsDeleted;
    unsigned long long _assetsUploaded;
    unsigned long long _assetsUploadedFileSize;
    unsigned long long _assetsDownloaded;
    unsigned long long _assetsDownloadedFileSize;
    unsigned long long _requestCount;
    unsigned long long _retries;
    NSMutableSet *_requestUUIDs;
    NSMutableDictionary *_requestOperationCountsByType;
    NSMutableDictionary *_totalBytesByChunkProfile;
    NSMutableDictionary *_chunkCountByChunkProfile;
    NSMutableDictionary *_fileCountByChunkProfile;
    NSMutableArray *_ranges;
}

@property unsigned long long assetsDownloaded; // @synthesize assetsDownloaded=_assetsDownloaded;
@property unsigned long long assetsDownloadedFileSize; // @synthesize assetsDownloadedFileSize=_assetsDownloadedFileSize;
@property unsigned long long assetsUploaded; // @synthesize assetsUploaded=_assetsUploaded;
@property unsigned long long assetsUploadedFileSize; // @synthesize assetsUploadedFileSize=_assetsUploadedFileSize;
@property unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property unsigned long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property (strong, nonatomic) NSMutableDictionary *chunkCountByChunkProfile; // @synthesize chunkCountByChunkProfile=_chunkCountByChunkProfile;
@property unsigned long long connections; // @synthesize connections=_connections;
@property unsigned long long connectionsCreated; // @synthesize connectionsCreated=_connectionsCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration; // @synthesize duration=_duration;
@property double executing; // @synthesize executing=_executing;
@property (strong, nonatomic) NSMutableDictionary *fileCountByChunkProfile; // @synthesize fileCountByChunkProfile=_fileCountByChunkProfile;
@property (readonly) unsigned long long hash;
@property double queueing; // @synthesize queueing=_queueing;
@property (strong, nonatomic) NSMutableArray *ranges; // @synthesize ranges=_ranges;
@property (readonly) NSArray *rangesCopy;
@property unsigned long long recordsDeleted; // @synthesize recordsDeleted=_recordsDeleted;
@property unsigned long long recordsDownloaded; // @synthesize recordsDownloaded=_recordsDownloaded;
@property unsigned long long recordsUploaded; // @synthesize recordsUploaded=_recordsUploaded;
@property unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property (strong, nonatomic) NSMutableDictionary *requestOperationCountsByType; // @synthesize requestOperationCountsByType=_requestOperationCountsByType;
@property (readonly) NSMutableSet *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property unsigned long long retries; // @synthesize retries=_retries;
@property (strong) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableDictionary *totalBytesByChunkProfile; // @synthesize totalBytesByChunkProfile=_totalBytesByChunkProfile;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_initWithStartDate:(id)arg1;
- (void)addCKSpecificMetricsFromMetrics:(id)arg1;
- (void)addRange:(id)arg1;
- (void)addRequestOperationCountsByOperationType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;

@end
