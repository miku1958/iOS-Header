//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DEDAnalytics : NSObject
{
}

+ (void)didCheckInDeferredExtensionsWithCount:(unsigned long long)arg1;
+ (void)didCompleteBugSessionWithState:(long long)arg1;
+ (void)didCreateBugSessionForApp:(id)arg1;
+ (void)didStartDaemon;
+ (void)didStartExtensionWithIdentifier:(id)arg1;
+ (void)extensionDidScheduleExtensionWithIdentifier:(id)arg1 delay:(unsigned long long)arg2;
+ (void)extensionWithIdentifier:(id)arg1 didCompleteWithFileCount:(unsigned long long)arg2 bytesCollected:(unsigned long long)arg3 duration:(unsigned long long)arg4 errorCode:(long long)arg5;
+ (void)finisherDidCompleteWithDuration:(unsigned long long)arg1 uploadedByteCount:(unsigned long long)arg2 usingFinishingMove:(long long)arg3 withState:(long long)arg4;
+ (void)finisherDidStartWithFileCount:(unsigned long long)arg1 expectedByteUploadCount:(unsigned long long)arg2 finishingMove:(long long)arg3;
+ (id)log;

@end

