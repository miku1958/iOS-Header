//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/_WKFormInputSession-Protocol.h>

@class NSArray, NSString, UIView;
@protocol NSSecureCoding, _WKFocusedElementInfo;

__attribute__((visibility("hidden")))
@interface WKFormInputSession : NSObject <_WKFormInputSession>
{
    struct WeakObjCPtr<WKContentView> _contentView;
    struct RetainPtr<WKFocusedElementInfo> _focusedElementInfo;
    struct RetainPtr<UIView> _customInputView;
    struct RetainPtr<UIView> _customInputAccessoryView;
    struct RetainPtr<NSArray<UITextSuggestion *>> _suggestions;
    BOOL _accessoryViewShouldNotShow;
    BOOL _forceSecureTextEntry;
    BOOL _requiresStrongPasswordAssistance;
}

@property (copy, nonatomic) NSString *accessoryViewCustomButtonTitle;
@property (nonatomic) BOOL accessoryViewShouldNotShow;
@property (strong, nonatomic) UIView *customInputAccessoryView;
@property (strong, nonatomic) UIView *customInputView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<_WKFocusedElementInfo> focusedElementInfo;
@property (nonatomic) BOOL forceSecureTextEntry;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL requiresStrongPasswordAssistance;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)endEditing;
- (id)initWithContentView:(id)arg1 focusedElementInfo:(id)arg2 requiresStrongPasswordAssistance:(BOOL)arg3;
- (void)invalidate;
- (void)reloadFocusedElementContextView;

@end

