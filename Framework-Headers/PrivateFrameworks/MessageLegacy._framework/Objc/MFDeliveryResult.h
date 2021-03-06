//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFDeliveryResult : NSObject
{
    BOOL _isWifi;
    long long _status;
    double _duration;
    unsigned long long _bytesSent;
    long long _attributes;
}

@property (nonatomic) long long attributes; // @synthesize attributes=_attributes;
@property (nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL isWifi; // @synthesize isWifi=_isWifi;
@property (nonatomic) long long status; // @synthesize status=_status;

- (id)description;
- (id)initWithStatus:(long long)arg1;

@end

