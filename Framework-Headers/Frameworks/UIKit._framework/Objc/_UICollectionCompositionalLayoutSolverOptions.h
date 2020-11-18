//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverOptions : NSObject
{
    BOOL _layoutRTL;
    BOOL _roundsToScreenScale;
    double _interSectionSpacing;
    Class _layoutAttributesClass;
    Class _invalidationContextClass;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_globalSupplementaryItems;
    CDUnknownBlockType _decorationRegistrationHandler;
}

@property (copy, nonatomic) CDUnknownBlockType decorationRegistrationHandler; // @synthesize decorationRegistrationHandler=_decorationRegistrationHandler;
@property (copy, nonatomic) NSArray *globalSupplementaryItems; // @synthesize globalSupplementaryItems=_globalSupplementaryItems;
@property (nonatomic) double interSectionSpacing; // @synthesize interSectionSpacing=_interSectionSpacing;
@property (strong, nonatomic) Class invalidationContextClass; // @synthesize invalidationContextClass=_invalidationContextClass;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (strong, nonatomic) Class layoutAttributesClass; // @synthesize layoutAttributesClass=_layoutAttributesClass;
@property (nonatomic) BOOL layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property (nonatomic) BOOL roundsToScreenScale; // @synthesize roundsToScreenScale=_roundsToScreenScale;

+ (id)defaultOptions;
- (void).cxx_destruct;

@end
