//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/NSObject-Protocol.h>

@class TSPArchiver, TSPArchiverManager, TSPObject;

@protocol TSPArchiverManagerDelegate <NSObject>

@optional
- (void)archiverManager:(TSPArchiverManager *)arg1 didCreateArchiver:(TSPArchiver *)arg2;
- (BOOL)archiverManager:(TSPArchiverManager *)arg1 shouldDelayArchivingObject:(TSPObject *)arg2;
@end

