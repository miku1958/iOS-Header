//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol VTKComparator, VTKReferenceItemsSource, VTKStoreManager;

__attribute__((visibility("hidden")))
@interface VTKInternalConfiguration : NSObject <NSCopying>
{
    unsigned long long _referenceItemsSourceType;
    unsigned long long _imageComparatorStrategy;
    unsigned long long _comparisonOptions;
    NSMutableArray *_mutableDrawItems;
    NSMutableArray *_mutableExclusionAreas;
    id<VTKReferenceItemsSource> _cachedReferenceItemsSource;
    id<VTKStoreManager> _cachedStoreManager;
    id<VTKComparator> _cachedImageComparator;
}

@property (strong, nonatomic) id<VTKComparator> cachedImageComparator; // @synthesize cachedImageComparator=_cachedImageComparator;
@property (strong, nonatomic) id<VTKReferenceItemsSource> cachedReferenceItemsSource; // @synthesize cachedReferenceItemsSource=_cachedReferenceItemsSource;
@property (strong, nonatomic) id<VTKStoreManager> cachedStoreManager; // @synthesize cachedStoreManager=_cachedStoreManager;
@property (nonatomic) unsigned long long comparisonOptions; // @synthesize comparisonOptions=_comparisonOptions;
@property (readonly, nonatomic) NSArray *drawItems;
@property (readonly, nonatomic) NSArray *exclusionAreas;
@property (readonly, nonatomic) id<VTKComparator> imageComparator;
@property (nonatomic) unsigned long long imageComparatorStrategy; // @synthesize imageComparatorStrategy=_imageComparatorStrategy;
@property (readonly, nonatomic) NSMutableArray *mutableDrawItems; // @synthesize mutableDrawItems=_mutableDrawItems;
@property (readonly, nonatomic) NSMutableArray *mutableExclusionAreas; // @synthesize mutableExclusionAreas=_mutableExclusionAreas;
@property (copy, nonatomic) NSString *referenceImagesDirectory;
@property (readonly, nonatomic) id<VTKReferenceItemsSource> referenceItemsSource;
@property (nonatomic) unsigned long long referenceItemsSourceType; // @synthesize referenceItemsSourceType=_referenceItemsSourceType;
@property (readonly, nonatomic) id<VTKStoreManager> storeManager;

+ (id)_comparatorForStrategy:(unsigned long long)arg1 comparisonOptions:(unsigned long long)arg2;
+ (id)_referenceItemsSourceForType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)addExclusionAreaAt:(struct CGRect)arg1;
- (void)addHorozontalGuideAt:(double)arg1 withColor:(id)arg2;
- (void)addSquareGuideAt:(struct CGRect)arg1 withColor:(id)arg2;
- (void)addVerticalGuideAt:(double)arg1 withColor:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithReferenceItemsSource:(id)arg1 storeManager:(id)arg2 imageComparator:(id)arg3;

@end

