//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationController.h>

#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class NSString;
@protocol NTKMonogramComplicationDisplay;

@interface NTKMonogramComplicationController : NTKComplicationController <NTKTimeTravel>
{
    NSString *_monogramText;
}

@property (readonly, weak, nonatomic) id<NTKMonogramComplicationDisplay> legacyDisplay; // @dynamic legacyDisplay;

+ (BOOL)_acceptsComplicationType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_activate;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_handleCustomMonogramChanged;
- (void)_handleFaceDefaultsChanged;
- (void)_handleLocaleChange;
- (void)_reloadMonogramText;
- (void)_updateDisplay;
- (BOOL)hasTapAction;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;

@end

