//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFCloudKitWebServiceQueryFilter.h>

@class NSArray;

@interface WFCloudKitWebServiceQueryFilterCombination : WFCloudKitWebServiceQueryFilter
{
    NSArray *_filters;
    unsigned long long _type;
}

@property (strong, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)stringRepresentationWithRecordType:(id)arg1;

@end
