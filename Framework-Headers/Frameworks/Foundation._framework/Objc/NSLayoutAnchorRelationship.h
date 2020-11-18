//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSLayoutRelationship-Protocol.h>

@class NSLayoutAnchor, NSString;

@interface NSLayoutAnchorRelationship : NSObject <NSLayoutRelationship>
{
    NSLayoutAnchor *_firstAnchor;
    NSLayoutAnchor *_secondAnchor;
    long long _relation;
    NSString *_identifier;
    double _constant;
    double _multiplier;
    float _priority;
}

@property (readonly) double constant; // @synthesize constant=_constant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSLayoutAnchor *firstAnchor; // @synthesize firstAnchor=_firstAnchor;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) double multiplier; // @synthesize multiplier=_multiplier;
@property (readonly) float priority; // @synthesize priority=_priority;
@property (readonly) long long relation; // @synthesize relation=_relation;
@property (readonly, copy) NSString *relationshipDescription;
@property (readonly, copy) NSLayoutAnchor *secondAnchor; // @synthesize secondAnchor=_secondAnchor;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFirstAnchor:(id)arg1 secondAnchor:(id)arg2 relation:(long long)arg3 multiplier:(double)arg4 constant:(double)arg5 priority:(float)arg6 identifier:(id)arg7;
- (BOOL)isEqual:(id)arg1;
- (id)makeChildrenRelationships;
- (id)makeLayoutConstraint;

@end

