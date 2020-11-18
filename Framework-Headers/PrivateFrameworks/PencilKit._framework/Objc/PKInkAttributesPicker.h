//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, PKInk, _PKInkAttributesPickerView;
@protocol PKInkAttributesPickerDelegate;

@interface PKInkAttributesPicker : UIViewController <UIPopoverPresentationControllerDelegate>
{
    id<PKInkAttributesPickerDelegate> _delegate;
    _PKInkAttributesPickerView *_pickerView;
    unsigned long long _displayMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) id<PKInkAttributesPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _PKInkAttributesPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property (strong, nonatomic) PKInk *selectedInk;
@property (readonly) Class superclass;

+ (double)representableOpacityForOpacity:(double)arg1;
- (void).cxx_destruct;
- (id)initWithInk:(id)arg1;
- (void)selectedInkDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

