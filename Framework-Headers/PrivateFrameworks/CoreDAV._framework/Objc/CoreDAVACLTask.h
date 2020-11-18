//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask
{
    NSArray *_accessControlEntities;
}

@property (strong, nonatomic) NSArray *accessControlEntities; // @synthesize accessControlEntities=_accessControlEntities;
@property (weak, nonatomic) id<CoreDAVACLTaskDelegate> delegate; // @dynamic delegate;

- (void).cxx_destruct;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)requestBody;

@end

