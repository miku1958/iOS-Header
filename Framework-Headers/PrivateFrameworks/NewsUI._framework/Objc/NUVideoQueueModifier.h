//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SVVideoQueueModifying-Protocol.h>

@class NSString;

@interface NUVideoQueueModifier : NSObject <SVVideoQueueModifying>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)modifyQueue:(id)arg1 inTransitionFromVideo:(id)arg2;

@end

