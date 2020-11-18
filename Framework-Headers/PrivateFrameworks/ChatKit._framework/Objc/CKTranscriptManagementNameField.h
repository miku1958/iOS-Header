//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/UITextFieldDelegate-Protocol.h>

@class NSString, UILabel, UITextField, _UIBackdropView;
@protocol CKTranscriptManagementNameFieldDelegate;

@interface CKTranscriptManagementNameField : UIView <UITextFieldDelegate>
{
    BOOL _isOverlay;
    BOOL _enabled;
    id<CKTranscriptManagementNameFieldDelegate> _delegate;
    UILabel *_fieldLabel;
    UITextField *_textField;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    _UIBackdropView *_backdropView;
}

@property (strong, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property (strong, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<CKTranscriptManagementNameFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) UILabel *fieldLabel; // @synthesize fieldLabel=_fieldLabel;
@property (copy, nonatomic) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isOverlay; // @synthesize isOverlay=_isOverlay;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property (strong, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;

+ (double)preferredHeight;
- (void)commitGroupName;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end

