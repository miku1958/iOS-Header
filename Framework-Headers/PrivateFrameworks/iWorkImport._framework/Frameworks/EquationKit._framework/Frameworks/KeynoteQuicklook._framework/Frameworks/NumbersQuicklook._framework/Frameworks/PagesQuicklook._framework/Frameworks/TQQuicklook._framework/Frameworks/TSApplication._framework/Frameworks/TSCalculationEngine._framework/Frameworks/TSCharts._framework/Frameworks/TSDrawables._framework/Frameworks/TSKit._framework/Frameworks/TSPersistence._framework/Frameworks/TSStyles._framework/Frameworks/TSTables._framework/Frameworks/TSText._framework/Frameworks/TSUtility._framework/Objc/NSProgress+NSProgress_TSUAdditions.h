//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

@interface NSProgress (NSProgress_TSUAdditions)
+ (id)tsu_progressWithChildren:(id)arg1;
+ (id)tsu_progressWithTSUProgress:(id)arg1 totalUnitCount:(long long)arg2;
- (long long)tsu_pendingUnitCountForIncompleteProgress:(long long)arg1;
- (void)tsu_stopObservingTSUProgress;
@end

