//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__MusicLibraryAddKeepLocalControlAccessibility_super.h"

@class NSString;

@interface MusicLibraryAddKeepLocalControlAccessibility : __MusicLibraryAddKeepLocalControlAccessibility_super
{
}

@property (strong, nonatomic, setter=_accessibilitySetCustomActionLabel:) NSString *_accessibilityCustomActionLabel;

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityCustomActionLabelForControlStatus:(struct MusicLibraryAddKeepLocalControlStatus)arg1;
- (id)_accessibilityLabelForStatusType:(long long)arg1;
- (id)_accessibilityValueForStatusType:(long long)arg1 andDownloadProgress:(double)arg2;
- (BOOL)_accessibilityisStatusStructValidated;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (void)setControlStatus:(struct MusicLibraryAddKeepLocalControlStatus)arg1 animated:(BOOL)arg2;

@end

