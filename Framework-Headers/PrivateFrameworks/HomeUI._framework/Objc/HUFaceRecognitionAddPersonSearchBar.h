//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUSearchBar-Protocol.h>

@class NSArray, NSString, UIImageView, UITextField;

@interface HUFaceRecognitionAddPersonSearchBar : UIView <HUSearchBar>
{
    UIImageView *_faceCropView;
    UITextField *_searchTextField;
    NSArray *_constraints;
    UIView *_separatorView;
}

@property (strong, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIImageView *faceCropView; // @synthesize faceCropView=_faceCropView;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property (readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property (readonly) Class superclass;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)updateConstraints;

@end
