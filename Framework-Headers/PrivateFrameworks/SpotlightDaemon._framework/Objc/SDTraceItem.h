//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/NSCopying-Protocol.h>

@class NSString;

@interface SDTraceItem : NSObject <NSCopying>
{
    double _startTime;
    long long _identifier;
    double _duration;
    NSString *_label;
    NSObject *_data;
    NSString *_string;
}

@property (strong, nonatomic) NSObject *data; // @synthesize data=_data;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (strong, nonatomic) NSString *string; // @synthesize string=_string;

+ (void)appendDescription:(id)arg1 prefix:(id)arg2 toString:(id)arg3;
+ (id)stringFromReferenceDate:(double)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
