//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFQueueingStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MFDefaultQueueingStrategy : NSObject <MFQueueingStrategy>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;

@end

