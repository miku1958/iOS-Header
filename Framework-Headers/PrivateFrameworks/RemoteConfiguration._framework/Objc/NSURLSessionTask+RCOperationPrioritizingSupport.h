//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLSessionTask.h>

#import <RemoteConfiguration/RCOperationPrioritizing-Protocol.h>

@class NSString;

@interface NSURLSessionTask (RCOperationPrioritizingSupport) <RCOperationPrioritizing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long relativePriority;
@property (readonly) Class superclass;

@end

