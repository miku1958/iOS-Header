//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXConditionHints-Protocol.h>

@class NSString;

@interface SXConditionHints : SXJSONObject <SXConditionHints>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL horizontalSizeClass; // @dynamic horizontalSizeClass;
@property (readonly, nonatomic) BOOL maxColumns; // @dynamic maxColumns;
@property (readonly, nonatomic) BOOL maxContentSizeCategory; // @dynamic maxContentSizeCategory;
@property (readonly, nonatomic) BOOL maxSpecVersion; // @dynamic maxSpecVersion;
@property (readonly, nonatomic) BOOL maxViewportAspectRatio; // @dynamic maxViewportAspectRatio;
@property (readonly, nonatomic) BOOL maxViewportWidth; // @dynamic maxViewportWidth;
@property (readonly, nonatomic) BOOL minColumns; // @dynamic minColumns;
@property (readonly, nonatomic) BOOL minContentSizeCategory; // @dynamic minContentSizeCategory;
@property (readonly, nonatomic) BOOL minSpecVersion; // @dynamic minSpecVersion;
@property (readonly, nonatomic) BOOL minViewportAspectRatio; // @dynamic minViewportAspectRatio;
@property (readonly, nonatomic) BOOL minViewportWidth; // @dynamic minViewportWidth;
@property (readonly, nonatomic) BOOL platform; // @dynamic platform;
@property (readonly, nonatomic) BOOL preferredColorScheme; // @dynamic preferredColorScheme;
@property (readonly, nonatomic) BOOL subscriptionStatus; // @dynamic subscriptionStatus;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL testing; // @dynamic testing;
@property (readonly, nonatomic) BOOL verticalSizeClass; // @dynamic verticalSizeClass;
@property (readonly, nonatomic) BOOL viewLocation; // @dynamic viewLocation;

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;
- (BOOL)BOOLValueForJSONValue:(id)arg1 type:(int)arg2;
- (BOOL)horizontalSizeClassWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)maxColumnsWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)maxContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)maxSpecVersionWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)maxViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)maxViewportWidthWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)minColumnsWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)minContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)minSpecVersionWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)minViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)minViewportWidthWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)platformWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)preferredColorSchemeWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)subscriptionStatusWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)testingWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)verticalSizeClassWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)viewLocationWithValue:(id)arg1 withType:(int)arg2;

@end
