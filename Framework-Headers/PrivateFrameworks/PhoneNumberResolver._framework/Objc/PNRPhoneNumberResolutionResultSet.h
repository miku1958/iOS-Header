//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PNRPhoneNumberResolutionResultSet : NSObject
{
    NSMutableDictionary *_results;
    struct os_unfair_lock_s _resultsLock;
}

- (void).cxx_destruct;
- (id)description;
- (void)enumerateResolutionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)setError:(id)arg1 forPhoneNumber:(id)arg2;
- (void)setResult:(id)arg1 forPhoneNumber:(id)arg2;

@end

