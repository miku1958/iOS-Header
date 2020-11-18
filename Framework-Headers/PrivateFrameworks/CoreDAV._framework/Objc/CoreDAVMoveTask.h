//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@class NSString;
@protocol CoreDAVMoveTaskDelegate;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask
{
    NSString *_previousETag;
}

@property (nonatomic) id<CoreDAVMoveTaskDelegate> delegate; // @dynamic delegate;
@property (strong, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;

- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (id)additionalHeaderValues;
- (void)dealloc;
- (id)description;
- (id)httpMethod;

@end

