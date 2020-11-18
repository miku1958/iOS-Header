//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CKMetric : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_startDate;
    double _duration;
    double _queueing;
    double _executing;
    unsigned long long _bytesUploaded;
    unsigned long long _bytesDownloaded;
    unsigned long long _connections;
    unsigned long long _connectionsCreated;
}

@property unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property unsigned long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property unsigned long long connections; // @synthesize connections=_connections;
@property unsigned long long connectionsCreated; // @synthesize connectionsCreated=_connectionsCreated;
@property double duration; // @synthesize duration=_duration;
@property double executing; // @synthesize executing=_executing;
@property double queueing; // @synthesize queueing=_queueing;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unionMetric:(id)arg1;

@end

