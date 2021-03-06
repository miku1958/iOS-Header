//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol NSSecureCoding;

@protocol _WKFocusedElementInfo <NSObject>

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *placeholder;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property (readonly, copy, nonatomic) NSString *value;

@end

