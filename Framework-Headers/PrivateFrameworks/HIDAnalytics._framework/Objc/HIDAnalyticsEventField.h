//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HIDAnalytics/HIDAnalyticsEventFieldProtocol-Protocol.h>

@class NSString;

@interface HIDAnalyticsEventField : NSObject <HIDAnalyticsEventFieldProtocol>
{
    unsigned long long integerValue;
    NSString *_fieldName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong) id value;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (void)setIntegerValue:(unsigned long long)arg1;

@end
