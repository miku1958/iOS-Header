//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _HKDocumentQueryServerConfiguration : HKQueryServerConfiguration
{
    BOOL _includeDocumentData;
    NSArray *_sortDescriptors;
    unsigned long long _limit;
}

@property (nonatomic) BOOL includeDocumentData; // @synthesize includeDocumentData=_includeDocumentData;
@property (nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property (copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

