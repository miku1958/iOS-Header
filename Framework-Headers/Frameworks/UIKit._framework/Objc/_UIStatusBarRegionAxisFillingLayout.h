//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarRegionAxisLayout-Protocol.h>

@class NSString;

@interface _UIStatusBarRegionAxisFillingLayout : NSObject <_UIStatusBarRegionAxisLayout>
{
}

@property (readonly, nonatomic) BOOL canOverflowItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fillingLayout;
- (id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4;

@end

