//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXConditionalHints-Protocol.h>

@class NSString;

@interface SXConditionalHints : SXJSONObject <SXConditionalHints>
{
}

@property (readonly, nonatomic) BOOL autoplacement; // @dynamic autoplacement;
@property (readonly, nonatomic) BOOL componentLayouts; // @dynamic componentLayouts;
@property (readonly, nonatomic) BOOL componentStyles; // @dynamic componentStyles;
@property (readonly, nonatomic) BOOL componentTextStyles; // @dynamic componentTextStyles;
@property (readonly, nonatomic) BOOL components; // @dynamic components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL documentStyle; // @dynamic documentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL textStyles; // @dynamic textStyles;

- (BOOL)BOOLValueForJSONValue:(id)arg1 type:(int)arg2;
- (BOOL)autoplacementWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)componentLayoutsWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)componentStylesWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)componentTextStylesWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)componentsWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)documentStyleWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)textStylesWithValue:(id)arg1 withType:(int)arg2;

@end
