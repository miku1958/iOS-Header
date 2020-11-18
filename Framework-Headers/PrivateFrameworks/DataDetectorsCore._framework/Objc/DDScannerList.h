//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface DDScannerList : NSObject
{
    int _type;
    NSMutableArray *_waitQueue;
    NSMutableArray *_scannerCache;
    NSMutableArray *_activeScanners;
}

- (void)activateScanner:(id)arg1;
- (void)dealloc;
- (CDUnknownBlockType)dequeueJob;
- (void)enqueueJob:(CDUnknownBlockType)arg1;
- (BOOL)full;
- (id)getCachedScanner;
- (id)initWithType:(int)arg1;
- (void)pushBackScanner:(id)arg1;
- (id)scanner;

@end

