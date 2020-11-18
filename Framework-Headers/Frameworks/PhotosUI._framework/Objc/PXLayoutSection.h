//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PXLayoutSection : NSObject
{
    NSMutableDictionary *_geometriesByKind;
    BOOL _accurate;
    unsigned long long _identifier;
    long long _index;
    NSArray *_geometryKinds;
    struct CGRect _frame;
}

@property (nonatomic, getter=isAccurate) BOOL accurate; // @synthesize accurate=_accurate;
@property (nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property (strong, nonatomic) NSArray *geometryKinds; // @synthesize geometryKinds=_geometryKinds;
@property (nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property (nonatomic) long long index; // @synthesize index=_index;
@property (nonatomic) struct CGSize size;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)enumerateGeometriesWithBlock:(CDUnknownBlockType)arg1;
- (id)geometriesWithKind:(long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (void)setGeometries:(id)arg1 withKind:(long long)arg2;

@end
