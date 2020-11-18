//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ARAnchor;

@interface ARHitTestResult : NSObject
{
    unsigned long long _type;
    double _distance;
    ARAnchor *_anchor;
    CDStruct_14d5dc5e _localTransform;
    CDStruct_14d5dc5e _worldTransform;
}

@property (strong, nonatomic) ARAnchor *anchor; // @synthesize anchor=_anchor;
@property (nonatomic) double distance; // @synthesize distance=_distance;
@property (nonatomic) CDStruct_14d5dc5e localTransform; // @synthesize localTransform=_localTransform;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property (nonatomic) CDStruct_14d5dc5e worldTransform; // @synthesize worldTransform=_worldTransform;

- (void).cxx_destruct;
- (id)_description:(BOOL)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (id)initWithType:(unsigned long long)arg1;

@end

