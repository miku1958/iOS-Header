//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutInstruction-Protocol.h>

@class NSString;

@interface SXDefaultLayoutInstruction : NSObject <SXLayoutInstruction>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)instruction;
- (BOOL)isFulfilledForBlueprint:(id)arg1;

@end
