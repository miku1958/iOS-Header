//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPContainerEdit-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MSPContainerEdit : NSObject <MSPContainerEdit>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)ifAddition:(CDUnknownBlockType)arg1 ifRemoval:(CDUnknownBlockType)arg2 ifReplacement:(CDUnknownBlockType)arg3 ifContentUpdate:(CDUnknownBlockType)arg4 ifReplacedEntirely:(CDUnknownBlockType)arg5;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;

@end
