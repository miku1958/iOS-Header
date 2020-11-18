//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSSecureCoding-Protocol.h>

@class CADisplay, FBSDisplayIdentity, FBSDisplayMode, NSSet, NSString;

@interface FBSDisplayConfiguration : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding>
{
    FBSDisplayIdentity *_identity;
    NSString *_hardwareIdentifier;
    NSString *_name;
    NSString *_deviceName;
    unsigned int _deprecated_seed;
    int _pid;
    long long _tags;
    FBSDisplayMode *_currentMode;
    FBSDisplayMode *_preferredMode;
    NSSet *_otherModes;
    NSSet *_availableModes;
    BOOL _cloningSupported;
    BOOL _overscanned;
    long long _overscanCompensation;
    struct CGSize _overscanAmounts;
    struct CGSize _pixelSize;
    struct CGRect _bounds;
    struct CGPoint _renderingCenter;
    CADisplay *_caDisplay;
    struct CGSize _safeOverscanRatio;
}

@property (readonly, copy, nonatomic) NSSet *availableModes; // @synthesize availableModes=_availableModes;
@property (readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (readonly, nonatomic, getter=isCarDisplay) BOOL carDisplay;
@property (readonly, nonatomic, getter=isCarInstrumentsDisplay) BOOL carInstrumentsDisplay;
@property (readonly, nonatomic, getter=isCloningSupported) BOOL cloningSupported; // @synthesize cloningSupported=_cloningSupported;
@property (readonly, nonatomic) long long colorGamut;
@property (readonly, copy, nonatomic) FBSDisplayMode *currentMode; // @synthesize currentMode=_currentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, copy, nonatomic) NSString *hardwareIdentifier; // @synthesize hardwareIdentifier=_hardwareIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *identity; // @synthesize identity=_identity;
@property (readonly, nonatomic, getter=isMainDisplay) BOOL mainDisplay;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) double nativeOrientation;
@property (readonly, nonatomic) long long overscanCompensation; // @synthesize overscanCompensation=_overscanCompensation;
@property (readonly, nonatomic, getter=isOverscanned) BOOL overscanned; // @synthesize overscanned=_overscanned;
@property (readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property (readonly, copy, nonatomic) FBSDisplayMode *preferredMode;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) struct CGPoint renderingCenter; // @synthesize renderingCenter=_renderingCenter;
@property (readonly, nonatomic) struct CGSize safeOverscanRatio; // @synthesize safeOverscanRatio=_safeOverscanRatio;
@property (readonly, nonatomic) double scale;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long tags; // @synthesize tags=_tags;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CADisplay;
- (id)_initWithDisplay:(id)arg1 assertIfInvalid:(BOOL)arg2;
- (id)_initWithIdentity:(id)arg1 hardwareIdentifier:(id)arg2 name:(id)arg3 deviceName:(id)arg4 seed:(unsigned int)arg5 tags:(long long)arg6 currentMode:(id)arg7 preferredMode:(id)arg8 otherModes:(id)arg9 cloningSupported:(BOOL)arg10 overscanned:(BOOL)arg11 overscanCompensation:(long long)arg12 safeOverscanRatio:(struct CGSize)arg13 pixelSize:(struct CGSize)arg14 bounds:(struct CGRect)arg15 renderingCenter:(struct CGPoint)arg16 validityCheck:(long long)arg17;
- (id)_nameForDisplayType;
- (long long)_nativeRotation;
- (id)caDisplay;
- (id)copyForSecureRendering;
- (id)copyWithOverrideMode:(id)arg1;
- (id)copyWithUniqueIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned int)displayID;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (BOOL)expectsSecureRendering;
- (id)init;
- (id)initWithCADisplay:(id)arg1;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isConnected;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHiddenDisplay;
- (struct CGPoint)nativeCenter;
- (double)orientation;
- (struct CGRect)referenceBounds;
- (unsigned int)seed;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)supportsExtendedColor;
- (long long)type;
- (id)uniqueID;
- (id)uniqueIdentifier;

@end

