//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXBlueprintMarker-Protocol.h>

@class NSArray, NSString;
@protocol SXComponent, SXComponentAnchor;

@interface SXBlueprintMarker : NSObject <SXBlueprintMarker>
{
    id<SXComponent> _leadingComponent;
    id<SXComponent> _trailingComponent;
    NSArray *_path;
    id<SXComponentAnchor> _componentAnchor;
    struct CGPoint _approximateLocation;
}

@property (readonly, nonatomic) struct CGPoint approximateLocation; // @synthesize approximateLocation=_approximateLocation;
@property (strong, nonatomic) id<SXComponentAnchor> componentAnchor; // @synthesize componentAnchor=_componentAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXComponent> leadingComponent; // @synthesize leadingComponent=_leadingComponent;
@property (readonly, nonatomic) NSArray *path; // @synthesize path=_path;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SXComponent> trailingComponent; // @synthesize trailingComponent=_trailingComponent;

- (void).cxx_destruct;
- (id)initWithLeadingComponent:(id)arg1 trailingComponent:(id)arg2 approximateLocation:(struct CGPoint)arg3 path:(id)arg4;
- (BOOL)isEqualToMarker:(id)arg1;

@end

