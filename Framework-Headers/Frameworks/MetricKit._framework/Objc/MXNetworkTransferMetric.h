//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXNetworkTransferMetric : MXMetric
{
    NSMeasurement *_cumulativeWifiUpload;
    NSMeasurement *_cumulativeWifiDownload;
    NSMeasurement *_cumulativeCellularUpload;
    NSMeasurement *_cumulativeCellularDownload;
}

@property (readonly) NSMeasurement *cumulativeCellularDownload; // @synthesize cumulativeCellularDownload=_cumulativeCellularDownload;
@property (readonly) NSMeasurement *cumulativeCellularUpload; // @synthesize cumulativeCellularUpload=_cumulativeCellularUpload;
@property (readonly) NSMeasurement *cumulativeWifiDownload; // @synthesize cumulativeWifiDownload=_cumulativeWifiDownload;
@property (readonly) NSMeasurement *cumulativeWifiUpload; // @synthesize cumulativeWifiUpload=_cumulativeWifiUpload;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCumulativeWifiUploadMeasurement:(id)arg1 cumulativeWifiDownloadMeasurement:(id)arg2 cumulativeCellularUploadMeasurement:(id)arg3 cumulativeCellularDownloadMeasurement:(id)arg4;
- (id)toDictionary;

@end
