//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface NSObject (UIAccessibilityContainer)

@property (nonatomic) long long accessibilityContainerType;
@property (strong, nonatomic) NSArray *accessibilityElements;

- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)storedAccessibilityContainerType;
@end

