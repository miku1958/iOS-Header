//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AKURLRequestApprover : NSObject
{
    NSArray *_whiteListedPaths;
}

- (void).cxx_destruct;
- (BOOL)_matchInputAgainstPaths:(id)arg1;
- (id)initWithWhitelistedPaths:(id)arg1;
- (BOOL)shouldAllowRequest:(id)arg1;

@end

