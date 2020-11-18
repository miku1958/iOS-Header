//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXImageViewFactory-Protocol.h>

@class NSString;
@protocol SXReachabilityProvider, SXResourceDataSourceProvider;

@interface SXImageViewFactory : NSObject <SXImageViewFactory>
{
    id<SXResourceDataSourceProvider> _resourceDataSourceProvider;
    id<SXReachabilityProvider> _reachabilityProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXReachabilityProvider> reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
@property (readonly, nonatomic) id<SXResourceDataSourceProvider> resourceDataSourceProvider; // @synthesize resourceDataSourceProvider=_resourceDataSourceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)imageViewForResource:(id)arg1;
- (id)initWithResourceDataSourceProvider:(id)arg1 reachabilityProvider:(id)arg2;

@end

