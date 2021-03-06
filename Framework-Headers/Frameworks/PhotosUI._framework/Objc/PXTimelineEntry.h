//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDate, NSString, NSURL, PXTimelineCrop;

@interface PXTimelineEntry : NSObject <NSCopying>
{
    unsigned long long _contentType;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_title;
    NSString *_subtitle;
    NSString *_localIdentifier;
    NSString *_assetLocalIdentifier;
    NSURL *_deeplink;
    PXTimelineCrop *_suggestedCrop;
    NSString *_proactiveCriterion;
    double _relevanceScore;
    unsigned long long _rejectReason;
}

@property (readonly, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
@property (readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property (readonly, nonatomic) NSURL *deeplink; // @synthesize deeplink=_deeplink;
@property (strong, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property (readonly, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property (strong, nonatomic) NSString *proactiveCriterion; // @synthesize proactiveCriterion=_proactiveCriterion;
@property (nonatomic) unsigned long long rejectReason; // @synthesize rejectReason=_rejectReason;
@property (readonly, nonatomic) double relevanceScore; // @synthesize relevanceScore=_relevanceScore;
@property (strong, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property (readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) PXTimelineCrop *suggestedCrop; // @synthesize suggestedCrop=_suggestedCrop;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)_descriptionForRejectReason:(unsigned long long)arg1;
+ (id)_descriptionForTimelineContentType:(unsigned long long)arg1;
+ (id)emptyWidgetURL;
+ (id)fallbackEntryForSize:(unsigned long long)arg1;
+ (id)placeholderEntry;
- (void).cxx_destruct;
- (id)_initWithTimelineEntry:(id)arg1;
- (id)_initWithTitle:(id)arg1 subtitle:(id)arg2 localIdentifier:(id)arg3 assetLocalIdentifier:(id)arg4 deeplink:(id)arg5 contentType:(unsigned long long)arg6 relevanceScore:(double)arg7 proactiveCriterion:(id)arg8 suggestedCrop:(id)arg9 rejectReason:(unsigned long long)arg10;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithFeaturedPhoto:(id)arg1 andFeaturedPhotoKeyAsset:(id)arg2;
- (id)initWithFeaturedPhoto:(id)arg1 andFeaturedPhotoKeyAsset:(id)arg2 suggestedCrop:(id)arg3;
- (id)initWithMemory:(id)arg1 andMemoryKeyAsset:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

