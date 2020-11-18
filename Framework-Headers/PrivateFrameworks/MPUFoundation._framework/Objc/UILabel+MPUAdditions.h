//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

#import <MPUFoundation/MPUAutoupdatingTextContainer-Protocol.h>

@class MPUTextContainerContentSizeUpdater, NSAttributedString, NSString, UIFont;

@interface UILabel (MPUAdditions) <MPUAutoupdatingTextContainer>

@property (nonatomic, setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:) BOOL MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property (readonly, nonatomic) MPUTextContainerContentSizeUpdater *MPU_contentSizeUpdater;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)MPU_configureWithTextAttributes:(id)arg1;
@end

