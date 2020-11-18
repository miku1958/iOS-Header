//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UICollectionViewListCell.h>

@class UIImageView, UILabel, UIView, _UICollectionViewOutlineCellDisclosureConfiguration;

@interface _UICollectionViewOutlineCell : _UICollectionViewListCell
{
    BOOL _automaticallyTogglesExpansionState;
    BOOL _selectionFollowsTintColor;
    UIView *_outlineContentView;
    UILabel *_textLabel;
    UIImageView *_imageView;
    _UICollectionViewOutlineCellDisclosureConfiguration *_disclosureConfiguration;
    double _highlightCornerRadius;
}

@property (nonatomic) BOOL automaticallyTogglesExpansionState; // @synthesize automaticallyTogglesExpansionState=_automaticallyTogglesExpansionState;
@property (copy, nonatomic) _UICollectionViewOutlineCellDisclosureConfiguration *disclosureConfiguration; // @synthesize disclosureConfiguration=_disclosureConfiguration;
@property (copy, nonatomic) CDUnknownBlockType disclosureWasTappedHandler; // @dynamic disclosureWasTappedHandler;
@property (nonatomic) double highlightCornerRadius; // @synthesize highlightCornerRadius=_highlightCornerRadius;
@property (strong, nonatomic) id identifier;
@property (readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (strong, nonatomic) UIView *outlineContentView; // @synthesize outlineContentView=_outlineContentView;
@property (nonatomic) BOOL selectionFollowsTintColor; // @synthesize selectionFollowsTintColor=_selectionFollowsTintColor;
@property (readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;

- (void).cxx_destruct;

@end

