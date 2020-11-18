//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardServices/_CRSServiceBundle.h>

#import <CardServices/CRSCardServing-Protocol.h>

@class NSString;
@protocol CRSCardServing;

@interface _CRSCardServiceBundle : _CRSServiceBundle <CRSCardServing>
{
    id<CRSCardServing> _cardService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeCardServiceWithClass:(Class)arg1;
- (BOOL)canSatisfyCardRequest:(id)arg1;
- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)servicePriorityForRequest:(id)arg1;
- (id)underlyingService;

@end
