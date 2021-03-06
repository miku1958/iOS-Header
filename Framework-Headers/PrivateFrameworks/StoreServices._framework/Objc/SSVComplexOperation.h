//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVOperation.h>

@class NSDictionary, SSURLBag, SSVFairPlaySAPSession;

@interface SSVComplexOperation : SSVOperation
{
    SSVFairPlaySAPSession *_sapSession;
    SSURLBag *_urlBag;
    NSDictionary *_urlBagDictionary;
}

@property (strong) SSVFairPlaySAPSession *SAPSession;
@property (readonly, copy) NSDictionary *URLBagDictionary;

- (void).cxx_destruct;
- (void)configureWithURLBag:(id)arg1;
- (void)configureWithURLBagDictionary:(id)arg1;
- (id)newLoadURLOperationWithRequest:(id)arg1;

@end

