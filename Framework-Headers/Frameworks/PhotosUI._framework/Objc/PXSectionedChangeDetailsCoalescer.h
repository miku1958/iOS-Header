//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PXMutableArrayChangeDetails, PXSectionedDataSourceChangeDetails;

@interface PXSectionedChangeDetailsCoalescer : NSObject
{
    unsigned long long _fromDataSourceIdentifier;
    unsigned long long _currentToDataSourceIdentifier;
    PXMutableArrayChangeDetails *_sectionChangeDetails;
    NSMutableArray *_itemChangeEntries;
    PXSectionedDataSourceChangeDetails *_cachedResult;
}

@property (readonly, nonatomic) PXSectionedDataSourceChangeDetails *coalescedChangeDetails;

+ (BOOL)_verboseLoggingEnabled;
+ (id)changeDetailsByCoalescingChangeDetails:(id)arg1;
- (void).cxx_destruct;
- (void)addChangeDetails:(id)arg1;
- (id)init;
- (id)initWithSectionedChangeDetails:(id)arg1;

@end

