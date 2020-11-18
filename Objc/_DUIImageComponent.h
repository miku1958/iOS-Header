//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_DUIImageComponentWithoutSlot.h>

@interface _DUIImageComponent : _DUIImageComponentWithoutSlot
{
    BOOL _hidesImage;
    unsigned int _slotID;
    unsigned int _contextID;
    unsigned long long _renderID;
}

@property (nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property (nonatomic) BOOL hidesImage; // @synthesize hidesImage=_hidesImage;
@property (nonatomic) unsigned long long renderID; // @synthesize renderID=_renderID;
@property (readonly, nonatomic) BOOL representsPortal;
@property (nonatomic) unsigned int slotID; // @synthesize slotID=_slotID;

+ (BOOL)supportsSecureCoding;
- (void)_configurePortalLayer:(id)arg1;
- (id)addPortalLayerToView:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageComponentWithoutSlot;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)portalView;

@end

