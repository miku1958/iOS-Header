//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

#import <UIKitCore/UICollectionViewTableAllRowAttributes-Protocol.h>

@class UIColor, UIVisualEffect;

__attribute__((visibility("hidden")))
@interface UITableViewCollectionCell : UITableViewCell <UICollectionViewTableAllRowAttributes>
{
}

@property (nonatomic) long long accessoryType;
@property (copy, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
@property (nonatomic) struct UIEdgeInsets backgroundInset;
@property (nonatomic) double defaultLeadingCellMarginWidth;
@property (nonatomic) double defaultTrailingCellMarginWidth;
@property (nonatomic) BOOL drawsSeparatorAtBottomOfSection;
@property (nonatomic) BOOL drawsSeparatorAtTopOfSection;
@property (nonatomic) long long editingStyle;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) double indexBarExtentFromEdge;
@property (nonatomic) BOOL insetsContentViewsToSafeArea;
@property (nonatomic) BOOL layoutMarginsFollowReadableWidth; // @dynamic layoutMarginsFollowReadableWidth;
@property (nonatomic) double sectionBorderWidth;
@property (nonatomic) int sectionLocation; // @dynamic sectionLocation;
@property (copy, nonatomic) UIColor *separatorColor; // @dynamic separatorColor;
@property (strong, nonatomic) UIVisualEffect *separatorEffect;
@property (nonatomic) struct UIEdgeInsets separatorInset;
@property (nonatomic) BOOL separatorInsetIsRelativeToCellEdges;
@property (nonatomic) long long separatorStyle; // @dynamic separatorStyle;
@property (nonatomic) BOOL shouldIndentWhileEditing;
@property (nonatomic) BOOL showsReorderControl;


@end

