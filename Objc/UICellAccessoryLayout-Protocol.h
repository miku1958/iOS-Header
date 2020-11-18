//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSString, UICellAccessoryManager, _UICellAccessory;

@protocol UICellAccessoryLayout <NSObject>

@property (copy, nonatomic) CDUnknownBlockType disclosureLayoutWidthProvider;
@property (nonatomic) unsigned long long edge;
@property (weak, nonatomic) UICellAccessoryManager *manager;
@property (nonatomic) double safeAreaInset;
@property (copy, nonatomic) CDUnknownBlockType standardLayoutWidthProvider;

- (struct CGRect)endLayout;
- (double)finalAlphaForAccessory:(_UICellAccessory *)arg1;
- (struct CGRect)finalFrameForAccessory:(_UICellAccessory *)arg1;
- (double)initialAlphaForAccessory:(_UICellAccessory *)arg1;
- (struct CGRect)initialFrameForAccessory:(_UICellAccessory *)arg1;
- (void)prepareLayoutForAccessories:(NSArray *)arg1 previousAccessories:(NSArray *)arg2 configurationIdentifier:(NSString *)arg3;
@end

