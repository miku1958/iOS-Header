//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CALayer, CCVegaMarkItem, NSObject, NSString;
@protocol CCVegaMarkInterface;

@protocol CCVegaMarkInterface

@property (strong, nonatomic) CALayer *caLayer;
@property (readonly, nonatomic) BOOL clip;
@property (readonly, nonatomic) BOOL interactive;
@property (nonatomic) BOOL isDirty;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (readonly, nonatomic) NSString *marktype;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) double zindex;

- (NSString *)getString:(NSString *)arg1 defaultValue:(NSString *)arg2;
- (BOOL)isEqual:(NSObject<CCVegaMarkInterface> *)arg1;
- (CCVegaMarkItem *)itemAtIndex:(unsigned long long)arg1;
@end

