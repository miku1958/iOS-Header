//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _GEOPlaceDataRequestHelper : NSObject
{
    CDUnknownBlockType _requestHandler;
    NSDictionary *_identifierOrderMap;
    NSMutableSet *_remaningIdentifiers;
    NSMutableArray *_results;
}

+ (id)helperExpiredIdentifiers:(id)arg1;
+ (id)helperForHandler:(CDUnknownBlockType)arg1 identifiers:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (void)failAllRemainingRequests;
- (BOOL)finishedIdentifier:(id)arg1 withResult:(id)arg2 error:(id)arg3;

@end

