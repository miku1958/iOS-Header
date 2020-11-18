//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UICollectionViewCompositionalLayoutConfiguration-Protocol.h>

@class NSArray, NSString;

@interface UICollectionViewCompositionalLayoutConfiguration : NSObject <_UICollectionViewCompositionalLayoutConfiguration, NSCopying>
{
    long long _safeAreaReference;
    long long _scrollDirection;
    double _interSectionSpacing;
    NSArray *_boundarySupplementaryItems;
}

@property (copy, nonatomic) NSArray *boundarySupplementaryItems; // @synthesize boundarySupplementaryItems=_boundarySupplementaryItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interSectionSpacing; // @synthesize interSectionSpacing=_interSectionSpacing;
@property (nonatomic, getter=_safeAreaReference, setter=_setSafeAreaReference:) long long safeAreaReference;
@property (nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property (readonly) Class superclass;

+ (id)defaultConfiguration;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)differencesFromConfiguration:(id)arg1;
- (id)initWithScrollDirection:(long long)arg1 interSectionSpacing:(double)arg2 boundarySupplememtaryItems:(id)arg3 safeAreaReference:(long long)arg4;

@end

