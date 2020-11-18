//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUICore/UITextInputTraits-Protocol.h>

@class NSArray, NSString;

@protocol WFAlertTextField <UITextInputTraits>

@property (nonatomic) long long alertTextInputMode;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long clearButtonMode;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long returnKeyType;
@property (copy, nonatomic) NSArray *suggestions;
@property (copy, nonatomic) NSString *text;

+ (BOOL)usesSuggestions;
@end
