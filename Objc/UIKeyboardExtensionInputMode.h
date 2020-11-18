//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKeyboardInputMode.h>

@class NSExtension;

__attribute__((visibility("hidden")))
@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode
{
    NSExtension *_extension;
}

@property (strong, nonatomic) NSExtension *extension; // @synthesize extension=_extension;

- (id)containingBundle;
- (id)containingBundleDisplayName;
- (void)dealloc;
- (BOOL)defaultLayoutIsASCIICapable;
- (id)displayName;
- (id)extendedDisplayName;
- (id)hardwareLayout;
- (id)identifierWithLayouts;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isAllowedForTraits:(id)arg1;
- (BOOL)isDefaultRightToLeft;
- (BOOL)isDesiredForTraits:(id)arg1;
- (BOOL)isExtensionInputMode;
- (id)normalizedIdentifierLevels;
- (void)setPrimaryLanguage:(id)arg1;

@end

