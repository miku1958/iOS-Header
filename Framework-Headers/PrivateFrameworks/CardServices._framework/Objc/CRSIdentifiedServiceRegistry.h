//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

@interface CRSIdentifiedServiceRegistry : NSObject
{
    NSMutableOrderedSet *_identifiedServices;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)identifiedServices;
- (id)init;
- (void)registerIdentifiedService:(id)arg1;

@end

