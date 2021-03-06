//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError;
@protocol TLTimelineDataSource;

@interface TLOperation : NSOperation
{
    id<TLTimelineDataSource> _dataSource;
    CDUnknownBlockType _operationCompletionBlock;
    NSError *_error;
}

@property (copy) CDUnknownBlockType completionBlock; // @dynamic completionBlock;
@property (strong) id<TLTimelineDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly) NSError *error; // @synthesize error=_error;
@property (copy) CDUnknownBlockType operationCompletionBlock; // @synthesize operationCompletionBlock=_operationCompletionBlock;

+ (unsigned long long)relativePriority;
- (void).cxx_destruct;
- (id)init;

@end

