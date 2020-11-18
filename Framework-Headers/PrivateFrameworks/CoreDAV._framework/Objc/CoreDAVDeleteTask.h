//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask
{
    NSString *_previousETag;
}

@property (weak, nonatomic) id<CoreDAVTaskDelegate> delegate; // @dynamic delegate;
@property (strong, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)requestBody;

@end

