//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CardServices/CRSCardServing-Protocol.h>
#import <CardServices/CRSIdentifiedServing-Protocol.h>

@class NSString;

@interface _CRSPassthroughService : NSObject <CRSCardServing, CRSIdentifiedServing>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;
@property (readonly) Class superclass;

- (BOOL)canSatisfyCardRequest:(id)arg1;
- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)servicePriorityForRequest:(id)arg1;

@end

