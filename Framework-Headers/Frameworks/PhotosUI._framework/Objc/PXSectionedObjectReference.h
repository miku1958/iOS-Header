//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@protocol NSObject><NSCopying;

@interface PXSectionedObjectReference : NSObject <NSCopying>
{
    id<NSObject><NSCopying> _sectionObject;
    id<NSObject><NSCopying> _itemObject;
    id<NSObject><NSCopying> _subitemObject;
    id<NSObject><NSCopying> _leafObject;
    struct PXSimpleIndexPath _indexPath;
}

@property (readonly, nonatomic) struct PXSimpleIndexPath indexPath; // @synthesize indexPath=_indexPath;
@property (readonly, copy, nonatomic) id<NSObject><NSCopying> itemObject; // @synthesize itemObject=_itemObject;
@property (readonly, copy, nonatomic) id<NSObject><NSCopying> leafObject; // @synthesize leafObject=_leafObject;
@property (readonly, copy, nonatomic) id<NSObject><NSCopying> sectionObject; // @synthesize sectionObject=_sectionObject;
@property (readonly, copy, nonatomic) id<NSObject><NSCopying> subitemObject; // @synthesize subitemObject=_subitemObject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSectionObject:(id)arg1 itemObject:(id)arg2 subitemObject:(id)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (BOOL)isEqual:(id)arg1;

@end

