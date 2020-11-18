//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

#import <SpringBoardUI/SBUIControlCenterControl-Protocol.h>

@class NSString;

@interface SBUIControlCenterLabel : UILabel <SBUIControlCenterControl>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)_currentState;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateAttributedText;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;

@end

