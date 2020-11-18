//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXDebugHierarchyElement-Protocol.h>

@class NSString;

@interface PXDebugHierarchyMutableElement : NSObject <PXDebugHierarchyElement, NSCopying>
{
    BOOL _canHaveChildren;
    unsigned long long _identifier;
    double _zPosition;
    double _alpha;
    struct CGImage *_previewImage;
    NSString *_contentsGravity;
    struct CGColor *_backgroundColor;
    NSString *_name;
    unsigned long long _parentIdentifier;
    struct CGRect _frame;
    struct CGRect _contentsRect;
}

@property (nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) BOOL canHaveChildren; // @synthesize canHaveChildren=_canHaveChildren;
@property (strong, nonatomic) NSString *contentsGravity; // @synthesize contentsGravity=_contentsGravity;
@property (nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property (nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property (readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) unsigned long long parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property (nonatomic) struct CGImage *previewImage; // @synthesize previewImage=_previewImage;
@property (nonatomic) double zPosition; // @synthesize zPosition=_zPosition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)prepareForReuse;

@end
