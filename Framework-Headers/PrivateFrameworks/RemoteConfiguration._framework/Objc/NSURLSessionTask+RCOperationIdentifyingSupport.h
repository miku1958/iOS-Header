//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLSessionTask.h>

#import <RemoteConfiguration/RCOperationIdentifying-Protocol.h>

@class NSString;

@interface NSURLSessionTask (RCOperationIdentifyingSupport) <RCOperationIdentifying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)longOperationDescription;
- (id)shortOperationDescription;
@end

