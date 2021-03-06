//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface IAPNavigationAccessory : NSObject
{
    BOOL __wasFoundInLastUpdate;
    unsigned long long _identifier;
    NSSet *_components;
}

@property BOOL _wasFoundInLastUpdate; // @synthesize _wasFoundInLastUpdate=__wasFoundInLastUpdate;
@property (strong) NSSet *components; // @synthesize components=_components;
@property unsigned long long identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDict:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)requestedSourceNameForAnyComponent;
- (BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;

@end

