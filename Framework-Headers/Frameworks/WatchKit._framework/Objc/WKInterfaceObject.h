//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WKInterfaceObject : NSObject
{
    NSString *_interfaceProperty;
    NSString *_viewControllerID;
    NSString *_propertyIndex;
    long long _tableIndex;
    long long _rowIndex;
}

@property (copy, nonatomic) NSString *interfaceProperty; // @synthesize interfaceProperty=_interfaceProperty;
@property (strong, nonatomic) NSString *propertyIndex; // @synthesize propertyIndex=_propertyIndex;
@property (nonatomic) long long rowIndex; // @synthesize rowIndex=_rowIndex;
@property (nonatomic) long long tableIndex; // @synthesize tableIndex=_tableIndex;
@property (copy, nonatomic) NSString *viewControllerID; // @synthesize viewControllerID=_viewControllerID;

- (void).cxx_destruct;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5;
- (void)_sendValueChanged:(id)arg1;
- (void)_sendValueChanged:(id)arg1 forProperty:(id)arg2;
- (void)_setImage:(id)arg1 forProperty:(id)arg2;
- (void)_setImageData:(id)arg1 forProperty:(id)arg2;
- (void)_setImageNamed:(id)arg1 forProperty:(id)arg2;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (id)init;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityImageRegions:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHeight:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setIsAccessibilityElement:(BOOL)arg1;
- (void)setRelativeHeight:(double)arg1 withAdjustment:(double)arg2;
- (void)setRelativeWidth:(double)arg1 withAdjustment:(double)arg2;
- (void)setRotation:(double)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (void)setWidth:(double)arg1;
- (void)sizeToFitHeight;
- (void)sizeToFitWidth;

@end

