//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SXLayoutParametersManager : NSObject
{
    NSMutableDictionary *_durations;
}

@property (readonly, nonatomic) NSMutableDictionary *durations; // @synthesize durations=_durations;

- (void).cxx_destruct;
- (id)init;
- (void)layoutFinishedForTask:(id)arg1 result:(id)arg2;
- (id)layoutParametersForTask:(id)arg1 previousLayoutOptions:(id)arg2;

@end

