//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UILAPropertySource-Protocol.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UILAConfigurationHistory : NSObject <_UILAPropertySource, NSCopying>
{
    NSMutableSet *_newlyHiddenItems;
    NSMutableSet *_newlyUnhiddenItems;
    NSMutableSet *_invalidBaselineConstraints;
    BOOL _layoutFillsCanvas;
    BOOL _layoutUsesCanvasMarginsWhenFilling;
    BOOL _hasEstablishedBaseValues;
    BOOL _inLayoutArrangementUpdateSection;
    long long _axis;
}

@property (readonly, nonatomic) NSSet *_newlyHiddenItems; // @synthesize _newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems; // @synthesize _newlyUnhiddenItems;
@property (nonatomic) long long axis; // @synthesize axis=_axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasEstablishedBaseValues; // @synthesize hasEstablishedBaseValues=_hasEstablishedBaseValues;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isInLayoutArrangementUpdateSection) BOOL inLayoutArrangementUpdateSection; // @synthesize inLayoutArrangementUpdateSection=_inLayoutArrangementUpdateSection;
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints; // @synthesize invalidBaselineConstraints=_invalidBaselineConstraints;
@property (nonatomic) BOOL layoutFillsCanvas; // @synthesize layoutFillsCanvas=_layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; // @synthesize layoutUsesCanvasMarginsWhenFilling=_layoutUsesCanvasMarginsWhenFilling;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateBaselineConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

