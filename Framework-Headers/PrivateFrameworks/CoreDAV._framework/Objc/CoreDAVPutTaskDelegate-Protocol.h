//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskDelegate-Protocol.h>

@class CoreDAVPutTask, NSError, NSString;

@protocol CoreDAVPutTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)putTask:(CoreDAVPutTask *)arg1 completedWithNewETag:(NSString *)arg2 error:(NSError *)arg3;
@end

