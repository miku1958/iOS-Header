//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSURLRequestComparator-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSMockURLRequestComparator : NSObject <AMSURLRequestComparator>
{
    CDUnknownBlockType _criteriaBlock;
}

@property (copy, nonatomic) CDUnknownBlockType criteriaBlock; // @synthesize criteriaBlock=_criteriaBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCriteriaBlock:(CDUnknownBlockType)arg1;
- (BOOL)shouldOverrideURLRequest:(id)arg1;

@end

