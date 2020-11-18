//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/NSCopying-Protocol.h>
#import <CoverSheet/UICoordinateSpace-Protocol.h>

@class NSString;
@protocol UICoordinateSpace;

@interface CSRegion : NSObject <NSCopying, UICoordinateSpace>
{
    BOOL _hidden;
    BOOL _reservedForHorizontalScrolling;
    NSString *_identifier;
    long long _role;
    id<UICoordinateSpace> _coordinateSpace;
    id<UICoordinateSpace> _identity;
    id _provider;
    struct CGRect _extent;
}

@property (readonly, nonatomic) struct CGRect bounds;
@property (readonly, weak, nonatomic) id<UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct CGRect extent; // @synthesize extent=_extent;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (weak, nonatomic) id<UICoordinateSpace> identity; // @synthesize identity=_identity;
@property (weak, nonatomic) id provider; // @synthesize provider=_provider;
@property (nonatomic, getter=isReservedForHorizontalScrolling) BOOL reservedForHorizontalScrolling; // @synthesize reservedForHorizontalScrolling=_reservedForHorizontalScrolling;
@property (nonatomic) long long role; // @synthesize role=_role;
@property (readonly) Class superclass;

+ (id)regionForCoordinateSpace:(id)arg1;
+ (id)regionForCoordinateSpace:(id)arg1 withExtent:(struct CGRect)arg2;
- (void).cxx_destruct;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoordinateSpace:(id)arg1 withExtent:(struct CGRect)arg2 role:(long long)arg3;
- (BOOL)intersectsCoordinateSpace:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)regionForCoordinateSpace:(id)arg1;
- (id)role:(long long)arg1;

@end
