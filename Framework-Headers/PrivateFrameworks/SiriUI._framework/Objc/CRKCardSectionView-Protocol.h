//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class NSString, UIView;
@protocol CRCardSection, CRKComposableView;

@protocol CRKCardSectionView <NSObject>

@property (copy, nonatomic) NSString *cardSectionViewIdentifier;
@property (weak, nonatomic) UIView<CRKComposableView> *composedSuperview;

+ (struct CGSize)sizeThatFitsCardSection:(id<CRCardSection>)arg1 boundingSize:(struct CGSize)arg2;
- (void)removeFromComposedSuperview;
@end

