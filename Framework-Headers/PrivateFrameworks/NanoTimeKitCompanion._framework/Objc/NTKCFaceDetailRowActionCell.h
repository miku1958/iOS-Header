//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NTKCSeparatorView;

@interface NTKCFaceDetailRowActionCell : NTKCDetailTableViewCell
{
    NTKCSeparatorView *_topSeparator;
    BOOL _showsTopSeparator;
}

@property (nonatomic) BOOL showsTopSeparator; // @synthesize showsTopSeparator=_showsTopSeparator;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)rowHeight;

@end
