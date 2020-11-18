//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKSampleType, _HKFilter;

__attribute__((visibility("hidden")))
@interface _HKQueryServerDataObject : NSObject <NSSecureCoding>
{
    BOOL _shouldStayAliveAfterInitialResults;
    HKSampleType *_sampleType;
    _HKFilter *_filter;
}

@property (strong, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property (strong, nonatomic) HKSampleType *sampleType; // @synthesize sampleType=_sampleType;
@property (nonatomic) BOOL shouldStayAliveAfterInitialResults; // @synthesize shouldStayAliveAfterInitialResults=_shouldStayAliveAfterInitialResults;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

