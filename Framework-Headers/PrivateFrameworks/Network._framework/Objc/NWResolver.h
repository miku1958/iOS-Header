//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NWEndpoint, NWParameters;
@protocol OS_nw_resolver;

@interface NWResolver : NSObject
{
    NWEndpoint *_endpoint;
    NWParameters *_parameters;
    NSObject<OS_nw_resolver> *_internalResolver;
    long long _internalStatus;
    NSSet *_internalResolvedEndpoints;
    NSArray *_internalResolvedEndpointArray;
}

@property (readonly) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property (strong) NSArray *internalResolvedEndpointArray; // @synthesize internalResolvedEndpointArray=_internalResolvedEndpointArray;
@property (strong) NSSet *internalResolvedEndpoints; // @synthesize internalResolvedEndpoints=_internalResolvedEndpoints;
@property (readonly) NSObject<OS_nw_resolver> *internalResolver; // @synthesize internalResolver=_internalResolver;
@property long long internalStatus; // @synthesize internalStatus=_internalStatus;
@property (readonly) NWParameters *parameters; // @synthesize parameters=_parameters;
@property (readonly, nonatomic) NSArray *resolvedEndpointArray;
@property (readonly, nonatomic) NSSet *resolvedEndpoints;
@property (readonly, nonatomic) long long status;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
- (id)copyResolvedEndpointArray;
- (id)copyResolvedEndpoints;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithPath:(id)arg1;
- (void)setUpdateHandler;

@end

