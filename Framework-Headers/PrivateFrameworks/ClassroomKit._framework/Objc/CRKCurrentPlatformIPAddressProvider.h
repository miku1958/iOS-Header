//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIPAddressProviding-Protocol.h>

@class NSString;
@protocol CRKIPAddressProviding;

@interface CRKCurrentPlatformIPAddressProvider : NSObject <CRKIPAddressProviding>
{
    id<CRKIPAddressProviding> _baseProvider;
}

@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly, nonatomic) id<CRKIPAddressProviding> baseProvider; // @synthesize baseProvider=_baseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingIPAddress;
- (void).cxx_destruct;
- (id)init;
- (id)makeProviderForCurrentPlatform;

@end

