//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@protocol CoreDAVTaskDelegate;

@interface CoreDAVPostTask : CoreDAVPostOrPutTask
{
}

@property (nonatomic) id<CoreDAVTaskDelegate> delegate; // @dynamic delegate;

- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;

@end
