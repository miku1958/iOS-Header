//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@protocol _MFSearchResultsConsumer;

@interface _MFSearchProcessResultsOperation : NSOperation
{
    id<_MFSearchResultsConsumer> _consumer;
    unsigned long long _type;
    CDUnknownBlockType _completionBlock;
}

+ (id)operationWithResultsOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2 consumer:(id)arg3;
- (void).cxx_destruct;
- (void)main;

@end

