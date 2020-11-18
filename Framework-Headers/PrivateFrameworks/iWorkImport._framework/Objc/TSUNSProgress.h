//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUProgress.h>

@class NSArray, NSProgress;

__attribute__((visibility("hidden")))
@interface TSUNSProgress : TSUProgress
{
    NSProgress *mNSProgress;
    NSArray *mNSProgressObservers;
}

- (void)dealloc;
- (id)init;
- (id)initWithNSProgress:(id)arg1;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (id)message;
- (void)setMessage:(id)arg1;
- (double)value;

@end

