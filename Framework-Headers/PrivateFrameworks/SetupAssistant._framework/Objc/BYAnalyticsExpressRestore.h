//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BYAnalyticsExpressRestore : NSObject
{
    BOOL _paneShown;
    BOOL _offeredBackup;
    unsigned long long _restoreChoice;
}

@property (nonatomic) BOOL offeredBackup; // @synthesize offeredBackup=_offeredBackup;
@property (nonatomic) BOOL paneShown; // @synthesize paneShown=_paneShown;
@property (nonatomic) unsigned long long restoreChoice; // @synthesize restoreChoice=_restoreChoice;

+ (id)sharedInstance;
- (id)eventPayload;
- (id)init;

@end

