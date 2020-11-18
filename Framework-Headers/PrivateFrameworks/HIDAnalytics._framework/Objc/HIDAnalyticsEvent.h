//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface HIDAnalyticsEvent : NSObject
{
    NSMutableDictionary *_fields;
    BOOL _isUpdated;
    NSString *_name;
    NSDictionary *_desc;
}

@property (strong) NSDictionary *desc; // @synthesize desc=_desc;
@property (strong) NSString *name; // @synthesize name=_name;

- (void).cxx_destruct;
- (void)activate;
- (void)addField:(id)arg1;
- (void)addHistogramFieldWithSegments:(id)arg1 segments:(struct _HIDAnalyticsHistogramSegmentConfig *)arg2 count:(long long)arg3;
- (void)cancel;
- (id)description;
- (id)initWithAttributes:(id)arg1 description:(id)arg2;
- (void)setIntegerValue:(unsigned long long)arg1;
- (void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2;
- (void)setValue:(id)arg1;
- (id)value;

@end
