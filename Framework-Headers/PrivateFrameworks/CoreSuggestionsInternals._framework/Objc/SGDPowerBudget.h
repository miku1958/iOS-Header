//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGDPowerBudget : NSObject
{
    NSString *_bundleId;
}

+ (id)defaultBudget;
- (void).cxx_destruct;
- (BOOL)canDoDiscretionaryWork;
- (void)doDiscretionaryWork:(CDUnknownBlockType)arg1 orElse:(CDUnknownBlockType)arg2;
- (void)endWork;
- (void)startWork;

@end
