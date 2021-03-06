//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICUserIdentityProperties;

__attribute__((visibility("hidden")))
@interface MPCModelGenericAVItemUserIdentityPropertySet : NSObject
{
    ICUserIdentityProperties *_identityProperties;
    ICUserIdentityProperties *_delegatedIdentityProperties;
}

@property (copy, nonatomic) ICUserIdentityProperties *delegatedIdentityProperties; // @synthesize delegatedIdentityProperties=_delegatedIdentityProperties;
@property (copy, nonatomic) ICUserIdentityProperties *identityProperties; // @synthesize identityProperties=_identityProperties;

+ (void)identityPropertySetFromRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)initWithIdentityProperties:(id)arg1 delegatedIdentityProperties:(id)arg2;

@end

