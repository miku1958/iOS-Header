//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUProgress.h>

@class NSArray, NSProgress;

@interface TSUNSProgress : TSUProgress
{
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (void).cxx_destruct;
- (id)init;
- (id)initForSubclass;
- (id)initWithNSProgress:(id)arg1;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (id)message;
- (void)setMessage:(id)arg1;
- (double)value;

@end
