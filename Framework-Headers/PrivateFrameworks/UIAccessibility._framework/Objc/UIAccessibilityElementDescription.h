//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIAccessibility/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSString;

@interface UIAccessibilityElementDescription : NSObject <NSSecureCoding>
{
    BOOL _isAccessibleElement;
    unsigned long long _traits;
    NSString *_label;
    NSAttributedString *_attributedLabel;
    NSString *_value;
    NSAttributedString *_attributedValue;
    struct CGRect _frameInContainerSpace;
    struct CGRect _frame;
}

@property (strong, nonatomic) NSAttributedString *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
@property (strong, nonatomic) NSAttributedString *attributedValue; // @synthesize attributedValue=_attributedValue;
@property (nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property (nonatomic) struct CGRect frameInContainerSpace; // @synthesize frameInContainerSpace=_frameInContainerSpace;
@property (nonatomic) BOOL isAccessibleElement; // @synthesize isAccessibleElement=_isAccessibleElement;
@property (strong, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) unsigned long long traits; // @synthesize traits=_traits;
@property (strong, nonatomic) NSString *value; // @synthesize value=_value;

+ (id)_descriptionWithAXElement:(id)arg1;
+ (id)_descriptionWithLocalElement:(id)arg1;
+ (id)descriptionWithElement:(id)arg1 frameInContainerSpaceOrNil:(struct CGRect)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)convertToAccessibilityElementWithContainer:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

