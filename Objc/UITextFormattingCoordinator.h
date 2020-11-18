//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIFontPickerViewControllerDelegate-Protocol.h>

@class NSString;
@protocol UITextFormattingCoordinatorDelegate;

@interface UITextFormattingCoordinator : NSObject <UIFontPickerViewControllerDelegate>
{
    id<UITextFormattingCoordinatorDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UITextFormattingCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)isFontPanelVisible;
+ (id)textFormattingCoordinatorForWindowScene:(id)arg1;
+ (void)toggleFontPanel:(id)arg1;
- (void).cxx_destruct;
- (void)fontPickerViewControllerDidPickFont:(id)arg1;
- (id)initWithWindowScene:(id)arg1;
- (void)setSelectedAttributes:(id)arg1 isMultiple:(BOOL)arg2;
- (void)updateTextAttributesWithConversionHandler:(CDUnknownBlockType)arg1;

@end

