//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMutableMessage.h>

@interface HMFMutableMessage (InternalMessages)

@property (nonatomic, getter=isInternal) BOOL internal;

+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
@end
