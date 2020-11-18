//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

#import <NanoTimeKitCompanion/NTKLegibilityView-Protocol.h>

@class NSString, UIColor;

@interface NTKLegibilityLabel : UILabel <NTKLegibilityView>
{
    double _sBlur;
    UIColor *_sColor;
    BOOL _legibilityEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL legibilityEnabled; // @synthesize legibilityEnabled=_legibilityEnabled;
@property (nonatomic) double shadowBlur; // @dynamic shadowBlur;
@property (strong, nonatomic) UIColor *shadowColor; // @dynamic shadowColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets)_contentInsetsFromFonts;
- (void)_updateShadow;
- (id)initWithFrame:(struct CGRect)arg1;

@end
