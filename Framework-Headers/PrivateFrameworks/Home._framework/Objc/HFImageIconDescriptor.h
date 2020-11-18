//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFIconDescriptor-Protocol.h>

@class NSString, UIImageSymbolConfiguration;

@interface HFImageIconDescriptor : NSObject <HFIconDescriptor>
{
    BOOL _shouldForceLTR;
    BOOL _isDemoModeDescriptor;
    BOOL _isSystemImage;
    NSString *_imageIdentifier;
    UIImageSymbolConfiguration *_imageSymbolConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // @synthesize imageSymbolConfiguration=_imageSymbolConfiguration;
@property (nonatomic) BOOL isDemoModeDescriptor; // @synthesize isDemoModeDescriptor=_isDemoModeDescriptor;
@property (readonly, nonatomic) BOOL isSystemImage; // @synthesize isSystemImage=_isSystemImage;
@property (readonly, nonatomic) BOOL shouldForceLTR; // @synthesize shouldForceLTR=_shouldForceLTR;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
- (id)initWithDemoModeImageIdentifier:(id)arg1;
- (id)initWithImageIdentifier:(id)arg1;
- (id)initWithSystemImageNamed:(id)arg1;
- (id)initWithSystemImageNamed:(id)arg1 configuration:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
