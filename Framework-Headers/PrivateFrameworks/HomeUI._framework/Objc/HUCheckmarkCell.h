//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HUTitleDescriptionContentView, NSString;
@protocol HFStringGenerator;

@interface HUCheckmarkCell : UITableViewCell <HUDisableableCellProtocol>
{
    BOOL _disabled;
    BOOL _checked;
    HUTitleDescriptionContentView *_titleDescriptionView;
}

@property (nonatomic) BOOL checked; // @synthesize checked=_checked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<HFStringGenerator> descriptionText;
@property (nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) HUTitleDescriptionContentView *titleDescriptionView; // @synthesize titleDescriptionView=_titleDescriptionView;
@property (strong, nonatomic) id<HFStringGenerator> titleText;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end
