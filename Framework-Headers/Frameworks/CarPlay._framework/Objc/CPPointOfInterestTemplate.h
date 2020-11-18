//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/CPTemplate.h>

#import <CarPlay/CPEntityClientTemplateDelegate-Protocol.h>
#import <CarPlay/CPEntityProviding-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPPointsOfInterestEntity, NAFuture, NSArray, NSString;
@protocol CPPointOfInterestTemplateDelegate;

@interface CPPointOfInterestTemplate : CPTemplate <NSSecureCoding, CPEntityProviding, CPEntityClientTemplateDelegate>
{
    unsigned long long _selectedIndex;
    id<CPPointOfInterestTemplateDelegate> _pointOfInterestDelegate;
    CPPointsOfInterestEntity *_poiEntity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CPPointsOfInterestEntity *poiEntity; // @synthesize poiEntity=_poiEntity;
@property (weak, nonatomic) id<CPPointOfInterestTemplateDelegate> pointOfInterestDelegate; // @synthesize pointOfInterestDelegate=_pointOfInterestDelegate;
@property (strong, nonatomic) NSArray *pointsOfInterest; // @dynamic pointsOfInterest;
@property (nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property (readonly) Class superclass;
@property (strong, nonatomic) NAFuture *templateProviderFuture; // @dynamic templateProviderFuture;
@property (copy, nonatomic) NSString *title; // @dynamic title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_pointOfInterestWithIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (void)handleActionForControlIdentifier:(id)arg1;
- (void)handleDidSelectPointOfInterestWithIdentifier:(id)arg1;
- (void)handleMapRegionDidChange:(CDStruct_2b0c6e0b)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 pointsOfInterest:(id)arg2 selectedIndex:(unsigned long long)arg3;
- (void)performUpdate;
- (void)setPointsOfInterest:(id)arg1 selectedIndex:(unsigned long long)arg2;

@end
