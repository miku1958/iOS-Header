//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HMFaceCrop, NSArray, NSString, UIImage, UIImageView;
@protocol HUResizableCellDelegate;

@interface HUPersonFaceCropTableCell : UITableViewCell <HUCellProtocol>
{
    HFItem *_item;
    HMFaceCrop *_personFaceCrop;
    UIImage *_faceImage;
    UIImageView *_faceCropView;
    NSArray *_constraints;
}

@property (strong, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIImageView *faceCropView; // @synthesize faceCropView=_faceCropView;
@property (strong, nonatomic) UIImage *faceImage; // @synthesize faceImage=_faceImage;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (strong, nonatomic) HMFaceCrop *personFaceCrop; // @synthesize personFaceCrop=_personFaceCrop;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

