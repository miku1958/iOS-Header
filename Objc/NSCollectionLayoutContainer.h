//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCollectionLayoutContainer-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSCollectionLayoutContainer : NSObject <NSCollectionLayoutContainer>
{
    struct CGSize _contentSize;
    struct NSDirectionalEdgeInsets _contentInsets;
}

@property (nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets effectiveContentInsets;
@property (readonly, nonatomic) struct CGSize effectiveContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithContentSize:(struct CGSize)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2;

@end

