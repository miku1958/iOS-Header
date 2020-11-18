//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXProtoFeature-Protocol.h>

@class NSArray, NSString, UIColor;

@interface PXMemoriesDebugFeature : NSObject <PXProtoFeature>
{
    NSString *_featureLocalizedTitle;
    UIColor *_featureTintColor;
    unsigned long long _type;
    NSString *_localizedTitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long featureGroupIndex;
@property (readonly, nonatomic) long long featureKind;
@property (readonly, nonatomic) NSString *featureLocalizedTitle; // @synthesize featureLocalizedTitle=_featureLocalizedTitle;
@property (readonly, nonatomic) NSArray *featurePeople;
@property (readonly, nonatomic) double featureScore;
@property (readonly, nonatomic) UIColor *featureSelectedTintColor;
@property (readonly, nonatomic) UIColor *featureTintColor; // @synthesize featureTintColor=_featureTintColor;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property (readonly, nonatomic) NSString *localizedTypeStringValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)_tintColorForFeatureType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)initWithLocalizedTitle:(id)arg1 type:(unsigned long long)arg2;

@end
