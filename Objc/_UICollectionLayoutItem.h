//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting-Protocol.h>

@class NSArray, NSString, _UICollectionLayoutEdgeSpacing, _UICollectionLayoutSize;

@interface _UICollectionLayoutItem : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>
{
    NSArray *_supplementaryItems;
    NSArray *_decorationItems;
    _UICollectionLayoutEdgeSpacing *_edgeSpacing;
    NSString *_name;
    _UICollectionLayoutSize *_size;
    struct NSDirectionalEdgeInsets _contentInsets;
}

@property (nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (copy, nonatomic) _UICollectionLayoutEdgeSpacing *edgeSpacing; // @synthesize edgeSpacing=_edgeSpacing;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) _UICollectionLayoutSize *size; // @synthesize size=_size;

+ (id)itemWithSize:(id)arg1;
+ (id)itemWithSize:(id)arg1 decorationItems:(id)arg2;
+ (id)itemWithSize:(id)arg1 supplementaryItems:(id)arg2;
+ (id)itemWithSize:(id)arg1 supplementaryItems:(id)arg2 decorationItems:(id)arg3;
- (void).cxx_destruct;
- (id)_apiRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(id)arg1 supplementaryItems:(id)arg2 decorationItems:(id)arg3 contentInsets:(struct NSDirectionalEdgeInsets)arg4 edgeSpacing:(id)arg5 name:(id)arg6;

@end

