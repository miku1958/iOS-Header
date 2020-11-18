//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIAccessibility/NSSecureCoding-Protocol.h>

@class NSArray, UIAccessibilityElementDescription;

@interface UIAccessibilityHierarchyDescription : NSObject <NSSecureCoding>
{
    UIAccessibilityElementDescription *_rootElement;
    NSArray *_leafElements;
}

@property (strong, nonatomic) NSArray *leafElements; // @synthesize leafElements=_leafElements;
@property (strong, nonatomic) UIAccessibilityElementDescription *rootElement; // @synthesize rootElement=_rootElement;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

