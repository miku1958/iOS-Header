//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/NSCopying-Protocol.h>

@class NSArray, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface CKBallotLayoutAttributesCollection : NSObject <NSCopying>
{
    UICollectionViewLayoutAttributes *_containerAttributes;
    UICollectionViewLayoutAttributes *_voteCountAttributes;
    UICollectionViewLayoutAttributes *_ackIconAttributes;
    NSArray *_avatarAttributesCollection;
    NSArray *_nameAttributesCollection;
}

@property (strong, nonatomic) UICollectionViewLayoutAttributes *ackIconAttributes; // @synthesize ackIconAttributes=_ackIconAttributes;
@property (strong, nonatomic) NSArray *avatarAttributesCollection; // @synthesize avatarAttributesCollection=_avatarAttributesCollection;
@property (strong, nonatomic) UICollectionViewLayoutAttributes *containerAttributes; // @synthesize containerAttributes=_containerAttributes;
@property (strong, nonatomic) NSArray *nameAttributesCollection; // @synthesize nameAttributesCollection=_nameAttributesCollection;
@property (strong, nonatomic) UICollectionViewLayoutAttributes *voteCountAttributes; // @synthesize voteCountAttributes=_voteCountAttributes;

- (void).cxx_destruct;
- (void)_applyAlphaToAllAttributesAlpha:(double)arg1;
- (void)_setContainerAttributes:(id)arg1 forLayoutMode:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

