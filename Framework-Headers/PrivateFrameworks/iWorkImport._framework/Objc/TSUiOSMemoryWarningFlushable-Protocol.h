//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSUFlushingManager;

@protocol TSUiOSMemoryWarningFlushable <NSObject>
- (void)flush;

@optional
- (int)flushCost;
- (int)reloadCost;
- (void)setFlushingManager:(TSUFlushingManager *)arg1;
@end

