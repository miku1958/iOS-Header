//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXCondition-Protocol.h>

@class NSString;

@interface SXCondition : SXJSONObject <SXCondition>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long horizontalSizeClass; // @dynamic horizontalSizeClass;
@property (readonly, nonatomic) unsigned long long maxColumns; // @dynamic maxColumns;
@property (readonly, nonatomic) NSString *maxContentSizeCategory; // @dynamic maxContentSizeCategory;
@property (readonly, nonatomic) NSString *maxSpecVersion; // @dynamic maxSpecVersion;
@property (readonly, nonatomic) double maxViewportAspectRatio; // @dynamic maxViewportAspectRatio;
@property (readonly, nonatomic) double maxViewportWidth; // @dynamic maxViewportWidth;
@property (readonly, nonatomic) unsigned long long minColumns; // @dynamic minColumns;
@property (readonly, nonatomic) NSString *minContentSizeCategory; // @dynamic minContentSizeCategory;
@property (readonly, nonatomic) NSString *minSpecVersion; // @dynamic minSpecVersion;
@property (readonly, nonatomic) double minViewportAspectRatio; // @dynamic minViewportAspectRatio;
@property (readonly, nonatomic) double minViewportWidth; // @dynamic minViewportWidth;
@property (readonly, nonatomic) NSString *platform; // @dynamic platform;
@property (readonly, nonatomic) NSString *subscriptionStatus; // @dynamic subscriptionStatus;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long testing; // @dynamic testing;
@property (readonly, nonatomic) long long verticalSizeClass; // @dynamic verticalSizeClass;
@property (readonly, nonatomic) NSString *viewLocation; // @dynamic viewLocation;

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;
- (id)contentSizeCategoryFromJSONContentSizeCategory:(id)arg1;
- (long long)horizontalSizeClassWithValue:(id)arg1 withType:(int)arg2;
- (long long)interfaceSizeClassFromJSONSizeClass:(id)arg1;
- (id)maxContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2;
- (double)maxViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (double)maxViewportWidthWithValue:(id)arg1 withType:(int)arg2;
- (id)minContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2;
- (double)minViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (double)minViewportWidthWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)testingWithValue:(id)arg1 withType:(int)arg2;
- (long long)verticalSizeClassWithValue:(id)arg1 withType:(int)arg2;

@end

