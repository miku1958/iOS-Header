//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISStoreURLOperation.h>

@class SBKRequest;

__attribute__((visibility("hidden")))
@interface SBKTransactionURLOperation : ISStoreURLOperation
{
    BOOL _shouldAuthenticate;
    SBKRequest *_SBKRequest;
}

@property (strong, nonatomic) SBKRequest *SBKRequest; // @synthesize SBKRequest=_SBKRequest;
@property (nonatomic) BOOL shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;

+ (id)operationWithRequest:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (id)init;

@end

