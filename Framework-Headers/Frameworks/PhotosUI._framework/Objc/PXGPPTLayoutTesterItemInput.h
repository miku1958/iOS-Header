//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXLayoutItemInput-Protocol.h>

@class NSString;

@interface PXGPPTLayoutTesterItemInput : NSObject <PXLayoutItemInput>
{
    struct CGSize _size;
    double _weight;
    struct CGRect _preferredCropRect;
    struct CGRect _acceptableCropRect;
}

@property (readonly, nonatomic) struct CGRect acceptableCropRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGPoint positionOffset;
@property (readonly, nonatomic) struct CGRect preferredCropRect;
@property (readonly, nonatomic) struct CGSize size;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGAffineTransform transform;
@property (readonly, nonatomic) double weight;

+ (id)createItemInputsForCount:(long long)arg1;
- (double)weightUsingCriterion:(long long)arg1;

@end

