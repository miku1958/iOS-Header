//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPLabelMatcher : NSObject
{
    struct NSDictionary *_map;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (struct NSDictionary *)_generateMap;
- (id)init;
- (unsigned long long)matchFromLabel:(id)arg1 toLabel:(id)arg2;

@end

