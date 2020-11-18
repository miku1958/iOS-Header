//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXCallSource.h>

@class CXInProcessProvider;

@interface CXInProcessCallSource : CXCallSource
{
    CXInProcessProvider *_provider;
}

@property (strong, nonatomic) CXInProcessProvider *provider; // @synthesize provider=_provider;

- (void).cxx_destruct;
- (id)identifier;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isPermittedToUsePublicAPI;
- (int)processIdentifier;
- (id)vendorProtocolDelegate;

@end
