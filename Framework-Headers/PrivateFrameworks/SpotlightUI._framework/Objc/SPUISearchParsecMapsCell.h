//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightUI/SPUISearchTableViewCell.h>

#import <SpotlightUI/SPUISearchContactButtonsViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, _MKResultView;

@interface SPUISearchParsecMapsCell : SPUISearchTableViewCell <SPUISearchContactButtonsViewDelegate>
{
    _MKResultView *_resultView;
    NSLayoutConstraint *_heightConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSection:(id)arg1 result:(id)arg2;
- (void).cxx_destruct;
- (void)buttonPressedWithType:(unsigned long long)arg1;
- (id)constantConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3;

@end

