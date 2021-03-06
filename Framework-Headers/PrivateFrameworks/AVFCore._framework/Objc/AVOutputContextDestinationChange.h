//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVOutputContextDestinationChangeInternal, NSString;

@interface AVOutputContextDestinationChange : NSObject
{
    AVOutputContextDestinationChangeInternal *_ivars;
}

@property (readonly) NSString *cancellationReason;
@property (readonly) long long status;

- (void)_setStatus:(long long)arg1 cancellationReason:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)markAsCancelledWithReason:(id)arg1;
- (void)markAsFailed;
- (void)markAsFinished;
- (void)markAsInProgress;

@end

