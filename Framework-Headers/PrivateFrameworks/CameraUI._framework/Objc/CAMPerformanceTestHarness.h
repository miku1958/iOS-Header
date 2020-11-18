//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CAMPerformanceTestHarness : NSObject
{
    NSString *_testName;
    NSMutableArray *_modeChangeListeners;
    CDUnknownBlockType _testCleanupBlock;
}

@property (copy, nonatomic) CDUnknownBlockType testCleanupBlock; // @synthesize testCleanupBlock=_testCleanupBlock;

- (void).cxx_destruct;
- (void)_finishAndCleanupConfiguredTest;
- (void)_registerChangeBlock:(CDUnknownBlockType)arg1 forMode:(long long)arg2 device:(long long)arg3;
- (void)didChangeToMode:(long long)arg1 device:(long long)arg2;
- (id)initWithTestName:(id)arg1;
- (void)runConfiguredTest;

@end

