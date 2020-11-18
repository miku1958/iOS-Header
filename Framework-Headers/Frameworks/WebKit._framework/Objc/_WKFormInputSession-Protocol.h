//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSArray, NSObject, NSString, UIView;
@protocol NSSecureCoding, _WKFocusedElementInfo;

@protocol _WKFormInputSession <NSObject>

@property (copy, nonatomic) NSString *accessoryViewCustomButtonTitle;
@property (nonatomic) BOOL accessoryViewShouldNotShow;
@property (strong, nonatomic) UIView *customInputView;
@property (readonly, nonatomic) id<_WKFocusedElementInfo> focusedElementInfo;
@property (nonatomic) BOOL forceSecureTextEntry;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

@end
