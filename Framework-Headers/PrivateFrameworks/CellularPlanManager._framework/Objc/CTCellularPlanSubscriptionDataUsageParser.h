//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/CTCellularPlanValidating-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTCellularPlanSubscriptionDataUsageParser : NSObject <CTCellularPlanValidating>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)validate:(id)arg1;
+ (BOOL)validate:(id)arg1 parseTo:(id *)arg2;

@end

